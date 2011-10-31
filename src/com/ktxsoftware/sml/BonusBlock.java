package com.ktxsoftware.sml;

import com.ktxsoftware.kje.Animation;
import com.ktxsoftware.kje.Image;
import com.ktxsoftware.kje.Loader;
import com.ktxsoftware.kje.Rectangle;
import com.ktxsoftware.kje.Scene;
import com.ktxsoftware.kje.Sound;
import com.ktxsoftware.kje.Sprite;

public class BonusBlock extends Sprite {
	private static Image image = Loader.getInstance().getImage("bonusblock.png");
	private static Sound sound = Loader.getInstance().getSound("coin");
	private int downcount = 0;
	private boolean washit = false;
	private static boolean onehit = false;
	
	public BonusBlock(double x, double y) {
		super(image, image.getWidth() / 2, image.getHeight(), 0);
		this.x = x;
		this.y = y;
		accy = 0;
		collider = new Rectangle(0, 0, image.getWidth() / 2, image.getHeight() + 14);
	}
	
	public void update() {
		if (downcount > 0) {
			--downcount;
			if (downcount == 0) {
				y += 20;
				onehit = false;
			}
		}
	}
	
	public void hit(Sprite sprite) {
		if (!washit && !onehit && downcount == 0 && sprite.speedy < 0) {
			sound.play();
			y -= 20;
			downcount = 8;
			onehit = true;
			washit = true;
			Scene.getInstance().addEnemy(new BlockCoin(x + width / 2, y));
			setAnimation(new Animation(1));
			Jumpman.getInstance().selectCoin();
		}
	}
}