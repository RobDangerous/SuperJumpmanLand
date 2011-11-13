package com.ktxsoftware.sml;

import com.ktxsoftware.kje.Color;
import com.ktxsoftware.kje.Game;
import com.ktxsoftware.kje.HighscoreList;
import com.ktxsoftware.kje.KeyEvent;
import com.ktxsoftware.kje.Loader;
import com.ktxsoftware.kje.Music;
import com.ktxsoftware.kje.Painter;
import com.ktxsoftware.kje.Scene;
import com.ktxsoftware.kje.Score;
import com.ktxsoftware.kje.Tilemap;

public class SuperMarioLand extends Game {
	private static SuperMarioLand instance;
	private Music music;
	private boolean[] tileColissions;
	private int[][] map, originalmap;
	private String highscoreName = "";
	
	enum Mode {
		Game, Highscore, EnterHighscore
	}
	private Mode mode = Mode.Game;
	
	public SuperMarioLand() {
		super("level.map", "none", 600, 520);
		instance = this;
	}
	
	public static SuperMarioLand getInstance() {
		return instance;
	}

	@Override
	public void init() {
		tileColissions = new boolean[140];
		for (int i = 0; i < 140; ++i) tileColissions[i] = isCollidable(i);
		originalmap = Loader.getInstance().getMap("level.map");
		map = new int[originalmap.length][originalmap[0].length];
		music = Loader.getInstance().getMusic("level1");
		startGame();
	}
	
	public void startGame() {
		if (Jumpman.getInstance() == null) new Jumpman(music);
		Scene.getInstance().clear();
		Scene.getInstance().setBackgroundColor(new Color(255, 255, 255));
		Tilemap tilemap = new Tilemap("sml_tiles.png", 32, 32, map, tileColissions);
		Scene.getInstance().setColissionMap(tilemap);
		Scene.getInstance().addBackgroundTilemap(tilemap, 1);
		int TILE_WIDTH = 32;
		int TILE_HEIGHT = 32;
		for (int x = 0; x < originalmap.length; ++x) {
			for (int y = 0; y < originalmap[0].length; ++y) {
				switch (originalmap[x][y]) {
				case 15:
					map[x][y] = 0;
					Scene.getInstance().addEnemy(new Gumba(x * TILE_WIDTH, y * TILE_HEIGHT));
					break;
				case 16:
					map[x][y] = 0;
					Scene.getInstance().addEnemy(new Koopa(x * TILE_WIDTH, y * TILE_HEIGHT - 16));
					break;
				case 17:
					map[x][y] = 0;
					Scene.getInstance().addEnemy(new Fly(x * TILE_WIDTH - 32, y * TILE_HEIGHT));
					break;
				case 46:
					map[x][y] = 0;
					Scene.getInstance().addEnemy(new Coin(x * TILE_WIDTH, y * TILE_HEIGHT));
					break;
				case 52:
					map[x][y] = 52;
					Scene.getInstance().addEnemy(new Exit(x * TILE_WIDTH, y * TILE_HEIGHT));
					break;
				case 56:
					map[x][y] = 1;
					Scene.getInstance().addEnemy((new BonusBlock(x * TILE_WIDTH, y * TILE_HEIGHT)));
					break;
				default:
					map[x][y] = originalmap[x][y];
					break;
				}
			}
		}
		music.start();
		Jumpman.getInstance().reset();
		Scene.getInstance().addHero(Jumpman.getInstance());
	}
	
	public void showHighscore() {
		Scene.getInstance().clear();
		mode = Mode.EnterHighscore;
		music.stop();
	}
	
	private static boolean isCollidable(int tilenumber) {
		switch (tilenumber) {
		case 1:
		case 6:
		case 7:
		case 8:
		case 26:
		case 33:
		case 39:
		case 48:
		case 49:
		case 50:
		case 53:
		case 56:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 68:
		case 70:
		case 74:
		case 75:
		case 76:
		case 77:
		case 84:
		case 86:
		case 87:
			return true;
		default:
			return false;
		}
	}
	
	@Override
	public void update() {
		super.update();
		music.update();
		Scene.getInstance().camx = (int)Jumpman.getInstance().x + (int)Jumpman.getInstance().width / 2;
	}
	
	@Override
	public void render(Painter painter) {
		switch (mode) {
		case Highscore:
			painter.setColor(255, 255, 255);
			painter.fillRect(0, 0, getWidth(), getHeight());
			painter.setColor(0, 0, 0);
			for (int i = 0; i < 10 && i < HighscoreList.getInstance().getScores().size(); ++i) {
				Score score = HighscoreList.getInstance().getScores().get(i);
				painter.drawString(String.valueOf(i + 1) + ": " + score.getName(), 100, i * 30 + 100);
				painter.drawString(" -           " + String.valueOf(score.getScore()), 200, i * 30 + 100);
			}
			break;
		case EnterHighscore:
			painter.setColor(255, 255, 255);
			painter.fillRect(0, 0, getWidth(), getHeight());
			painter.setColor(0, 0, 0);
			painter.drawString("Enter your name", getWidth() / 2 - 100, 200);
			painter.drawString(highscoreName, getWidth() / 2 - 50, 250);
			break;
		case Game:
			super.render(painter);
			painter.translate(0, 0);
			painter.setColor(0, 0, 0);
			painter.drawString("Score: " + String.valueOf(Jumpman.getInstance().getScore()), 20, 25);
			painter.drawString("Round: " + String.valueOf(Jumpman.getInstance().getRound()), getWidth() - 100, 25);
			break;
		}
	}

	@Override
	public void key(KeyEvent event) {
		switch (mode) {
		case Game:
			switch (event.key) {
			case UP:
				if (event.down) Jumpman.getInstance().setUp();
				else Jumpman.getInstance().up = event.down;
				break;
			case LEFT:
				Jumpman.getInstance().left = event.down;
				break;
			case RIGHT:
				Jumpman.getInstance().right = event.down;
			}
			break;
		case EnterHighscore:
			if (highscoreName.length() > 0) {
				switch (event.key) {
				case ENTER:
					HighscoreList.getInstance().addScore(highscoreName, Jumpman.getInstance().getScore());
					mode = Mode.Highscore;
					break;
				case BACKSPACE:
					highscoreName = highscoreName.substring(0, highscoreName.length() - 1);
					break;
				}
			}
			break;
		}
	}
	
	@Override
	public void charKey(char c) {
		if (mode == Mode.EnterHighscore) {
			if (highscoreName.length() < 20) highscoreName += c;
		}
	}
}