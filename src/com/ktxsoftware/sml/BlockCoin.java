package com.ktxsoftware.sml;

import com.ktxsoftware.kje.Image;
import com.ktxsoftware.kje.Loader;
import com.ktxsoftware.kje.Scene;
import com.ktxsoftware.kje.Sprite;

public class BlockCoin extends Sprite {
	private static Image image = Loader.getInstance().getImage("blockcoin.png");
	private int count = 20;
	
	public BlockCoin(double x, double y) {
		super(image, image.getWidth(), image.getHeight(), 0);
		accy = 0;
		speedy = -2;
		collides = false;
		this.x = x - width / 2;
		this.y = y;
	}
	
	public void update() {
		--count;
		if (count == 0) Scene.getInstance().removeEnemy(this);
	}
}