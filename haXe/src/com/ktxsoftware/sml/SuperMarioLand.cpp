#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Color
#include <com/ktxsoftware/kje/Color.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Game
#include <com/ktxsoftware/kje/Game.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_HighscoreList
#include <com/ktxsoftware/kje/HighscoreList.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Key
#include <com/ktxsoftware/kje/Key.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_KeyEvent
#include <com/ktxsoftware/kje/KeyEvent.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Loader
#include <com/ktxsoftware/kje/Loader.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Music
#include <com/ktxsoftware/kje/Music.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Painter
#include <com/ktxsoftware/kje/Painter.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Scene
#include <com/ktxsoftware/kje/Scene.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Score
#include <com/ktxsoftware/kje/Score.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Sprite
#include <com/ktxsoftware/kje/Sprite.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Tilemap
#include <com/ktxsoftware/kje/Tilemap.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_BonusBlock
#include <com/ktxsoftware/sml/BonusBlock.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_Coin
#include <com/ktxsoftware/sml/Coin.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_Enemy
#include <com/ktxsoftware/sml/Enemy.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_Exit
#include <com/ktxsoftware/sml/Exit.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_Fly
#include <com/ktxsoftware/sml/Fly.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_Gumba
#include <com/ktxsoftware/sml/Gumba.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_Jumpman
#include <com/ktxsoftware/sml/Jumpman.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_Koopa
#include <com/ktxsoftware/sml/Koopa.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_Mode
#include <com/ktxsoftware/sml/Mode.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_SuperMarioLand
#include <com/ktxsoftware/sml/SuperMarioLand.h>
#endif
namespace com{
namespace ktxsoftware{
namespace sml{

Void SuperMarioLand_obj::__construct()
{
{
	HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",31)
	super::__construct((int)600,(int)520);
	HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",32)
	::com::ktxsoftware::sml::SuperMarioLand_obj::instance = hx::ObjectPtr<OBJ_>(this);
	HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",33)
	this->highscoreName = HX_CSTRING("");
	HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",34)
	this->mode = ::com::ktxsoftware::sml::Mode_obj::Game_dyn();
}
;
	return null();
}

SuperMarioLand_obj::~SuperMarioLand_obj() { }

Dynamic SuperMarioLand_obj::__CreateEmpty() { return  new SuperMarioLand_obj; }
hx::ObjectPtr< SuperMarioLand_obj > SuperMarioLand_obj::__new()
{  hx::ObjectPtr< SuperMarioLand_obj > result = new SuperMarioLand_obj();
	result->__construct();
	return result;}

Dynamic SuperMarioLand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SuperMarioLand_obj > result = new SuperMarioLand_obj();
	result->__construct();
	return result;}

Void SuperMarioLand_obj::init( ){
{
		HX_SOURCE_PUSH("SuperMarioLand_obj::init")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",42)
		this->tileColissions = Array_obj< bool >::__new();
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",43)
		{
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",43)
			int _g = (int)0;
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",43)
			while(((_g < (int)140))){
				HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",43)
				int i = (_g)++;
				HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",43)
				this->tileColissions->push(::com::ktxsoftware::sml::SuperMarioLand_obj::isCollidable(i));
			}
		}
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",44)
		this->originalmap = ::com::ktxsoftware::kje::Loader_obj::getInstance()->getMap(HX_CSTRING("level.map"));
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",45)
		this->map = Array_obj< Array< int > >::__new();
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",46)
		{
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",46)
			int _g1 = (int)0;
			int _g = this->originalmap->length;
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",46)
			while(((_g1 < _g))){
				HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",46)
				int x = (_g1)++;
				HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",47)
				this->map->push(Array_obj< int >::__new());
				HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",48)
				{
					HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",48)
					int _g3 = (int)0;
					int _g2 = this->originalmap->__get((int)0)->length;
					HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",48)
					while(((_g3 < _g2))){
						HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",48)
						int y = (_g3)++;
						HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",49)
						this->map->__get(x)->push((int)0);
					}
				}
			}
		}
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",52)
		this->music = ::com::ktxsoftware::kje::Loader_obj::getInstance()->getMusic(HX_CSTRING("level1"));
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",53)
		this->startGame();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SuperMarioLand_obj,init,(void))

Void SuperMarioLand_obj::startGame( ){
{
		HX_SOURCE_PUSH("SuperMarioLand_obj::startGame")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",57)
		if (((::com::ktxsoftware::sml::Jumpman_obj::getInstance() == null()))){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",57)
			::com::ktxsoftware::sml::Jumpman_obj::__new(this->music);
		}
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",58)
		::com::ktxsoftware::kje::Scene_obj::getInstance()->clear();
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",59)
		::com::ktxsoftware::kje::Scene_obj::getInstance()->setBackgroundColor(::com::ktxsoftware::kje::Color_obj::__new((int)255,(int)255,(int)255));
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",60)
		::com::ktxsoftware::kje::Tilemap tilemap = ::com::ktxsoftware::kje::Tilemap_obj::__new(HX_CSTRING("sml_tiles.png"),(int)32,(int)32,this->map,this->tileColissions);
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",61)
		::com::ktxsoftware::kje::Scene_obj::getInstance()->setColissionMap(tilemap);
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",62)
		::com::ktxsoftware::kje::Scene_obj::getInstance()->addBackgroundTilemap(tilemap,(int)1);
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",63)
		int TILE_WIDTH = (int)32;
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",64)
		int TILE_HEIGHT = (int)32;
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",65)
		{
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",65)
			int _g1 = (int)0;
			int _g = this->originalmap->length;
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",65)
			while(((_g1 < _g))){
				HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",65)
				int x = (_g1)++;
				HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",66)
				{
					HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",66)
					int _g3 = (int)0;
					int _g2 = this->originalmap->__get((int)0)->length;
					HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",66)
					while(((_g3 < _g2))){
						HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",66)
						int y = (_g3)++;
						HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",67)
						switch( (int)(this->originalmap->__get(x)->__get(y))){
							case (int)15: {
								HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",69)
								this->map->__get(x)[y] = (int)0;
								HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",70)
								::com::ktxsoftware::kje::Scene_obj::getInstance()->addEnemy(::com::ktxsoftware::sml::Gumba_obj::__new((x * TILE_WIDTH),(y * TILE_HEIGHT)));
							}
							;break;
							case (int)16: {
								HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",72)
								this->map->__get(x)[y] = (int)0;
								HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",73)
								::com::ktxsoftware::kje::Scene_obj::getInstance()->addEnemy(::com::ktxsoftware::sml::Koopa_obj::__new((x * TILE_WIDTH),((y * TILE_HEIGHT) - (int)16)));
							}
							;break;
							case (int)17: {
								HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",75)
								this->map->__get(x)[y] = (int)0;
								HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",76)
								::com::ktxsoftware::kje::Scene_obj::getInstance()->addEnemy(::com::ktxsoftware::sml::Fly_obj::__new(((x * TILE_WIDTH) - (int)32),(y * TILE_HEIGHT)));
							}
							;break;
							case (int)46: {
								HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",78)
								this->map->__get(x)[y] = (int)0;
								HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",79)
								::com::ktxsoftware::kje::Scene_obj::getInstance()->addEnemy(::com::ktxsoftware::sml::Coin_obj::__new((x * TILE_WIDTH),(y * TILE_HEIGHT)));
							}
							;break;
							case (int)52: {
								HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",81)
								this->map->__get(x)[y] = (int)52;
								HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",82)
								::com::ktxsoftware::kje::Scene_obj::getInstance()->addEnemy(::com::ktxsoftware::sml::Exit_obj::__new((x * TILE_WIDTH),(y * TILE_HEIGHT)));
							}
							;break;
							case (int)56: {
								HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",84)
								this->map->__get(x)[y] = (int)1;
								HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",85)
								::com::ktxsoftware::kje::Scene_obj::getInstance()->addEnemy(::com::ktxsoftware::sml::BonusBlock_obj::__new((x * TILE_WIDTH),(y * TILE_HEIGHT)));
							}
							;break;
							default: {
								HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",86)
								this->map->__get(x)[y] = this->originalmap->__get(x)->__get(y);
							}
						}
					}
				}
			}
		}
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",91)
		this->music->start();
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",92)
		::com::ktxsoftware::sml::Jumpman_obj::getInstance()->reset();
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",93)
		::com::ktxsoftware::kje::Scene_obj::getInstance()->addHero(::com::ktxsoftware::sml::Jumpman_obj::getInstance());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SuperMarioLand_obj,startGame,(void))

Void SuperMarioLand_obj::showHighscore( ){
{
		HX_SOURCE_PUSH("SuperMarioLand_obj::showHighscore")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",97)
		::com::ktxsoftware::kje::Scene_obj::getInstance()->clear();
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",98)
		this->mode = ::com::ktxsoftware::sml::Mode_obj::EnterHighscore_dyn();
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",99)
		this->music->stop();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SuperMarioLand_obj,showHighscore,(void))

Void SuperMarioLand_obj::update( ){
{
		HX_SOURCE_PUSH("SuperMarioLand_obj::update")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",138)
		this->super::update();
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",139)
		this->music->update();
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",140)
		::com::ktxsoftware::kje::Scene_obj::getInstance()->camx = (::Std_obj::_int(::com::ktxsoftware::sml::Jumpman_obj::getInstance()->x) + ::Std_obj::_int((double(::com::ktxsoftware::sml::Jumpman_obj::getInstance()->width) / double((int)2))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SuperMarioLand_obj,update,(void))

Void SuperMarioLand_obj::render( ::com::ktxsoftware::kje::Painter painter){
{
		HX_SOURCE_PUSH("SuperMarioLand_obj::render")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",143)
		{
::com::ktxsoftware::sml::Mode _switch_1 = (this->mode);
			switch((_switch_1)->GetIndex()){
				case 1: {
					HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",146)
					painter->setColor((int)255,(int)255,(int)255);
					HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",147)
					painter->fillRect((int)0,(int)0,this->getWidth(),this->getHeight());
					HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",148)
					painter->setColor((int)0,(int)0,(int)0);
					HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",149)
					int i = (int)0;
					HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",150)
					while(((bool((i < (int)10)) && bool((i < ::com::ktxsoftware::kje::HighscoreList_obj::getInstance()->getScores()->length))))){
						HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",151)
						::com::ktxsoftware::kje::Score score = ::com::ktxsoftware::kje::HighscoreList_obj::getInstance()->getScores()->__get(i);
						HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",152)
						painter->drawString(((::Std_obj::string((i + (int)1)) + HX_CSTRING(": ")) + score->getName()),(int)100,((i * (int)30) + (int)100));
						HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",153)
						painter->drawString((HX_CSTRING(" -           ") + ::Std_obj::string(score->getScore())),(int)200,((i * (int)30) + (int)100));
						HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",154)
						++(i);
					}
				}
				;break;
				case 2: {
					HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",158)
					painter->setColor((int)255,(int)255,(int)255);
					HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",159)
					painter->fillRect((int)0,(int)0,this->getWidth(),this->getHeight());
					HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",160)
					painter->setColor((int)0,(int)0,(int)0);
					HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",161)
					painter->drawString(HX_CSTRING("Enter your name"),((double(this->getWidth()) / double((int)2)) - (int)100),(int)200);
					HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",162)
					painter->drawString(this->highscoreName,((double(this->getWidth()) / double((int)2)) - (int)50),(int)250);
				}
				;break;
				case 0: {
					HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",165)
					this->super::render(painter);
					HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",166)
					painter->translate((int)0,(int)0);
					HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",167)
					painter->setColor((int)0,(int)0,(int)0);
					HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",168)
					painter->drawString((HX_CSTRING("Score: ") + ::Std_obj::string(::com::ktxsoftware::sml::Jumpman_obj::getInstance()->getScore())),(int)20,(int)25);
					HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",169)
					painter->drawString((HX_CSTRING("Round: ") + ::Std_obj::string(::com::ktxsoftware::sml::Jumpman_obj::getInstance()->getRound())),(this->getWidth() - (int)100),(int)25);
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SuperMarioLand_obj,render,(void))

Void SuperMarioLand_obj::key( ::com::ktxsoftware::kje::KeyEvent event){
{
		HX_SOURCE_PUSH("SuperMarioLand_obj::key")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",174)
		{
::com::ktxsoftware::sml::Mode _switch_2 = (this->mode);
			switch((_switch_2)->GetIndex()){
				case 0: {
					HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",176)
					{
::com::ktxsoftware::kje::Key _switch_3 = (event->key);
						switch((_switch_3)->GetIndex()){
							case 0: {
								HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",178)
								if ((event->down)){
									HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",179)
									::com::ktxsoftware::sml::Jumpman_obj::getInstance()->setUp();
								}
								else{
									HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",180)
									::com::ktxsoftware::sml::Jumpman_obj::getInstance()->up = event->down;
								}
							}
							;break;
							case 3: {
								HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",181)
								::com::ktxsoftware::sml::Jumpman_obj::getInstance()->left = event->down;
							}
							;break;
							case 1: {
								HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",183)
								::com::ktxsoftware::sml::Jumpman_obj::getInstance()->right = event->down;
							}
							;break;
							default: {
							}
						}
					}
				}
				;break;
				case 2: {
					HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",187)
					if (((this->highscoreName.length > (int)0))){
						HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",188)
						{
::com::ktxsoftware::kje::Key _switch_4 = (event->key);
							switch((_switch_4)->GetIndex()){
								case 6: {
									HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",191)
									::com::ktxsoftware::kje::HighscoreList_obj::getInstance()->addScore(this->highscoreName,::com::ktxsoftware::sml::Jumpman_obj::getInstance()->getScore());
									HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",192)
									this->mode = ::com::ktxsoftware::sml::Mode_obj::Highscore_dyn();
								}
								;break;
								case 7: {
									HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",193)
									this->highscoreName = this->highscoreName.substr((int)0,(this->highscoreName.length - (int)1));
								}
								;break;
								default: {
								}
							}
						}
					}
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SuperMarioLand_obj,key,(void))

Void SuperMarioLand_obj::charKey( ::String c){
{
		HX_SOURCE_PUSH("SuperMarioLand_obj::charKey")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",202)
		if (((this->mode == ::com::ktxsoftware::sml::Mode_obj::EnterHighscore_dyn()))){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",203)
			if (((this->highscoreName.length < (int)20))){
				HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",204)
				hx::AddEq(this->highscoreName,c);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SuperMarioLand_obj,charKey,(void))

::com::ktxsoftware::sml::SuperMarioLand SuperMarioLand_obj::instance;

::com::ktxsoftware::sml::SuperMarioLand SuperMarioLand_obj::getInstance( ){
	HX_SOURCE_PUSH("SuperMarioLand_obj::getInstance")
	HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",37)
	return ::com::ktxsoftware::sml::SuperMarioLand_obj::instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SuperMarioLand_obj,getInstance,return )

bool SuperMarioLand_obj::isCollidable( int tilenumber){
	HX_SOURCE_PUSH("SuperMarioLand_obj::isCollidable")
	HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",102)
	switch( (int)(tilenumber)){
		case (int)1: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",104)
			return true;
		}
		;break;
		case (int)6: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",105)
			return true;
		}
		;break;
		case (int)7: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",106)
			return true;
		}
		;break;
		case (int)8: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",107)
			return true;
		}
		;break;
		case (int)26: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",108)
			return true;
		}
		;break;
		case (int)33: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",109)
			return true;
		}
		;break;
		case (int)39: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",110)
			return true;
		}
		;break;
		case (int)48: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",111)
			return true;
		}
		;break;
		case (int)49: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",112)
			return true;
		}
		;break;
		case (int)50: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",113)
			return true;
		}
		;break;
		case (int)53: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",114)
			return true;
		}
		;break;
		case (int)56: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",115)
			return true;
		}
		;break;
		case (int)60: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",116)
			return true;
		}
		;break;
		case (int)61: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",117)
			return true;
		}
		;break;
		case (int)62: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",118)
			return true;
		}
		;break;
		case (int)63: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",119)
			return true;
		}
		;break;
		case (int)64: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",120)
			return true;
		}
		;break;
		case (int)65: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",121)
			return true;
		}
		;break;
		case (int)67: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",122)
			return true;
		}
		;break;
		case (int)68: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",123)
			return true;
		}
		;break;
		case (int)70: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",124)
			return true;
		}
		;break;
		case (int)74: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",125)
			return true;
		}
		;break;
		case (int)75: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",126)
			return true;
		}
		;break;
		case (int)76: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",127)
			return true;
		}
		;break;
		case (int)77: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",128)
			return true;
		}
		;break;
		case (int)84: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",129)
			return true;
		}
		;break;
		case (int)86: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",130)
			return true;
		}
		;break;
		case (int)87: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",131)
			return true;
		}
		;break;
		default: {
			HX_SOURCE_POS("src/com/ktxsoftware/sml/SuperMarioLand.hx",132)
			return false;
		}
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SuperMarioLand_obj,isCollidable,return )


SuperMarioLand_obj::SuperMarioLand_obj()
{
}

void SuperMarioLand_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SuperMarioLand);
	HX_MARK_MEMBER_NAME(music,"music");
	HX_MARK_MEMBER_NAME(tileColissions,"tileColissions");
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(originalmap,"originalmap");
	HX_MARK_MEMBER_NAME(highscoreName,"highscoreName");
	HX_MARK_MEMBER_NAME(mode,"mode");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic SuperMarioLand_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		if (HX_FIELD_EQ(inName,"key") ) { return key_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { return mode; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { return music; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"charKey") ) { return charKey_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return instance; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startGame") ) { return startGame_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		if (HX_FIELD_EQ(inName,"originalmap") ) { return originalmap; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isCollidable") ) { return isCollidable_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"highscoreName") ) { return highscoreName; }
		if (HX_FIELD_EQ(inName,"showHighscore") ) { return showHighscore_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"tileColissions") ) { return tileColissions; }
	}
	return super::__Field(inName);
}

Dynamic SuperMarioLand_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< Array< Array< int > > >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { mode=inValue.Cast< ::com::ktxsoftware::sml::Mode >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { music=inValue.Cast< ::com::ktxsoftware::kje::Music >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::com::ktxsoftware::sml::SuperMarioLand >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"originalmap") ) { originalmap=inValue.Cast< Array< Array< int > > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"highscoreName") ) { highscoreName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"tileColissions") ) { tileColissions=inValue.Cast< Array< bool > >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void SuperMarioLand_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("music"));
	outFields->push(HX_CSTRING("tileColissions"));
	outFields->push(HX_CSTRING("map"));
	outFields->push(HX_CSTRING("originalmap"));
	outFields->push(HX_CSTRING("highscoreName"));
	outFields->push(HX_CSTRING("mode"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("instance"),
	HX_CSTRING("getInstance"),
	HX_CSTRING("isCollidable"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("music"),
	HX_CSTRING("tileColissions"),
	HX_CSTRING("map"),
	HX_CSTRING("originalmap"),
	HX_CSTRING("highscoreName"),
	HX_CSTRING("mode"),
	HX_CSTRING("init"),
	HX_CSTRING("startGame"),
	HX_CSTRING("showHighscore"),
	HX_CSTRING("update"),
	HX_CSTRING("render"),
	HX_CSTRING("key"),
	HX_CSTRING("charKey"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SuperMarioLand_obj::instance,"instance");
};

Class SuperMarioLand_obj::__mClass;

void SuperMarioLand_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.sml.SuperMarioLand"), hx::TCanCast< SuperMarioLand_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void SuperMarioLand_obj::__boot()
{
	hx::Static(instance);
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace sml
