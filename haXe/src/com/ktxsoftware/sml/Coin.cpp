#include <hxcpp.h>

#ifndef INCLUDED_com_ktxsoftware_kje_Image
#include <com/ktxsoftware/kje/Image.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Loader
#include <com/ktxsoftware/kje/Loader.h>
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
#ifndef INCLUDED_com_ktxsoftware_sml_Coin
#include <com/ktxsoftware/sml/Coin.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_Jumpman
#include <com/ktxsoftware/sml/Jumpman.h>
#endif
namespace com{
namespace ktxsoftware{
namespace sml{

Void Coin_obj::__construct(int x,int y)
{
{
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Coin.hx",23)
	::com::ktxsoftware::sml::Coin_obj::init();
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Coin.hx",24)
	super::__construct(::com::ktxsoftware::sml::Coin_obj::image,(int)28,(int)32,(int)0);
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Coin.hx",25)
	this->x = x;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Coin.hx",26)
	this->y = y;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Coin.hx",27)
	this->accy = (int)0;
}
;
	return null();
}

Coin_obj::~Coin_obj() { }

Dynamic Coin_obj::__CreateEmpty() { return  new Coin_obj; }
hx::ObjectPtr< Coin_obj > Coin_obj::__new(int x,int y)
{  hx::ObjectPtr< Coin_obj > result = new Coin_obj();
	result->__construct(x,y);
	return result;}

Dynamic Coin_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Coin_obj > result = new Coin_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Coin_obj::hit( ::com::ktxsoftware::kje::Sprite sprite){
{
		HX_SOURCE_PUSH("Coin_obj::hit")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Coin.hx",31)
		::com::ktxsoftware::sml::Coin_obj::sound->play();
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Coin.hx",32)
		::com::ktxsoftware::kje::Scene_obj::getInstance()->removeEnemy(hx::ObjectPtr<OBJ_>(this));
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Coin.hx",33)
		::com::ktxsoftware::sml::Jumpman_obj::getInstance()->selectCoin();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Coin_obj,hit,(void))

::com::ktxsoftware::kje::Image Coin_obj::image;

::com::ktxsoftware::kje::Sound Coin_obj::sound;

bool Coin_obj::initialized;

Void Coin_obj::init( ){
{
		HX_SOURCE_PUSH("Coin_obj::init")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Coin.hx",14)
		if ((!(::com::ktxsoftware::sml::Coin_obj::initialized))){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Coin.hx",16)
			::com::ktxsoftware::sml::Coin_obj::image = ::com::ktxsoftware::kje::Loader_obj::getInstance()->getImage(HX_CSTRING("coin.png"));
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Coin.hx",17)
			::com::ktxsoftware::sml::Coin_obj::sound = ::com::ktxsoftware::kje::Loader_obj::getInstance()->getSound(HX_CSTRING("coin"));
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Coin.hx",18)
			::com::ktxsoftware::sml::Coin_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Coin_obj,init,(void))


Coin_obj::Coin_obj()
{
}

void Coin_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Coin);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic Coin_obj::__Field(const ::String &inName)
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
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
	}
	return super::__Field(inName);
}

Dynamic Coin_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::com::ktxsoftware::kje::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast< ::com::ktxsoftware::kje::Sound >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Coin_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("image"),
	HX_CSTRING("sound"),
	HX_CSTRING("initialized"),
	HX_CSTRING("init"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("hit"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Coin_obj::image,"image");
	HX_MARK_MEMBER_NAME(Coin_obj::sound,"sound");
	HX_MARK_MEMBER_NAME(Coin_obj::initialized,"initialized");
};

Class Coin_obj::__mClass;

void Coin_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.sml.Coin"), hx::TCanCast< Coin_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Coin_obj::__boot()
{
	hx::Static(image);
	hx::Static(sound);
	hx::Static(initialized) = false;
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace sml
