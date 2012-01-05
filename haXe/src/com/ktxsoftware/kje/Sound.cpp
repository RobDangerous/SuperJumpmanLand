#include <hxcpp.h>

#ifndef INCLUDED_com_ktxsoftware_kje_Sound
#include <com/ktxsoftware/kje/Sound.h>
#endif
namespace com{
namespace ktxsoftware{
namespace kje{

HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,play,)

HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,stop,)


Class Sound_obj::__mClass;

void Sound_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.kje.Sound"), hx::TCanCast< Sound_obj> ,0,0,
	0, 0,
	&super::__SGetClass(), 0, 0);
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje
