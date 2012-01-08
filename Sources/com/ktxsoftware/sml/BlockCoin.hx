package com.ktxsoftware.sml;

import com.ktxsoftware.kha.Image;
import com.ktxsoftware.kha.Loader;
import com.ktxsoftware.kha.Scene;
import com.ktxsoftware.kha.Sprite;

class BlockCoin extends Sprite {
	static var image : Image;
	var count : Int;
	static var initialized = false;
	
	static function init() {
		if (!initialized) {
			image = Loader.getInstance().getImage("blockcoin.png");
			initialized = true;
		}
	}
	
	public function new(x : Float, y : Float) {
		init();
		super(BlockCoin.image, BlockCoin.image.getWidth(), BlockCoin.image.getHeight(), 0);
		accy = 0;
		speedy = -2;
		collides = false;
		this.x = x - width / 2;
		this.y = y;
		count = 20;
	}
	
	public override function update() {
		--count;
		if (count == 0) Scene.getInstance().removeEnemy(this);
	}
}