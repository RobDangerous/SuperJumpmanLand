package com.ktxsoftware.sml;

import com.ktxsoftware.kje.Image;
import com.ktxsoftware.kje.Sprite;

public abstract class Enemy extends Sprite {
	private boolean killed = false;
	
	public Enemy(Image image, int width, int height) {
		super(image, width, height, 0);
	}

	public void kill() {
		killed = true;
	}
	
	public boolean isKilled() {
		return killed;
	}
	
	public void hit(Sprite sprite) {
		Jumpman.getInstance().hitEnemy(this);
	}
}