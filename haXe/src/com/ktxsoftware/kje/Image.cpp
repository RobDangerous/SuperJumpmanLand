#include <hxcpp.h>

#ifndef INCLUDED_com_ktxsoftware_kje_Image
#include <com/ktxsoftware/kje/Image.h>
#endif
namespace com{
namespace ktxsoftware{
namespace kje{

HX_DEFINE_DYNAMIC_FUNC0(Image_obj,getWidth,return )

HX_DEFINE_DYNAMIC_FUNC0(Image_obj,getHeight,return )

HX_DEFINE_DYNAMIC_FUNC2(Image_obj,isAlpha,return )


Class Image_obj::__mClass;

void Image_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.kje.Image"), hx::TCanCast< Image_obj> ,0,0,
	0, 0,
	&super::__SGetClass(), 0, 0);
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje
