package;

import kha.Framebuffer;
import kha.Scheduler;
import kha.System;

class Main {
	public static function main() {
		System.init("SML", 600, 520, initialized);
	}
	
	private static function initialized(): Void {
		var game = new SuperMarioLand();
		System.notifyOnRender(game.render);
		Scheduler.addTimeTask(game.update, 0, 1 / 60);
	}
}
