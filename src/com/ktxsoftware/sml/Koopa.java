package com.ktxsoftware.sml;

import com.ktxsoftware.kje.Animation;
import com.ktxsoftware.kje.Direction;
import com.ktxsoftware.kje.Image;
import com.ktxsoftware.kje.Loader;
import com.ktxsoftware.kje.Rectangle;
import com.ktxsoftware.kje.Scene;
import com.ktxsoftware.kje.Sprite;

public class Koopa extends Enemy {
	private static Image image = Loader.getInstance().getImage("koopa.png");
	private int killcount = -1;
	private Animation leftAnim, rightAnim;
	
	public Koopa(int x, int y) {
		super(image, 16 * 4, 48);
		this.x = x;
		this.y = y;
		leftAnim = new Animation(new int[]{0, 1}, 10);
		rightAnim = new Animation(new int[]{2, 3}, 10);
		setAnimation(leftAnim);
		speedx = -1 * Math.round(Math.pow(1.2, Jumpman.getInstance().getRound()));
		collider = new Rectangle(0, 16, 16 * 4, 48 - 16);
	}
	
	public void update() {
		if (killcount > 0) {
			--killcount;
			if (killcount == 0) Scene.getInstance().removeEnemy(this);
		}
		super.update();
	}

	public void kill() {
		super.kill();
		speedx = 0;
		int[] anim = new int[]{4, 5, 4, 5, 4, 5, 4, 5, 6, 7};
		setAnimation(new Animation(anim, 14));
		killcount = anim.length * 14;
	}
	
	@Override
	public void hit(Sprite sprite){
		if(killcount > 0 && killcount < 2 * 14){
			Jumpman.getInstance().die();
		}
		else{
			super.hit(sprite);
		}
	}
	
	@Override
	public void hit(Direction dir) {
		if (dir == Direction.LEFT) {
			setAnimation(leftAnim);
			speedx = -1 * Math.round(Math.pow(1.2, Jumpman.getInstance().getRound()));
		}
		else if (dir == Direction.RIGHT) {
			setAnimation(rightAnim);
			speedx = 1 * Math.round(Math.pow(1.2, Jumpman.getInstance().getRound()));
		}
	}
}