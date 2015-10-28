package;

import kha.Assets;
import kha.Image;
import kha2d.Scene;
import kha2d.Sprite;

class BlockCoin extends Sprite {
	private var count: Int;

	public function new(x: Float, y: Float) {
		super(Assets.images.blockcoin, Assets.images.blockcoin.width, Assets.images.blockcoin.height, 0);
		accy = 0;
		speedy = -2;
		collides = false;
		this.x = x - width / 2;
		this.y = y;
		count = 20;
	}
	
	public override function update() {
		--count;
		if (count == 0) Scene.the.removeEnemy(this);
	}
}
