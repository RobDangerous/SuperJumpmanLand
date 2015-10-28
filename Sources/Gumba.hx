package;

import haxe.io.Bytes;
import kha.Assets;
import kha2d.Animation;
import kha2d.Direction;
import kha.Image;
import kha2d.Scene;

class Gumba extends Enemy {
	private var killcount: Int;
	static private var maxid = 0;
	
	public function new(x: Int, y: Int) {
		super(Assets.images.gumba, Std.int(96 / 3), 32);
		this.x = x;
		this.y = y;
		setAnimation(new Animation([0, 2], 14));
		speedx = -1 * Math.round(Math.pow(1.2, Jumpman.getInstance().getRound()));
		killcount = -1;
	}
	
	public override function kill() {
		super.kill();
		setAnimation(Animation.create(1));
		speedx = 0;
		killcount = 30;
	}
	
	public override function update() {
		super.update();
		if (killcount > 0) {
			--killcount;
			if (killcount == 0) Scene.the.removeEnemy(this);
		}
	}
	
	public override function hitFrom(dir: Direction) {
		if (dir == Direction.LEFT) {
			speedx = -1 * Math.round(Math.pow(1.2, Jumpman.getInstance().getRound()));
		}
		else if (dir == Direction.RIGHT) {
			speedx = 1 * Math.round(Math.pow(1.2, Jumpman.getInstance().getRound()));
		}
	}
	
	/*public function id(): Int {
		return _id;
	}
	
	public function size(): Int {
		return _size;
	}*/
}
