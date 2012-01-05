#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Animation
#include <com/ktxsoftware/kje/Animation.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Image
#include <com/ktxsoftware/kje/Image.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Loader
#include <com/ktxsoftware/kje/Loader.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Rectangle
#include <com/ktxsoftware/kje/Rectangle.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Scene
#include <com/ktxsoftware/kje/Scene.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Sound
#include <com/ktxsoftware/kje/Sound.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Sprite
#include <com/ktxsoftware/kje/Sprite.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_BlockCoin
#include <com/ktxsoftware/sml/BlockCoin.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_BonusBlock
#include <com/ktxsoftware/sml/BonusBlock.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_Jumpman
#include <com/ktxsoftware/sml/Jumpman.h>
#endif
namespace com{
namespace ktxsoftware{
namespace sml{

Void BonusBlock_obj::__construct(double x,double y)
{
{
	HX_SOURCE_POS("src/com/ktxsoftware/sml/BonusBlock.hx",28)
	::com::ktxsoftware::sml::BonusBlock_obj::init();
	HX_SOURCE_POS("src/com/ktxsoftware/sml/BonusBlock.hx",29)
	super::__construct(::com::ktxsoftware::sml::BonusBlock_obj::image,::Std_obj::_int((double(::com::ktxsoftware::sml::BonusBlock_obj::image->getWidth()) / double((int)2))),::com::ktxsoftware::sml::BonusBlock_obj::image->getHeight(),(int)0);
	HX_SOURCE_POS("src/com/ktxsoftware/sml/BonusBlock.hx",30)
	this->x = x;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/BonusBlock.hx",31)
	this->y = y;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/BonusBlock.hx",32)
	this->accy = (int)0;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/BonusBlock.hx",33)
	this->washit = false;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/BonusBlock.hx",34)
	this->downcount = (int)0;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/BonusBlock.hx",35)
	this->collider = ::com::ktxsoftware::kje::Rectangle_obj::__new((int)0,(int)0,(double(this->image->getWidth()) / double((int)2)),(this->image->getHeight() + (int)14));
}
;
	return null();
}

BonusBlock_obj::~BonusBlock_obj() { }

Dynamic BonusBlock_obj::__CreateEmpty() { return  new BonusBlock_obj; }
hx::ObjectPtr< BonusBlock_obj > BonusBlock_obj::__new(double x,double y)
{  hx::ObjectPtr< BonusBlock_obj > result = new BonusBlock_obj();
	result->__construct(x,y);
	return result;}

Dynamic BonusBlock_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BonusBlock_obj > result = new BonusBlock_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void BonusBlock_obj::update( ){
{
		HX_SOURCE_PUSH("BonusBlock_obj::update")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/BonusBlock.hx",38)
		if (((this->downcount > (int)0))){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/BonusBlock.hx",40)
			--(this->downcount);
			HX_SOURCE_POS("src/com/ktxsoftware/sml/BonusBlock.hx",41)
			if (((this->downcount == (int)0))){
				HX_SOURCE_POS("src/com/ktxsoftware/sml/BonusBlock.hx",42)
				hx::AddEq(this->y,(int)20);
				HX_SOURCE_POS("src/com/ktxsoftware/sml/BonusBlock.hx",43)
				::com::ktxsoftware::sml::BonusBlock_obj::onehit = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BonusBlock_obj,update,(void))

Void BonusBlock_obj::hit( ::com::ktxsoftware::kje::Sprite sprite){
{
		HX_SOURCE_PUSH("BonusBlock_obj::hit")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/BonusBlock.hx",48)
		if (((bool((bool((bool(!(this->washit)) && bool(!(::com::ktxsoftware::sml::BonusBlock_obj::onehit)))) && bool((this->downcount == (int)0)))) && bool((sprite->speedy < (int)0))))){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/BonusBlock.hx",50)
			::com::ktxsoftware::sml::BonusBlock_obj::sound->play();
			HX_SOURCE_POS("src/com/ktxsoftware/sml/BonusBlock.hx",51)
			hx::SubEq(this->y,(int)20);
			HX_SOURCE_POS("src/com/ktxsoftware/sml/BonusBlock.hx",52)
			this->downcount = (int)8;
			HX_SOURCE_POS("src/com/ktxsoftware/sml/BonusBlock.hx",53)
			::com::ktxsoftware::sml::BonusBlock_obj::onehit = true;
			HX_SOURCE_POS("src/com/ktxsoftware/sml/BonusBlock.hx",54)
			this->washit = true;
			HX_SOURCE_POS("src/com/ktxsoftware/sml/BonusBlock.hx",55)
			::com::ktxsoftware::kje::Scene_obj::getInstance()->addEnemy(::com::ktxsoftware::sml::BlockCoin_obj::__new((this->x + (double(this->width) / double((int)2))),this->y));
			HX_SOURCE_POS("src/com/ktxsoftware/sml/BonusBlock.hx",56)
			this->setAnimation(::com::ktxsoftware::kje::Animation_obj::create((int)1));
			HX_SOURCE_POS("src/com/ktxsoftware/sml/BonusBlock.hx",57)
			::com::ktxsoftware::sml::Jumpman_obj::getInstance()->selectCoin();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BonusBlock_obj,hit,(void))

::com::ktxsoftware::kje::Image BonusBlock_obj::image;

::com::ktxsoftware::kje::Sound BonusBlock_obj::sound;

bool BonusBlock_obj::onehit;

bool BonusBlock_obj::initialized;

Void BonusBlock_obj::init( ){
{
		HX_SOURCE_PUSH("BonusBlock_obj::init")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/BonusBlock.hx",19)
		if ((!(::com::ktxsoftware::sml::BonusBlock_obj::initialized))){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/BonusBlock.hx",21)
			::com::ktxsoftware::sml::BonusBlock_obj::image = ::com::ktxsoftware::kje::Loader_obj::getInstance()->getImage(HX_CSTRING("bonusblock.png"));
			HX_SOURCE_POS("src/com/ktxsoftware/sml/BonusBlock.hx",22)
			::com::ktxsoftware::sml::BonusBlock_obj::sound = ::com::ktxsoftware::kje::Loader_obj::getInstance()->getSound(HX_CSTRING("coin"));
			HX_SOURCE_POS("src/com/ktxsoftware/sml/BonusBlock.hx",23)
			::com::ktxsoftware::sml::BonusBlock_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BonusBlock_obj,init,(void))


BonusBlock_obj::BonusBlock_obj()
{
}

void BonusBlock_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BonusBlock);
	HX_MARK_MEMBER_NAME(downcount,"downcount");
	HX_MARK_MEMBER_NAME(washit,"washit");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic BonusBlock_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hit") ) { return hit_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		if (HX_FIELD_EQ(inName,"sound") ) { return sound; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onehit") ) { return onehit; }
		if (HX_FIELD_EQ(inName,"washit") ) { return washit; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"downcount") ) { return downcount; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
	}
	return super::__Field(inName);
}

Dynamic BonusBlock_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::com::ktxsoftware::kje::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast< ::com::ktxsoftware::kje::Sound >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onehit") ) { onehit=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"washit") ) { washit=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"downcount") ) { downcount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void BonusBlock_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("downcount"));
	outFields->push(HX_CSTRING("washit"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("image"),
	HX_CSTRING("sound"),
	HX_CSTRING("onehit"),
	HX_CSTRING("initialized"),
	HX_CSTRING("init"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("downcount"),
	HX_CSTRING("washit"),
	HX_CSTRING("update"),
	HX_CSTRING("hit"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BonusBlock_obj::image,"image");
	HX_MARK_MEMBER_NAME(BonusBlock_obj::sound,"sound");
	HX_MARK_MEMBER_NAME(BonusBlock_obj::onehit,"onehit");
	HX_MARK_MEMBER_NAME(BonusBlock_obj::initialized,"initialized");
};

Class BonusBlock_obj::__mClass;

void BonusBlock_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.sml.BonusBlock"), hx::TCanCast< BonusBlock_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void BonusBlock_obj::__boot()
{
	hx::Static(image);
	hx::Static(sound);
	hx::Static(onehit) = false;
	hx::Static(initialized) = false;
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace sml
