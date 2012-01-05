#include <hxcpp.h>

#ifndef INCLUDED_com_ktxsoftware_kje_Direction
#include <com/ktxsoftware/kje/Direction.h>
#endif
namespace com{
namespace ktxsoftware{
namespace kje{

::com::ktxsoftware::kje::Direction Direction_obj::DOWN;

::com::ktxsoftware::kje::Direction Direction_obj::LEFT;

::com::ktxsoftware::kje::Direction Direction_obj::RIGHT;

::com::ktxsoftware::kje::Direction Direction_obj::UP;

HX_DEFINE_CREATE_ENUM(Direction_obj)

int Direction_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("DOWN")) return 1;
	if (inName==HX_CSTRING("LEFT")) return 2;
	if (inName==HX_CSTRING("RIGHT")) return 3;
	if (inName==HX_CSTRING("UP")) return 0;
	return super::__FindIndex(inName);
}

int Direction_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("DOWN")) return 0;
	if (inName==HX_CSTRING("LEFT")) return 0;
	if (inName==HX_CSTRING("RIGHT")) return 0;
	if (inName==HX_CSTRING("UP")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Direction_obj::__Field(const ::String &inName)
{
	if (inName==HX_CSTRING("DOWN")) return DOWN;
	if (inName==HX_CSTRING("LEFT")) return LEFT;
	if (inName==HX_CSTRING("RIGHT")) return RIGHT;
	if (inName==HX_CSTRING("UP")) return UP;
	return super::__Field(inName);
}

static ::String sStaticFields[] = {
	HX_CSTRING("UP"),
	HX_CSTRING("DOWN"),
	HX_CSTRING("LEFT"),
	HX_CSTRING("RIGHT"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Direction_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(Direction_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(Direction_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(Direction_obj::UP,"UP");
};

static ::String sMemberFields[] = { ::String(null()) };
Class Direction_obj::__mClass;

Dynamic __Create_Direction_obj() { return new Direction_obj; }

void Direction_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.kje.Direction"), hx::TCanCast< Direction_obj >,sStaticFields,sMemberFields,
	&__Create_Direction_obj, &__Create,
	&super::__SGetClass(), &CreateDirection_obj, sMarkStatics);
}

void Direction_obj::__boot()
{
Static(DOWN) = hx::CreateEnum< Direction_obj >(HX_CSTRING("DOWN"),1);
Static(LEFT) = hx::CreateEnum< Direction_obj >(HX_CSTRING("LEFT"),2);
Static(RIGHT) = hx::CreateEnum< Direction_obj >(HX_CSTRING("RIGHT"),3);
Static(UP) = hx::CreateEnum< Direction_obj >(HX_CSTRING("UP"),0);
}


} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje
