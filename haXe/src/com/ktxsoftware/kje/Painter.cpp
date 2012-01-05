#include <hxcpp.h>

#ifndef INCLUDED_com_ktxsoftware_kje_Font
#include <com/ktxsoftware/kje/Font.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Game
#include <com/ktxsoftware/kje/Game.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Image
#include <com/ktxsoftware/kje/Image.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Painter
#include <com/ktxsoftware/kje/Painter.h>
#endif
namespace com{
namespace ktxsoftware{
namespace kje{

Void Painter_obj::__construct()
{
	return null();
}

Painter_obj::~Painter_obj() { }

Dynamic Painter_obj::__CreateEmpty() { return  new Painter_obj; }
hx::ObjectPtr< Painter_obj > Painter_obj::__new()
{  hx::ObjectPtr< Painter_obj > result = new Painter_obj();
	result->__construct();
	return result;}

Dynamic Painter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Painter_obj > result = new Painter_obj();
	result->__construct();
	return result;}

Void Painter_obj::drawImage( ::com::ktxsoftware::kje::Image img,double x,double y){
{
		HX_SOURCE_PUSH("Painter_obj::drawImage")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Painter_obj,drawImage,(void))

Void Painter_obj::drawImage2( ::com::ktxsoftware::kje::Image image,double sx,double sy,double sw,double sh,double dx,double dy,double dw,double dh){
{
		HX_SOURCE_PUSH("Painter_obj::drawImage2")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(Painter_obj,drawImage2,(void))

Void Painter_obj::setColor( int r,int g,int b){
{
		HX_SOURCE_PUSH("Painter_obj::setColor")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Painter_obj,setColor,(void))

Void Painter_obj::drawRect( double x,double y,double width,double height){
{
		HX_SOURCE_PUSH("Painter_obj::drawRect")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Painter_obj,drawRect,(void))

Void Painter_obj::fillRect( double x,double y,double width,double height){
{
		HX_SOURCE_PUSH("Painter_obj::fillRect")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Painter_obj,fillRect,(void))

Void Painter_obj::setFont( ::com::ktxsoftware::kje::Font font){
{
		HX_SOURCE_PUSH("Painter_obj::setFont")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Painter_obj,setFont,(void))

Void Painter_obj::drawChars( ::String text,int offset,int length,double x,double y){
{
		HX_SOURCE_PUSH("Painter_obj::drawChars")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Painter_obj,drawChars,(void))

Void Painter_obj::drawString( ::String text,double x,double y){
{
		HX_SOURCE_PUSH("Painter_obj::drawString")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Painter_obj,drawString,(void))

Void Painter_obj::drawLine( double x1,double y1,double x2,double y2){
{
		HX_SOURCE_PUSH("Painter_obj::drawLine")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Painter_obj,drawLine,(void))

Void Painter_obj::fillTriangle( double x1,double y1,double x2,double y2,double x3,double y3){
{
		HX_SOURCE_PUSH("Painter_obj::fillTriangle")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Painter_obj,fillTriangle,(void))

Void Painter_obj::translate( double x,double y){
{
		HX_SOURCE_PUSH("Painter_obj::translate")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Painter_obj,translate,(void))

Void Painter_obj::clear( ){
{
		HX_SOURCE_PUSH("Painter_obj::clear")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Painter.hx",15)
		this->fillRect((int)0,(int)0,::com::ktxsoftware::kje::Game_obj::getInstance()->getWidth(),::com::ktxsoftware::kje::Game_obj::getInstance()->getHeight());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Painter_obj,clear,(void))

Void Painter_obj::begin( ){
{
		HX_SOURCE_PUSH("Painter_obj::begin")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Painter_obj,begin,(void))

Void Painter_obj::end( ){
{
		HX_SOURCE_PUSH("Painter_obj::end")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Painter_obj,end,(void))


Painter_obj::Painter_obj()
{
}

void Painter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Painter);
	HX_MARK_END_CLASS();
}

Dynamic Painter_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setFont") ) { return setFont_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setColor") ) { return setColor_dyn(); }
		if (HX_FIELD_EQ(inName,"drawRect") ) { return drawRect_dyn(); }
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"drawLine") ) { return drawLine_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawImage") ) { return drawImage_dyn(); }
		if (HX_FIELD_EQ(inName,"drawChars") ) { return drawChars_dyn(); }
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawImage2") ) { return drawImage2_dyn(); }
		if (HX_FIELD_EQ(inName,"drawString") ) { return drawString_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fillTriangle") ) { return fillTriangle_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Painter_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Painter_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("drawImage"),
	HX_CSTRING("drawImage2"),
	HX_CSTRING("setColor"),
	HX_CSTRING("drawRect"),
	HX_CSTRING("fillRect"),
	HX_CSTRING("setFont"),
	HX_CSTRING("drawChars"),
	HX_CSTRING("drawString"),
	HX_CSTRING("drawLine"),
	HX_CSTRING("fillTriangle"),
	HX_CSTRING("translate"),
	HX_CSTRING("clear"),
	HX_CSTRING("begin"),
	HX_CSTRING("end"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Painter_obj::__mClass;

void Painter_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.kje.Painter"), hx::TCanCast< Painter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Painter_obj::__boot()
{
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje
