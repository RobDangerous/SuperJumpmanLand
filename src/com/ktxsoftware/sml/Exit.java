package com.ktxsoftware.sml;

import com.ktxsoftware.kje.Scene;
import com.ktxsoftware.kje.Sprite;

public class Exit extends Sprite {
	public Exit(int x, int y) {
		super(null, 32, 32, 0);
		this.x = x;
		this.y = y;
		accy = 0;
	}
	
	public void hit(Sprite sprite) {
		Scene.getInstance().removeEnemy(this);
		Jumpman.getInstance().nextRound();
		SuperMarioLand.getInstance().startGame();
	}
}