package com.ktxsoftware.sml;

import com.ktxsoftware.kje.Animation;
import com.ktxsoftware.kje.Direction;
import com.ktxsoftware.kje.Image;
import com.ktxsoftware.kje.Loader;
import com.ktxsoftware.kje.Scene;

public class Gumba extends Enemy {
	private static Image image = Loader.getInstance().getImage("gumba.png");
	private int killcount = -1;
	
	public Gumba(int x, int y) {
		super(image, 96 / 3, 32);
		this.x = x;
		this.y = y;
		setAnimation(new Animation(new int[]{0, 2}, 14));
		speedx = -1 * Math.round(Math.pow(1.2, Jumpman.getInstance().getRound()));
	}
	
	public void kill() {
		super.kill();
		setAnimation(new Animation(1));
		speedx = 0;
		killcount = 30;
	}
	
	public void update() {
		super.update();
		if (killcount > 0) {
			--killcount;
			if (killcount == 0) Scene.getInstance().removeEnemy(this);
		}
	}
	
	public void hit(Direction dir) {
		if (dir == Direction.LEFT) {
			speedx = -1 * Math.round(Math.pow(1.2, Jumpman.getInstance().getRound()));
		}
		else if (dir == Direction.RIGHT) {
			speedx = 1 * Math.round(Math.pow(1.2, Jumpman.getInstance().getRound()));
		}
	}
}