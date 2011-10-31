package com.ktxsoftware.kje;

public class GameInfo {
	public static Game createGame() {
		return new com.ktxsoftware.sml.SuperMarioLand();
	}
	
	public static String dataDir() {
		return "turrican/sub/robert/sml/";
	}
}