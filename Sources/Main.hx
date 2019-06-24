package;

import kha.Framebuffer;
import kha.Scheduler;
import kha.System;

class Main {
	public static function main() {
		System.start({title: "SML", width: 600, height: 520}, initialized);
	}
	
	private static function initialized(_): Void {
		var game = new SuperMarioLand();
		System.notifyOnFrames(game.render);
		Scheduler.addTimeTask(game.update, 0, 1 / 60);
	}
}
