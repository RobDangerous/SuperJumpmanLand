package com.ktxsoftware.sml;

import com.ktxsoftware.kje.Image;
import com.ktxsoftware.kje.Loader;
import com.ktxsoftware.kje.Scene;
import com.ktxsoftware.kje.Sound;
import com.ktxsoftware.kje.Sprite;

public class Coin extends Sprite {
	private static Image image = Loader.getInstance().getImage("coin.png");
	private static Sound sound = Loader.getInstance().getSound("coin");
	
	public Coin(int x, int y) {
		super(image, 28, 32, 0);
		this.x = x;
		this.y = y;
		accy = 0;
	}
	
	public void hit(Sprite sprite) {
		sound.play();
		Scene.getInstance().removeEnemy(this);
		Jumpman.getInstance().selectCoin();
	}
}