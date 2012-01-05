#include <hxcpp.h>

#ifndef INCLUDED_com_ktxsoftware_kje_Music
#include <com/ktxsoftware/kje/Music.h>
#endif
namespace com{
namespace ktxsoftware{
namespace kje{

HX_DEFINE_DYNAMIC_FUNC0(Music_obj,start,)

HX_DEFINE_DYNAMIC_FUNC0(Music_obj,stop,)

HX_DEFINE_DYNAMIC_FUNC0(Music_obj,update,)


Class Music_obj::__mClass;

void Music_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.kje.Music"), hx::TCanCast< Music_obj> ,0,0,
	0, 0,
	&super::__SGetClass(), 0, 0);
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje
