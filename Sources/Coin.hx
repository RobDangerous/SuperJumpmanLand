package;

import kha.Assets;
import kha.audio1.Audio;
import kha.Image;
import kha2d.Scene;
import kha.Sound;
import kha2d.Sprite;

class Coin extends Sprite {
	public function new(x: Int, y: Int) {
		super(Assets.images.coin, 28, 32, 0);
		this.x = x;
		this.y = y;
		accy = 0;
	}
	
	public override function hit(sprite: Sprite) {
		Audio.playSound(Assets.sounds.coin);
		Scene.the.removeEnemy(this);
		Jumpman.getInstance().selectCoin();
	}
}
