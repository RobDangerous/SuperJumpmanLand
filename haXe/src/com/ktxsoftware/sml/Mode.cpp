#include <hxcpp.h>

#ifndef INCLUDED_com_ktxsoftware_sml_Mode
#include <com/ktxsoftware/sml/Mode.h>
#endif
namespace com{
namespace ktxsoftware{
namespace sml{

::com::ktxsoftware::sml::Mode Mode_obj::EnterHighscore;

::com::ktxsoftware::sml::Mode Mode_obj::Game;

::com::ktxsoftware::sml::Mode Mode_obj::Highscore;

HX_DEFINE_CREATE_ENUM(Mode_obj)

int Mode_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("EnterHighscore")) return 2;
	if (inName==HX_CSTRING("Game")) return 0;
	if (inName==HX_CSTRING("Highscore")) return 1;
	return super::__FindIndex(inName);
}

int Mode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("EnterHighscore")) return 0;
	if (inName==HX_CSTRING("Game")) return 0;
	if (inName==HX_CSTRING("Highscore")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Mode_obj::__Field(const ::String &inName)
{
	if (inName==HX_CSTRING("EnterHighscore")) return EnterHighscore;
	if (inName==HX_CSTRING("Game")) return Game;
	if (inName==HX_CSTRING("Highscore")) return Highscore;
	return super::__Field(inName);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Game"),
	HX_CSTRING("Highscore"),
	HX_CSTRING("EnterHighscore"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mode_obj::EnterHighscore,"EnterHighscore");
	HX_MARK_MEMBER_NAME(Mode_obj::Game,"Game");
	HX_MARK_MEMBER_NAME(Mode_obj::Highscore,"Highscore");
};

static ::String sMemberFields[] = { ::String(null()) };
Class Mode_obj::__mClass;

Dynamic __Create_Mode_obj() { return new Mode_obj; }

void Mode_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.sml.Mode"), hx::TCanCast< Mode_obj >,sStaticFields,sMemberFields,
	&__Create_Mode_obj, &__Create,
	&super::__SGetClass(), &CreateMode_obj, sMarkStatics);
}

void Mode_obj::__boot()
{
Static(EnterHighscore) = hx::CreateEnum< Mode_obj >(HX_CSTRING("EnterHighscore"),2);
Static(Game) = hx::CreateEnum< Mode_obj >(HX_CSTRING("Game"),0);
Static(Highscore) = hx::CreateEnum< Mode_obj >(HX_CSTRING("Highscore"),1);
}


} // end namespace com
} // end namespace ktxsoftware
} // end namespace sml
