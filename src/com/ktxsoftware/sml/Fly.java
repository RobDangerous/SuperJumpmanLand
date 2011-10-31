package com.ktxsoftware.sml;

import com.ktxsoftware.kje.Animation;
import com.ktxsoftware.kje.Direction;
import com.ktxsoftware.kje.Image;
import com.ktxsoftware.kje.Loader;
import com.ktxsoftware.kje.Rectangle;

public class Fly extends Enemy {
	private static Image image = Loader.getInstance().getImage("fly.png");
	private int killcount = -1;
	private int count = 0;
	private boolean jumping = false;
	private boolean left = true;
	private boolean killed = false;
	private static Animation leftAnim = new Animation(new int[]{0, 1}, 8), rightAnim = new Animation(new int[]{4, 5}, 8);

	public Fly(int x, int y) {
		super(image, 16 * 4, 56);
		this.x = x;
		this.y = y;
		setAnimation(leftAnim);
		collider = new Rectangle(0, 16, 16 * 4, 56 - 16);
	}
	
	public void update() {
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
	
	public void kill() {
		super.kill();
		killed = true;
		if (left) setAnimation(new Animation(2));
		else setAnimation(new Animation(3));
		killcount = 60;
	}
	
	public void hit(Direction dir) {
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