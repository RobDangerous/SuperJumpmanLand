package;

import kha.Assets;
import kha2d.Animation;
import kha.audio1.Audio;
import kha.Image;
import kha.Rectangle;
import kha2d.Scene;
import kha.Sound;
import kha2d.Sprite;

class BonusBlock extends Sprite {
	private var downcount: Int;
	private var washit: Bool;
	static var onehit: Bool = false;

	public function new(x: Float, y: Float) {
		super(Assets.images.bonusblock, Std.int(Assets.images.bonusblock.width / 2), Assets.images.bonusblock.height, 0);
		this.x = x;
		this.y = y;
		accy = 0;
		washit = false;
		downcount = 0;
		collider = new Rectangle(0, 0, Assets.images.bonusblock.width / 2, Assets.images.bonusblock.height + 14);
	}
	
	public override function update() {
		if (downcount > 0) {
			--downcount;
			if (downcount == 0) {
				y += 20;
				onehit = false;
			}
		}
	}
	
	public override function hit(sprite: Sprite) {
		if (!washit && !onehit && downcount == 0 && sprite.speedy < 0) {
			Audio.playSound(Assets.sounds.coin);
			y -= 20;
			downcount = 8;
			onehit = true;
			washit = true;
			Scene.the.addEnemy(new BlockCoin(x + width / 2, y));
			setAnimation(Animation.create(1));
			Jumpman.getInstance().selectCoin();
		}
	}
}
