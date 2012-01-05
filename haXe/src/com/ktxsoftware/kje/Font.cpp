#include <hxcpp.h>

#ifndef INCLUDED_com_ktxsoftware_kje_Font
#include <com/ktxsoftware/kje/Font.h>
#endif
namespace com{
namespace ktxsoftware{
namespace kje{

HX_DEFINE_DYNAMIC_FUNC0(Font_obj,getHeight,return )

HX_DEFINE_DYNAMIC_FUNC1(Font_obj,charWidth,return )

HX_DEFINE_DYNAMIC_FUNC3(Font_obj,charsWidth,return )

HX_DEFINE_DYNAMIC_FUNC1(Font_obj,stringWidth,return )

HX_DEFINE_DYNAMIC_FUNC0(Font_obj,getBaselinePosition,return )


Class Font_obj::__mClass;

void Font_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.kje.Font"), hx::TCanCast< Font_obj> ,0,0,
	0, 0,
	&super::__SGetClass(), 0, 0);
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje
