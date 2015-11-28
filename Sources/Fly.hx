package;

import kha.Assets;
import kha2d.Animation;
import kha2d.Direction;
import kha.Image;
import kha2d.Rectangle;

class Fly extends Enemy {
	private var killcount: Int;
	private var count: Int;
	private var jumping: Bool;
	private var left: Bool;
	static var leftAnim: Animation = new Animation([0, 1], 8);
	static var rightAnim: Animation = new Animation([4, 5], 8);
	
	public function new(x: Int, y: Int) {
		super(Assets.images.fly, 16 * 4, 56);
		this.x = x;
		this.y = y;
		setAnimation(leftAnim);
		collider = new Rectangle(0, 16, 16 * 4, 56 - 16);
		killcount = -1;
		count = 0;
		jumping = false;
		left = true;
		killed = false;
	}
	
	public override function update() {
		if (count < 120 && killcount < 0) {
			++count;
			if (count == 120) {
				jumping = true;
				if (left) speedx = -2 * Math.round(Math.pow(1.2, Jumpman.getInstance().getRound()));
				else speedx = 2 * Math.round(Math.pow(1.2, Jumpman.getInstance().getRound()));
				speedy = -6;
			}
		}
		if (killcount > 0) {
			--killcount;
			if (killcount == 0) {
				if (left) speedx = -1;
				else speedx = 1;
				speedy = -4;
				collides = false;
			}
		}
		super.update();
	}
	
	public override function kill() {
		super.kill();
		killed = true;
		if (left) setAnimation(Animation.create(2));
		else setAnimation(Animation.create(3));
		killcount = 60;
	}
	
	public override function hitFrom(dir: Direction) {
		if (dir == Direction.LEFT && !killed) {
			setAnimation(leftAnim);
			left = true;
			if (jumping) speedx = -2;
		}
		else if (dir == Direction.RIGHT && !killed) {
			setAnimation(rightAnim);
			left = false;
			if (jumping) speedx = 2;
		}
		else if (dir == Direction.UP && jumping) {
			jumping = false;
			count = 0;
			speedx = 0;
		}
	}
}
