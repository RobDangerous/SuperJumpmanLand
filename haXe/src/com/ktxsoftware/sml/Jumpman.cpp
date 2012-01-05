#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Animation
#include <com/ktxsoftware/kje/Animation.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Direction
#include <com/ktxsoftware/kje/Direction.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Game
#include <com/ktxsoftware/kje/Game.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Image
#include <com/ktxsoftware/kje/Image.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Loader
#include <com/ktxsoftware/kje/Loader.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Music
#include <com/ktxsoftware/kje/Music.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Rectangle
#include <com/ktxsoftware/kje/Rectangle.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Sound
#include <com/ktxsoftware/kje/Sound.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Sprite
#include <com/ktxsoftware/kje/Sprite.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_Enemy
#include <com/ktxsoftware/sml/Enemy.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_Jumpman
#include <com/ktxsoftware/sml/Jumpman.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_SuperMarioLand
#include <com/ktxsoftware/sml/SuperMarioLand.h>
#endif
namespace com{
namespace ktxsoftware{
namespace sml{

Void Jumpman_obj::__construct(::com::ktxsoftware::kje::Music music)
{
{
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",35)
	super::__construct(::com::ktxsoftware::kje::Loader_obj::getInstance()->getImage(HX_CSTRING("jumpman.png")),(int)64,(int)64,(int)0);
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",36)
	::com::ktxsoftware::sml::Jumpman_obj::instance = hx::ObjectPtr<OBJ_>(this);
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",37)
	this->x = this->y = (int)50;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",38)
	this->standing = false;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",39)
	this->walkLeft = ::com::ktxsoftware::kje::Animation_obj::__new(Array_obj< int >::__new().Add((int)2).Add((int)3).Add((int)4).Add((int)3),(int)6);
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",40)
	this->walkRight = ::com::ktxsoftware::kje::Animation_obj::__new(Array_obj< int >::__new().Add((int)7).Add((int)8).Add((int)9).Add((int)8),(int)6);
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",41)
	this->standLeft = ::com::ktxsoftware::kje::Animation_obj::create((int)5);
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",42)
	this->standRight = ::com::ktxsoftware::kje::Animation_obj::create((int)6);
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",43)
	this->jumpLeft = ::com::ktxsoftware::kje::Animation_obj::create((int)1);
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",44)
	this->jumpRight = ::com::ktxsoftware::kje::Animation_obj::create((int)10);
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",45)
	this->setAnimation(this->jumpRight);
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",46)
	this->collider = ::com::ktxsoftware::kje::Rectangle_obj::__new((int)16,(int)32,(int)32,(int)32);
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",47)
	this->music = music;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",48)
	this->score = (int)0;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",49)
	this->round = (int)1;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",50)
	this->up = false;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",51)
	this->right = false;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",52)
	this->left = false;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",53)
	this->lookRight = true;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",54)
	this->killed = false;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",55)
	this->jumpcount = (int)0;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",56)
	this->stompsound = ::com::ktxsoftware::kje::Loader_obj::getInstance()->getSound(HX_CSTRING("stomp"));
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",57)
	this->jumpsound = ::com::ktxsoftware::kje::Loader_obj::getInstance()->getSound(HX_CSTRING("jump"));
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",58)
	this->diesound = ::com::ktxsoftware::kje::Loader_obj::getInstance()->getSound(HX_CSTRING("die"));
}
;
	return null();
}

Jumpman_obj::~Jumpman_obj() { }

Dynamic Jumpman_obj::__CreateEmpty() { return  new Jumpman_obj; }
hx::ObjectPtr< Jumpman_obj > Jumpman_obj::__new(::com::ktxsoftware::kje::Music music)
{  hx::ObjectPtr< Jumpman_obj > result = new Jumpman_obj();
	result->__construct(music);
	return result;}

Dynamic Jumpman_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Jumpman_obj > result = new Jumpman_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Jumpman_obj::reset( ){
{
		HX_SOURCE_PUSH("Jumpman_obj::reset")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",66)
		this->x = this->y = (int)50;
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",67)
		this->standing = false;
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",68)
		this->setAnimation(this->jumpRight);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Jumpman_obj,reset,(void))

Void Jumpman_obj::selectCoin( ){
{
		HX_SOURCE_PUSH("Jumpman_obj::selectCoin")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",71)
		hx::AddEq(this->score,(int)50);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Jumpman_obj,selectCoin,(void))

int Jumpman_obj::getScore( ){
	HX_SOURCE_PUSH("Jumpman_obj::getScore")
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",75)
	return this->score;
}


HX_DEFINE_DYNAMIC_FUNC0(Jumpman_obj,getScore,return )

int Jumpman_obj::getRound( ){
	HX_SOURCE_PUSH("Jumpman_obj::getRound")
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",79)
	return this->round;
}


HX_DEFINE_DYNAMIC_FUNC0(Jumpman_obj,getRound,return )

Void Jumpman_obj::nextRound( ){
{
		HX_SOURCE_PUSH("Jumpman_obj::nextRound")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",83)
		++(this->round);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Jumpman_obj,nextRound,(void))

Void Jumpman_obj::update( ){
{
		HX_SOURCE_PUSH("Jumpman_obj::update")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",88)
		if (((bool(this->killed) && bool((this->y > (int)600))))){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",88)
			::com::ktxsoftware::sml::SuperMarioLand_obj::getInstance()->showHighscore();
		}
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",91)
		if (((this->lastupcount > (int)0))){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",91)
			--(this->lastupcount);
		}
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",92)
		if ((!(this->killed))){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",93)
			if (((this->y > (int)600))){
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",94)
				this->die();
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",95)
				return null();
			}
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",97)
			if ((this->right)){
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",98)
				if ((this->standing)){
					HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",98)
					this->setAnimation(this->walkRight);
				}
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",99)
				this->speedx = (3.0 * ::Math_obj::round(::Math_obj::pow(1.1,this->getRound())));
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",100)
				this->lookRight = true;
			}
			else{
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",102)
				if ((this->left)){
					HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",103)
					if ((this->standing)){
						HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",103)
						this->setAnimation(this->walkLeft);
					}
					HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",104)
					this->speedx = (-3. * ::Math_obj::round(::Math_obj::pow(1.1,this->getRound())));
					HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",105)
					this->lookRight = false;
				}
				else{
					HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",108)
					if ((this->standing)){
						HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",108)
						this->setAnimation((  ((this->lookRight)) ? ::com::ktxsoftware::kje::Animation(this->standRight) : ::com::ktxsoftware::kje::Animation(this->standLeft) ));
					}
					HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",109)
					this->speedx = (int)0;
				}
			}
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",111)
			if (((bool(this->up) && bool(this->standing)))){
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",112)
				this->jumpsound->play();
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",113)
				this->setAnimation((  ((this->lookRight)) ? ::com::ktxsoftware::kje::Animation(this->jumpRight) : ::com::ktxsoftware::kje::Animation(this->jumpLeft) ));
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",114)
				this->speedy = -8.2;
			}
			else{
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",116)
				if (((bool((bool((bool(!(this->standing)) && bool(!(this->up)))) && bool((this->speedy < (int)0)))) && bool((this->jumpcount == (int)0))))){
					HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",116)
					this->speedy = (int)0;
				}
			}
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",118)
			if ((!(this->standing))){
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",118)
				this->setAnimation((  ((this->lookRight)) ? ::com::ktxsoftware::kje::Animation(this->jumpRight) : ::com::ktxsoftware::kje::Animation(this->jumpLeft) ));
			}
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",120)
			this->standing = false;
		}
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",122)
		if (((this->jumpcount > (int)0))){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",122)
			--(this->jumpcount);
		}
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",123)
		this->super::update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Jumpman_obj,update,(void))

Void Jumpman_obj::setUp( ){
{
		HX_SOURCE_PUSH("Jumpman_obj::setUp")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",127)
		this->up = true;
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",128)
		this->lastupcount = (int)8;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Jumpman_obj,setUp,(void))

Void Jumpman_obj::hitFrom( ::com::ktxsoftware::kje::Direction dir){
{
		HX_SOURCE_PUSH("Jumpman_obj::hitFrom")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",131)
		if (((dir == ::com::ktxsoftware::kje::Direction_obj::UP_dyn()))){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",133)
			this->standing = true;
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",134)
			if (((this->lastupcount < (int)1))){
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",134)
				this->up = false;
			}
		}
		else{
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",136)
			if (((dir == ::com::ktxsoftware::kje::Direction_obj::DOWN_dyn()))){
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",136)
				this->speedy = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Jumpman_obj,hitFrom,(void))

Void Jumpman_obj::die( ){
{
		HX_SOURCE_PUSH("Jumpman_obj::die")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",140)
		this->music->stop();
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",141)
		this->diesound->play();
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",142)
		this->setAnimation(::com::ktxsoftware::kje::Animation_obj::create((int)0));
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",143)
		this->speedy = (int)-8;
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",144)
		this->speedx = (int)0;
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",145)
		this->collides = false;
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",146)
		this->killed = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Jumpman_obj,die,(void))

Void Jumpman_obj::hitEnemy( ::com::ktxsoftware::sml::Enemy enemy){
{
		HX_SOURCE_PUSH("Jumpman_obj::hitEnemy")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",150)
		if ((this->killed)){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",150)
			return null();
		}
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",151)
		if ((enemy->isKilled())){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",151)
			return null();
		}
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",152)
		if ((((enemy->collisionRect()->y + enemy->collisionRect()->height) > ((this->collisionRect()->y + this->collisionRect()->height) + (int)4)))){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",153)
			this->stompsound->play();
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",154)
			enemy->kill();
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",155)
			this->speedy = (int)-8;
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",156)
			this->jumpcount = (int)10;
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",157)
			this->standing = false;
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",158)
			hx::AddEq(this->score,(int)100);
		}
		else{
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",160)
			this->die();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Jumpman_obj,hitEnemy,(void))

::com::ktxsoftware::sml::Jumpman Jumpman_obj::instance;

::com::ktxsoftware::sml::Jumpman Jumpman_obj::getInstance( ){
	HX_SOURCE_PUSH("Jumpman_obj::getInstance")
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Jumpman.hx",61)
	return ::com::ktxsoftware::sml::Jumpman_obj::instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Jumpman_obj,getInstance,return )


Jumpman_obj::Jumpman_obj()
{
}

void Jumpman_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Jumpman);
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(up,"up");
	HX_MARK_MEMBER_NAME(lookRight,"lookRight");
	HX_MARK_MEMBER_NAME(standing,"standing");
	HX_MARK_MEMBER_NAME(killed,"killed");
	HX_MARK_MEMBER_NAME(jumpcount,"jumpcount");
	HX_MARK_MEMBER_NAME(lastupcount,"lastupcount");
	HX_MARK_MEMBER_NAME(walkLeft,"walkLeft");
	HX_MARK_MEMBER_NAME(walkRight,"walkRight");
	HX_MARK_MEMBER_NAME(standLeft,"standLeft");
	HX_MARK_MEMBER_NAME(standRight,"standRight");
	HX_MARK_MEMBER_NAME(jumpLeft,"jumpLeft");
	HX_MARK_MEMBER_NAME(jumpRight,"jumpRight");
	HX_MARK_MEMBER_NAME(stompsound,"stompsound");
	HX_MARK_MEMBER_NAME(jumpsound,"jumpsound");
	HX_MARK_MEMBER_NAME(diesound,"diesound");
	HX_MARK_MEMBER_NAME(music,"music");
	HX_MARK_MEMBER_NAME(score,"score");
	HX_MARK_MEMBER_NAME(round,"round");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic Jumpman_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { return up; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"die") ) { return die_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return left; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return right; }
		if (HX_FIELD_EQ(inName,"music") ) { return music; }
		if (HX_FIELD_EQ(inName,"score") ) { return score; }
		if (HX_FIELD_EQ(inName,"round") ) { return round; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"setUp") ) { return setUp_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"killed") ) { return killed; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hitFrom") ) { return hitFrom_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return instance; }
		if (HX_FIELD_EQ(inName,"standing") ) { return standing; }
		if (HX_FIELD_EQ(inName,"walkLeft") ) { return walkLeft; }
		if (HX_FIELD_EQ(inName,"jumpLeft") ) { return jumpLeft; }
		if (HX_FIELD_EQ(inName,"diesound") ) { return diesound; }
		if (HX_FIELD_EQ(inName,"getScore") ) { return getScore_dyn(); }
		if (HX_FIELD_EQ(inName,"getRound") ) { return getRound_dyn(); }
		if (HX_FIELD_EQ(inName,"hitEnemy") ) { return hitEnemy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lookRight") ) { return lookRight; }
		if (HX_FIELD_EQ(inName,"jumpcount") ) { return jumpcount; }
		if (HX_FIELD_EQ(inName,"walkRight") ) { return walkRight; }
		if (HX_FIELD_EQ(inName,"standLeft") ) { return standLeft; }
		if (HX_FIELD_EQ(inName,"jumpRight") ) { return jumpRight; }
		if (HX_FIELD_EQ(inName,"jumpsound") ) { return jumpsound; }
		if (HX_FIELD_EQ(inName,"nextRound") ) { return nextRound_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"standRight") ) { return standRight; }
		if (HX_FIELD_EQ(inName,"stompsound") ) { return stompsound; }
		if (HX_FIELD_EQ(inName,"selectCoin") ) { return selectCoin_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		if (HX_FIELD_EQ(inName,"lastupcount") ) { return lastupcount; }
	}
	return super::__Field(inName);
}

Dynamic Jumpman_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { up=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"music") ) { music=inValue.Cast< ::com::ktxsoftware::kje::Music >(); return inValue; }
		if (HX_FIELD_EQ(inName,"score") ) { score=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"round") ) { round=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"killed") ) { killed=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::com::ktxsoftware::sml::Jumpman >(); return inValue; }
		if (HX_FIELD_EQ(inName,"standing") ) { standing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"walkLeft") ) { walkLeft=inValue.Cast< ::com::ktxsoftware::kje::Animation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jumpLeft") ) { jumpLeft=inValue.Cast< ::com::ktxsoftware::kje::Animation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"diesound") ) { diesound=inValue.Cast< ::com::ktxsoftware::kje::Sound >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lookRight") ) { lookRight=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jumpcount") ) { jumpcount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"walkRight") ) { walkRight=inValue.Cast< ::com::ktxsoftware::kje::Animation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"standLeft") ) { standLeft=inValue.Cast< ::com::ktxsoftware::kje::Animation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jumpRight") ) { jumpRight=inValue.Cast< ::com::ktxsoftware::kje::Animation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jumpsound") ) { jumpsound=inValue.Cast< ::com::ktxsoftware::kje::Sound >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"standRight") ) { standRight=inValue.Cast< ::com::ktxsoftware::kje::Animation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stompsound") ) { stompsound=inValue.Cast< ::com::ktxsoftware::kje::Sound >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lastupcount") ) { lastupcount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Jumpman_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("left"));
	outFields->push(HX_CSTRING("right"));
	outFields->push(HX_CSTRING("up"));
	outFields->push(HX_CSTRING("lookRight"));
	outFields->push(HX_CSTRING("standing"));
	outFields->push(HX_CSTRING("killed"));
	outFields->push(HX_CSTRING("jumpcount"));
	outFields->push(HX_CSTRING("lastupcount"));
	outFields->push(HX_CSTRING("walkLeft"));
	outFields->push(HX_CSTRING("walkRight"));
	outFields->push(HX_CSTRING("standLeft"));
	outFields->push(HX_CSTRING("standRight"));
	outFields->push(HX_CSTRING("jumpLeft"));
	outFields->push(HX_CSTRING("jumpRight"));
	outFields->push(HX_CSTRING("stompsound"));
	outFields->push(HX_CSTRING("jumpsound"));
	outFields->push(HX_CSTRING("diesound"));
	outFields->push(HX_CSTRING("music"));
	outFields->push(HX_CSTRING("score"));
	outFields->push(HX_CSTRING("round"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("instance"),
	HX_CSTRING("getInstance"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("left"),
	HX_CSTRING("right"),
	HX_CSTRING("up"),
	HX_CSTRING("lookRight"),
	HX_CSTRING("standing"),
	HX_CSTRING("killed"),
	HX_CSTRING("jumpcount"),
	HX_CSTRING("lastupcount"),
	HX_CSTRING("walkLeft"),
	HX_CSTRING("walkRight"),
	HX_CSTRING("standLeft"),
	HX_CSTRING("standRight"),
	HX_CSTRING("jumpLeft"),
	HX_CSTRING("jumpRight"),
	HX_CSTRING("stompsound"),
	HX_CSTRING("jumpsound"),
	HX_CSTRING("diesound"),
	HX_CSTRING("music"),
	HX_CSTRING("score"),
	HX_CSTRING("round"),
	HX_CSTRING("reset"),
	HX_CSTRING("selectCoin"),
	HX_CSTRING("getScore"),
	HX_CSTRING("getRound"),
	HX_CSTRING("nextRound"),
	HX_CSTRING("update"),
	HX_CSTRING("setUp"),
	HX_CSTRING("hitFrom"),
	HX_CSTRING("die"),
	HX_CSTRING("hitEnemy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Jumpman_obj::instance,"instance");
};

Class Jumpman_obj::__mClass;

void Jumpman_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.sml.Jumpman"), hx::TCanCast< Jumpman_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Jumpman_obj::__boot()
{
	hx::Static(instance);
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace sml
