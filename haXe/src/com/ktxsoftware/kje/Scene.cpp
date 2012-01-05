#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Color
#include <com/ktxsoftware/kje/Color.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Direction
#include <com/ktxsoftware/kje/Direction.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Game
#include <com/ktxsoftware/kje/Game.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Painter
#include <com/ktxsoftware/kje/Painter.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Rectangle
#include <com/ktxsoftware/kje/Rectangle.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Scene
#include <com/ktxsoftware/kje/Scene.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Sprite
#include <com/ktxsoftware/kje/Sprite.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Tilemap
#include <com/ktxsoftware/kje/Tilemap.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Tileset
#include <com/ktxsoftware/kje/Tileset.h>
#endif
namespace com{
namespace ktxsoftware{
namespace kje{

Void Scene_obj::__construct()
{
{
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",28)
	::com::ktxsoftware::kje::Scene_obj::instance = hx::ObjectPtr<OBJ_>(this);
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",29)
	this->sprites = Array_obj< ::com::ktxsoftware::kje::Sprite >::__new();
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",30)
	this->heroes = Array_obj< ::com::ktxsoftware::kje::Sprite >::__new();
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",31)
	this->enemies = Array_obj< ::com::ktxsoftware::kje::Sprite >::__new();
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",32)
	this->backgrounds = Array_obj< ::com::ktxsoftware::kje::Tilemap >::__new();
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",33)
	this->foregrounds = Array_obj< ::com::ktxsoftware::kje::Tilemap >::__new();
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",34)
	this->backgroundSpeeds = Array_obj< double >::__new();
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",35)
	this->foregroundSpeeds = Array_obj< double >::__new();
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",38)
	this->backgroundColor = ::com::ktxsoftware::kje::Color_obj::__new((int)0,(int)0,(int)0);
}
;
	return null();
}

Scene_obj::~Scene_obj() { }

Dynamic Scene_obj::__CreateEmpty() { return  new Scene_obj; }
hx::ObjectPtr< Scene_obj > Scene_obj::__new()
{  hx::ObjectPtr< Scene_obj > result = new Scene_obj();
	result->__construct();
	return result;}

Dynamic Scene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scene_obj > result = new Scene_obj();
	result->__construct();
	return result;}

Void Scene_obj::clear( ){
{
		HX_SOURCE_PUSH("Scene_obj::clear")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",42)
		this->colissionMap = null();
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",43)
		this->clearTilemaps();
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",44)
		this->heroes = Array_obj< ::com::ktxsoftware::kje::Sprite >::__new();
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",45)
		this->enemies = Array_obj< ::com::ktxsoftware::kje::Sprite >::__new();
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",46)
		this->sprites = Array_obj< ::com::ktxsoftware::kje::Sprite >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,clear,(void))

Void Scene_obj::clearTilemaps( ){
{
		HX_SOURCE_PUSH("Scene_obj::clearTilemaps")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",50)
		this->backgrounds = Array_obj< ::com::ktxsoftware::kje::Tilemap >::__new();
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",51)
		this->foregrounds = Array_obj< ::com::ktxsoftware::kje::Tilemap >::__new();
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",52)
		this->backgroundSpeeds = Array_obj< double >::__new();
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",53)
		this->foregroundSpeeds = Array_obj< double >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,clearTilemaps,(void))

Void Scene_obj::setBackgroundColor( ::com::ktxsoftware::kje::Color color){
{
		HX_SOURCE_PUSH("Scene_obj::setBackgroundColor")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",56)
		this->backgroundColor = color;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,setBackgroundColor,(void))

Array< ::com::ktxsoftware::kje::Sprite > Scene_obj::getEnemies( ){
	HX_SOURCE_PUSH("Scene_obj::getEnemies")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",60)
	return this->enemies;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,getEnemies,return )

Void Scene_obj::addBackgroundTilemap( ::com::ktxsoftware::kje::Tilemap tilemap,double speed){
{
		HX_SOURCE_PUSH("Scene_obj::addBackgroundTilemap")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",65)
		this->backgrounds->push(tilemap);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",66)
		this->backgroundSpeeds->push(speed);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,addBackgroundTilemap,(void))

Void Scene_obj::addForegroundTilemap( ::com::ktxsoftware::kje::Tilemap tilemap,double speed){
{
		HX_SOURCE_PUSH("Scene_obj::addForegroundTilemap")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",70)
		this->foregrounds->push(tilemap);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",71)
		this->foregroundSpeeds->push(speed);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,addForegroundTilemap,(void))

Void Scene_obj::setColissionMap( ::com::ktxsoftware::kje::Tilemap tilemap){
{
		HX_SOURCE_PUSH("Scene_obj::setColissionMap")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",74)
		this->colissionMap = tilemap;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,setColissionMap,(void))

Void Scene_obj::addHero( ::com::ktxsoftware::kje::Sprite sprite){
{
		HX_SOURCE_PUSH("Scene_obj::addHero")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",79)
		this->heroes->push(sprite);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",80)
		this->sprites->push(sprite);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addHero,(void))

Void Scene_obj::addEnemy( ::com::ktxsoftware::kje::Sprite sprite){
{
		HX_SOURCE_PUSH("Scene_obj::addEnemy")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",84)
		this->enemies->push(sprite);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",85)
		this->sprites->push(sprite);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addEnemy,(void))

Void Scene_obj::removeEnemy( ::com::ktxsoftware::kje::Sprite sprite){
{
		HX_SOURCE_PUSH("Scene_obj::removeEnemy")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",89)
		this->enemies->remove(sprite);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",90)
		this->sprites->remove(sprite);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeEnemy,(void))

Void Scene_obj::removeHero( ::com::ktxsoftware::kje::Sprite sprite){
{
		HX_SOURCE_PUSH("Scene_obj::removeHero")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",94)
		this->heroes->remove(sprite);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",95)
		this->sprites->remove(sprite);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeHero,(void))

int Scene_obj::adjustCamX( ){
	HX_SOURCE_PUSH("Scene_obj::adjustCamX")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",98)
	if (((this->colissionMap != null()))){
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",100)
		int realcamx = ::Std_obj::_int(::Math_obj::min(::Math_obj::max((int)0,(this->camx - (double(::com::ktxsoftware::kje::Game_obj::getInstance()->getWidth()) / double((int)2)))),((this->colissionMap->getWidth() * this->colissionMap->getTileset()->TILE_WIDTH) - ::com::ktxsoftware::kje::Game_obj::getInstance()->getWidth())));
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",101)
		if (((this->getWidth() < ::com::ktxsoftware::kje::Game_obj::getInstance()->getWidth()))){
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",101)
			realcamx = (int)0;
		}
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",102)
		return realcamx;
	}
	else{
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",104)
		return this->camx;
	}
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,adjustCamX,return )

Void Scene_obj::sort( Array< ::com::ktxsoftware::kje::Sprite > sprites){
{
		HX_SOURCE_PUSH("Scene_obj::sort")

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int run(::com::ktxsoftware::kje::Sprite arg0,::com::ktxsoftware::kje::Sprite arg1){
{
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",108)
				if (((arg0->x < arg1->x))){
					HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",109)
					return (int)-1;
				}
				else{
					HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",110)
					if (((arg0->x == arg1->x))){
						HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",110)
						return (int)0;
					}
					else{
						HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",111)
						return (int)1;
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",107)
		sprites->sort( Dynamic(new _Function_1_1()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,sort,(void))

Void Scene_obj::update( ){
{
		HX_SOURCE_PUSH("Scene_obj::update")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",116)
		int camx = this->adjustCamX();
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",117)
		this->sort(this->sprites);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",118)
		int i = (int)0;
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",119)
		while(((i < this->sprites->length))){
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",120)
			if ((((this->sprites->__get(i)->x + this->sprites->__get(i)->width) > camx))){
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",120)
				break;
			}
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",121)
			++(i);
		}
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",123)
		while(((i < this->sprites->length))){
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",124)
			::com::ktxsoftware::kje::Sprite sprite = this->sprites->__get(i);
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",125)
			if (((sprite->x > (camx + ::com::ktxsoftware::kje::Game_obj::getInstance()->getWidth())))){
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",125)
				break;
			}
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",127)
			sprite->update();
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",128)
			this->move(sprite);
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",129)
			++(i);
		}
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",141)
		this->sort(this->heroes);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",142)
		this->sort(this->enemies);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",143)
		i = (int)0;
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",145)
		while(((i < this->enemies->length))){
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",146)
			if ((((this->enemies->__get(i)->x + this->enemies->__get(i)->width) > camx))){
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",146)
				break;
			}
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",147)
			++(i);
		}
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",149)
		while(((i < this->enemies->length))){
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",150)
			if (((this->enemies->__get(i)->x > (camx + ::com::ktxsoftware::kje::Game_obj::getInstance()->getWidth())))){
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",150)
				break;
			}
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",151)
			::com::ktxsoftware::kje::Rectangle rect1 = this->enemies->__get(i)->collisionRect();
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",152)
			{
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",152)
				int _g1 = (int)0;
				int _g = this->heroes->length;
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",152)
				while(((_g1 < _g))){
					HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",152)
					int i2 = (_g1)++;
					HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",153)
					::com::ktxsoftware::kje::Rectangle rect2 = this->heroes->__get(i2)->collisionRect();
					HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",154)
					if ((rect1->collision(rect2))){
						HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",155)
						this->heroes->__get(i2)->hit(this->enemies->__get(i));
						HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",156)
						this->enemies->__get(i)->hit(this->heroes->__get(i2));
					}
				}
			}
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",159)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,update,(void))

Void Scene_obj::move( ::com::ktxsoftware::kje::Sprite sprite){
{
		HX_SOURCE_PUSH("Scene_obj::move")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",164)
		hx::AddEq(sprite->speedx,sprite->accx);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",165)
		hx::AddEq(sprite->speedy,sprite->accy);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",166)
		if ((sprite->collides)){
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",167)
			if (((sprite->speedy > sprite->maxspeedy))){
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",167)
				sprite->speedy = sprite->maxspeedy;
			}
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",168)
			hx::AddEq(sprite->x,sprite->speedx);
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",170)
			if (((this->colissionMap != null()))){
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",171)
				if (((sprite->speedx > (int)0))){
					HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",171)
					if ((this->colissionMap->collideright(sprite))){
						HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",171)
						sprite->hitFrom(::com::ktxsoftware::kje::Direction_obj::LEFT_dyn());
					}
				}
				else{
					HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",172)
					if (((sprite->speedx < (int)0))){
						HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",172)
						if ((this->colissionMap->collideleft(sprite))){
							HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",172)
							sprite->hitFrom(::com::ktxsoftware::kje::Direction_obj::RIGHT_dyn());
						}
					}
				}
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",173)
				hx::AddEq(sprite->y,sprite->speedy);
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",174)
				if (((sprite->speedy > (int)0))){
					HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",174)
					if ((this->colissionMap->collidedown(sprite))){
						HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",174)
						sprite->hitFrom(::com::ktxsoftware::kje::Direction_obj::UP_dyn());
					}
				}
				else{
					HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",175)
					if (((sprite->speedy < (int)0))){
						HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",175)
						if ((this->colissionMap->collideup(sprite))){
							HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",175)
							sprite->hitFrom(::com::ktxsoftware::kje::Direction_obj::DOWN_dyn());
						}
					}
				}
			}
		}
		else{
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",179)
			hx::AddEq(sprite->x,sprite->speedx);
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",180)
			hx::AddEq(sprite->y,sprite->speedy);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,move,(void))

Void Scene_obj::render( ::com::ktxsoftware::kje::Painter painter){
{
		HX_SOURCE_PUSH("Scene_obj::render")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",185)
		painter->translate((int)0,(int)0);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",186)
		painter->setColor(this->backgroundColor->r,this->backgroundColor->g,this->backgroundColor->b);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",187)
		painter->clear();
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",189)
		int camx = this->adjustCamX();
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",191)
		{
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",191)
			int _g1 = (int)0;
			int _g = this->backgrounds->length;
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",191)
			while(((_g1 < _g))){
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",191)
				int i = (_g1)++;
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",192)
				painter->translate((-(camx) * this->backgroundSpeeds->__get(i)),(this->camy * this->backgroundSpeeds->__get(i)));
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",193)
				this->backgrounds->__get(i)->render(painter,::Std_obj::_int((camx * this->backgroundSpeeds->__get(i))),(int)0,::com::ktxsoftware::kje::Game_obj::getInstance()->getWidth(),::com::ktxsoftware::kje::Game_obj::getInstance()->getHeight());
			}
		}
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",196)
		painter->translate(-(camx),this->camy);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",198)
		{
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",198)
			int _g = (int)0;
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",198)
			while(((_g < (int)10))){
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",198)
				int z = (_g)++;
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",199)
				int i = (int)0;
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",200)
				while(((i < this->sprites->length))){
					HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",201)
					if ((((this->sprites->__get(i)->x + this->sprites->__get(i)->width) > camx))){
						HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",201)
						break;
					}
					HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",202)
					++(i);
				}
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",204)
				while(((i < this->sprites->length))){
					HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",205)
					if (((this->sprites->__get(i)->x > (camx + ::com::ktxsoftware::kje::Game_obj::getInstance()->getWidth())))){
						HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",205)
						break;
					}
					HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",206)
					if (((bool((i < this->sprites->length)) && bool((this->sprites->__get(i)->z == z))))){
						HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",206)
						this->sprites->__get(i)->render(painter);
					}
					HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",207)
					++(i);
				}
			}
		}
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",211)
		{
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",211)
			int _g1 = (int)0;
			int _g = this->foregrounds->length;
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",211)
			while(((_g1 < _g))){
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",211)
				int i = (_g1)++;
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",212)
				painter->translate((-(camx) * this->foregroundSpeeds->__get(i)),(this->camy * this->foregroundSpeeds->__get(i)));
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",213)
				this->foregrounds->__get(i)->render(painter,::Std_obj::_int((camx * this->foregroundSpeeds->__get(i))),(int)0,::com::ktxsoftware::kje::Game_obj::getInstance()->getWidth(),::com::ktxsoftware::kje::Game_obj::getInstance()->getHeight());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,render,(void))

double Scene_obj::getWidth( ){
	HX_SOURCE_PUSH("Scene_obj::getWidth")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",217)
	if (((this->colissionMap != null()))){
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",218)
		return (this->colissionMap->getWidth() * this->colissionMap->getTileset()->TILE_WIDTH);
	}
	else{
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",219)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,getWidth,return )

::com::ktxsoftware::kje::Scene Scene_obj::instance;

::com::ktxsoftware::kje::Scene Scene_obj::getInstance( ){
	HX_SOURCE_PUSH("Scene_obj::getInstance")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Scene.hx",23)
	return ::com::ktxsoftware::kje::Scene_obj::instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,getInstance,return )


Scene_obj::Scene_obj()
{
}

void Scene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scene);
	HX_MARK_MEMBER_NAME(colissionMap,"colissionMap");
	HX_MARK_MEMBER_NAME(backgrounds,"backgrounds");
	HX_MARK_MEMBER_NAME(foregrounds,"foregrounds");
	HX_MARK_MEMBER_NAME(backgroundSpeeds,"backgroundSpeeds");
	HX_MARK_MEMBER_NAME(foregroundSpeeds,"foregroundSpeeds");
	HX_MARK_MEMBER_NAME(heroes,"heroes");
	HX_MARK_MEMBER_NAME(sprites,"sprites");
	HX_MARK_MEMBER_NAME(enemies,"enemies");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(camx,"camx");
	HX_MARK_MEMBER_NAME(camy,"camy");
	HX_MARK_END_CLASS();
}

Dynamic Scene_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"camx") ) { return camx; }
		if (HX_FIELD_EQ(inName,"camy") ) { return camy; }
		if (HX_FIELD_EQ(inName,"sort") ) { return sort_dyn(); }
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"heroes") ) { return heroes; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sprites") ) { return sprites; }
		if (HX_FIELD_EQ(inName,"enemies") ) { return enemies; }
		if (HX_FIELD_EQ(inName,"addHero") ) { return addHero_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return instance; }
		if (HX_FIELD_EQ(inName,"addEnemy") ) { return addEnemy_dyn(); }
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getEnemies") ) { return getEnemies_dyn(); }
		if (HX_FIELD_EQ(inName,"removeHero") ) { return removeHero_dyn(); }
		if (HX_FIELD_EQ(inName,"adjustCamX") ) { return adjustCamX_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		if (HX_FIELD_EQ(inName,"backgrounds") ) { return backgrounds; }
		if (HX_FIELD_EQ(inName,"foregrounds") ) { return foregrounds; }
		if (HX_FIELD_EQ(inName,"removeEnemy") ) { return removeEnemy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"colissionMap") ) { return colissionMap; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"clearTilemaps") ) { return clearTilemaps_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return backgroundColor; }
		if (HX_FIELD_EQ(inName,"setColissionMap") ) { return setColissionMap_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"backgroundSpeeds") ) { return backgroundSpeeds; }
		if (HX_FIELD_EQ(inName,"foregroundSpeeds") ) { return foregroundSpeeds; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setBackgroundColor") ) { return setBackgroundColor_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"addBackgroundTilemap") ) { return addBackgroundTilemap_dyn(); }
		if (HX_FIELD_EQ(inName,"addForegroundTilemap") ) { return addForegroundTilemap_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Scene_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"camx") ) { camx=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camy") ) { camy=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"heroes") ) { heroes=inValue.Cast< Array< ::com::ktxsoftware::kje::Sprite > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sprites") ) { sprites=inValue.Cast< Array< ::com::ktxsoftware::kje::Sprite > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enemies") ) { enemies=inValue.Cast< Array< ::com::ktxsoftware::kje::Sprite > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::com::ktxsoftware::kje::Scene >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"backgrounds") ) { backgrounds=inValue.Cast< Array< ::com::ktxsoftware::kje::Tilemap > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"foregrounds") ) { foregrounds=inValue.Cast< Array< ::com::ktxsoftware::kje::Tilemap > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"colissionMap") ) { colissionMap=inValue.Cast< ::com::ktxsoftware::kje::Tilemap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { backgroundColor=inValue.Cast< ::com::ktxsoftware::kje::Color >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"backgroundSpeeds") ) { backgroundSpeeds=inValue.Cast< Array< double > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"foregroundSpeeds") ) { foregroundSpeeds=inValue.Cast< Array< double > >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Scene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("colissionMap"));
	outFields->push(HX_CSTRING("backgrounds"));
	outFields->push(HX_CSTRING("foregrounds"));
	outFields->push(HX_CSTRING("backgroundSpeeds"));
	outFields->push(HX_CSTRING("foregroundSpeeds"));
	outFields->push(HX_CSTRING("heroes"));
	outFields->push(HX_CSTRING("sprites"));
	outFields->push(HX_CSTRING("enemies"));
	outFields->push(HX_CSTRING("backgroundColor"));
	outFields->push(HX_CSTRING("camx"));
	outFields->push(HX_CSTRING("camy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("instance"),
	HX_CSTRING("getInstance"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("colissionMap"),
	HX_CSTRING("backgrounds"),
	HX_CSTRING("foregrounds"),
	HX_CSTRING("backgroundSpeeds"),
	HX_CSTRING("foregroundSpeeds"),
	HX_CSTRING("heroes"),
	HX_CSTRING("sprites"),
	HX_CSTRING("enemies"),
	HX_CSTRING("backgroundColor"),
	HX_CSTRING("camx"),
	HX_CSTRING("camy"),
	HX_CSTRING("clear"),
	HX_CSTRING("clearTilemaps"),
	HX_CSTRING("setBackgroundColor"),
	HX_CSTRING("getEnemies"),
	HX_CSTRING("addBackgroundTilemap"),
	HX_CSTRING("addForegroundTilemap"),
	HX_CSTRING("setColissionMap"),
	HX_CSTRING("addHero"),
	HX_CSTRING("addEnemy"),
	HX_CSTRING("removeEnemy"),
	HX_CSTRING("removeHero"),
	HX_CSTRING("adjustCamX"),
	HX_CSTRING("sort"),
	HX_CSTRING("update"),
	HX_CSTRING("move"),
	HX_CSTRING("render"),
	HX_CSTRING("getWidth"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scene_obj::instance,"instance");
};

Class Scene_obj::__mClass;

void Scene_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.kje.Scene"), hx::TCanCast< Scene_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Scene_obj::__boot()
{
	hx::Static(instance);
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje
