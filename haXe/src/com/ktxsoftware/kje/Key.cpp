#include <hxcpp.h>

#ifndef INCLUDED_com_ktxsoftware_kje_Key
#include <com/ktxsoftware/kje/Key.h>
#endif
namespace com{
namespace ktxsoftware{
namespace kje{

::com::ktxsoftware::kje::Key Key_obj::BACKSPACE;

::com::ktxsoftware::kje::Key Key_obj::BUTTON_1;

::com::ktxsoftware::kje::Key Key_obj::BUTTON_2;

::com::ktxsoftware::kje::Key Key_obj::DOWN;

::com::ktxsoftware::kje::Key Key_obj::ENTER;

::com::ktxsoftware::kje::Key Key_obj::LEFT;

::com::ktxsoftware::kje::Key Key_obj::RIGHT;

::com::ktxsoftware::kje::Key Key_obj::UP;

HX_DEFINE_CREATE_ENUM(Key_obj)

int Key_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("BACKSPACE")) return 7;
	if (inName==HX_CSTRING("BUTTON_1")) return 4;
	if (inName==HX_CSTRING("BUTTON_2")) return 5;
	if (inName==HX_CSTRING("DOWN")) return 2;
	if (inName==HX_CSTRING("ENTER")) return 6;
	if (inName==HX_CSTRING("LEFT")) return 3;
	if (inName==HX_CSTRING("RIGHT")) return 1;
	if (inName==HX_CSTRING("UP")) return 0;
	return super::__FindIndex(inName);
}

int Key_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("BACKSPACE")) return 0;
	if (inName==HX_CSTRING("BUTTON_1")) return 0;
	if (inName==HX_CSTRING("BUTTON_2")) return 0;
	if (inName==HX_CSTRING("DOWN")) return 0;
	if (inName==HX_CSTRING("ENTER")) return 0;
	if (inName==HX_CSTRING("LEFT")) return 0;
	if (inName==HX_CSTRING("RIGHT")) return 0;
	if (inName==HX_CSTRING("UP")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Key_obj::__Field(const ::String &inName)
{
	if (inName==HX_CSTRING("BACKSPACE")) return BACKSPACE;
	if (inName==HX_CSTRING("BUTTON_1")) return BUTTON_1;
	if (inName==HX_CSTRING("BUTTON_2")) return BUTTON_2;
	if (inName==HX_CSTRING("DOWN")) return DOWN;
	if (inName==HX_CSTRING("ENTER")) return ENTER;
	if (inName==HX_CSTRING("LEFT")) return LEFT;
	if (inName==HX_CSTRING("RIGHT")) return RIGHT;
	if (inName==HX_CSTRING("UP")) return UP;
	return super::__Field(inName);
}

static ::String sStaticFields[] = {
	HX_CSTRING("UP"),
	HX_CSTRING("RIGHT"),
	HX_CSTRING("DOWN"),
	HX_CSTRING("LEFT"),
	HX_CSTRING("BUTTON_1"),
	HX_CSTRING("BUTTON_2"),
	HX_CSTRING("ENTER"),
	HX_CSTRING("BACKSPACE"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Key_obj::BACKSPACE,"BACKSPACE");
	HX_MARK_MEMBER_NAME(Key_obj::BUTTON_1,"BUTTON_1");
	HX_MARK_MEMBER_NAME(Key_obj::BUTTON_2,"BUTTON_2");
	HX_MARK_MEMBER_NAME(Key_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(Key_obj::ENTER,"ENTER");
	HX_MARK_MEMBER_NAME(Key_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(Key_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(Key_obj::UP,"UP");
};

static ::String sMemberFields[] = { ::String(null()) };
Class Key_obj::__mClass;

Dynamic __Create_Key_obj() { return new Key_obj; }

void Key_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.kje.Key"), hx::TCanCast< Key_obj >,sStaticFields,sMemberFields,
	&__Create_Key_obj, &__Create,
	&super::__SGetClass(), &CreateKey_obj, sMarkStatics);
}

void Key_obj::__boot()
{
Static(BACKSPACE) = hx::CreateEnum< Key_obj >(HX_CSTRING("BACKSPACE"),7);
Static(BUTTON_1) = hx::CreateEnum< Key_obj >(HX_CSTRING("BUTTON_1"),4);
Static(BUTTON_2) = hx::CreateEnum< Key_obj >(HX_CSTRING("BUTTON_2"),5);
Static(DOWN) = hx::CreateEnum< Key_obj >(HX_CSTRING("DOWN"),2);
Static(ENTER) = hx::CreateEnum< Key_obj >(HX_CSTRING("ENTER"),6);
Static(LEFT) = hx::CreateEnum< Key_obj >(HX_CSTRING("LEFT"),3);
Static(RIGHT) = hx::CreateEnum< Key_obj >(HX_CSTRING("RIGHT"),1);
Static(UP) = hx::CreateEnum< Key_obj >(HX_CSTRING("UP"),0);
}


} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje
