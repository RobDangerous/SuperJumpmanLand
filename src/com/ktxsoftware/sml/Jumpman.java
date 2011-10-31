package com.ktxsoftware.sml;

import com.ktxsoftware.kje.Animation;
import com.ktxsoftware.kje.Direction;
import com.ktxsoftware.kje.Loader;
import com.ktxsoftware.kje.Music;
import com.ktxsoftware.kje.Rectangle;
import com.ktxsoftware.kje.Sound;
import com.ktxsoftware.kje.Sprite;

public class Jumpman extends Sprite {
	private static Jumpman instance;
	public boolean left, right, up;
	private boolean lookRight = true;
	private boolean standing, killed = false;
	private int jumpcount;
	private int lastupcount;
	private Animation walkLeft, walkRight, standLeft, standRight, jumpLeft, jumpRight;
	private Sound stompsound = Loader.getInstance().getSound("stomp");
	private Sound jumpsound = Loader.getInstance().getSound("jump");
	private Sound diesound = Loader.getInstance().getSound("die");
	private Music music;
	private int score, round;
	
	public Jumpman(Music music) {
		super(Loader.getInstance().getImage("jumpman.png"), 16 * 4, 16 * 4, 0);
		instance = this;
		x = y = 50;
		standing = false;
		walkLeft = new Animation(new int[]{2, 3, 4, 3}, 6);
		walkRight = new Animation(new int[]{7, 8, 9, 8}, 6);
		standLeft = new Animation(5);
		standRight = new Animation(6);
		jumpLeft = new Animation(1);
		jumpRight = new Animation(10);
		setAnimation(jumpRight);
		collider = new Rectangle(16, 32, 32, 32);
		this.music = music;
		score = 0;
		round = 1;
	}
	
	public static Jumpman getInstance() {
		return instance;
	}
	
	public void reset() {
		x = y = 50;
		standing = false;
		setAnimation(jumpRight);
	}
	
	public void selectCoin() {
		score += 50;
	}
	
	public int getScore() {
		return score;
	}
	
	public int getRound() {
		return round;
	}
	
	public void nextRound() {
		++round;
	}
	
	public void update() {
		if (killed && y > 600) {
			SuperMarioLand.getInstance().showHighscore();
		}
		if (lastupcount > 0) --lastupcount;
		if (!killed) {
			if (y > 600) {
				die();
				return;
			}
			if (right) {
				if (standing) setAnimation(walkRight);
				speedx = 3.0f * Math.round(Math.pow(1.1, getRound()));
				lookRight = true;
			}
			else if (left) {
				if (standing) setAnimation(walkLeft);
				speedx = -3.0f * Math.round(Math.pow(1.1, getRound()));
				lookRight = false;
			}
			else {
				if (standing) setAnimation(lookRight ? standRight : standLeft);
				speedx = 0;
			}
			if (up && standing) {
				jumpsound.play();
				setAnimation(lookRight ? jumpRight : jumpLeft);
				speedy = -8.2;
			}
			else if (!standing && !up && speedy < 0 && jumpcount == 0) speedy = 0;
			
			if (!standing) setAnimation(lookRight ? jumpRight : jumpLeft);
			
			standing = false;
		}
		if (jumpcount > 0) --jumpcount;
		super.update();
	}
	
	public void setUp() {
		up = true;
		lastupcount = 8;
	}
	
	public void hit(Direction dir) {
		if (dir == Direction.UP) {
			standing = true;
			if (lastupcount < 1) up = false;
		}
		else if (dir == Direction.DOWN) speedy = 0;
	}
	
	public void die() {
		music.stop();
		diesound.play();
		setAnimation(new Animation(0));
		speedy = -8;
		speedx = 0;
		collides = false;
		killed = true;
	}
	
	public void hitEnemy(Enemy enemy) {
		if (killed) return;
		if (enemy.isKilled()) return;
		if (enemy.collisionRect().y + enemy.collisionRect().height > collisionRect().y + collisionRect().height + 4) {
			stompsound.play();
			enemy.kill();
			speedy = -8;
			jumpcount = 10;
			standing = false;
			score += 100;
		}
		else die();
	}
}