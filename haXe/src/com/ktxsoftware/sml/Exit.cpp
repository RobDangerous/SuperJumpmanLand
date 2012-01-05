#include <hxcpp.h>

#ifndef INCLUDED_com_ktxsoftware_kje_Game
#include <com/ktxsoftware/kje/Game.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Image
#include <com/ktxsoftware/kje/Image.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Scene
#include <com/ktxsoftware/kje/Scene.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Sprite
#include <com/ktxsoftware/kje/Sprite.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_Exit
#include <com/ktxsoftware/sml/Exit.h>
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

Void Exit_obj::__construct(int x,int y)
{
{
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Exit.hx",8)
	super::__construct(null(),(int)32,(int)32,(int)0);
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Exit.hx",9)
	this->x = x;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Exit.hx",10)
	this->y = y;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Exit.hx",11)
	this->accy = (int)0;
}
;
	return null();
}

Exit_obj::~Exit_obj() { }

Dynamic Exit_obj::__CreateEmpty() { return  new Exit_obj; }
hx::ObjectPtr< Exit_obj > Exit_obj::__new(int x,int y)
{  hx::ObjectPtr< Exit_obj > result = new Exit_obj();
	result->__construct(x,y);
	return result;}

Dynamic Exit_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Exit_obj > result = new Exit_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Exit_obj::hit( ::com::ktxsoftware::kje::Sprite sprite){
{
		HX_SOURCE_PUSH("Exit_obj::hit")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Exit.hx",15)
		::com::ktxsoftware::kje::Scene_obj::getInstance()->removeEnemy(hx::ObjectPtr<OBJ_>(this));
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Exit.hx",16)
		::com::ktxsoftware::sml::Jumpman_obj::getInstance()->nextRound();
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Exit.hx",17)
		::com::ktxsoftware::sml::SuperMarioLand_obj::getInstance()->startGame();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Exit_obj,hit,(void))


Exit_obj::Exit_obj()
{
}

void Exit_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Exit);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic Exit_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hit") ) { return hit_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Exit_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Exit_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("hit"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Exit_obj::__mClass;

void Exit_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.sml.Exit"), hx::TCanCast< Exit_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Exit_obj::__boot()
{
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace sml
