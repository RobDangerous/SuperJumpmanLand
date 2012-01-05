#include <hxcpp.h>

#ifndef INCLUDED_com_ktxsoftware_kje_Color
#include <com/ktxsoftware/kje/Color.h>
#endif
namespace com{
namespace ktxsoftware{
namespace kje{

Void Color_obj::__construct(int r,int g,int b)
{
{
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Color.hx",9)
	this->r = r;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Color.hx",10)
	this->g = g;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Color.hx",11)
	this->b = b;
}
;
	return null();
}

Color_obj::~Color_obj() { }

Dynamic Color_obj::__CreateEmpty() { return  new Color_obj; }
hx::ObjectPtr< Color_obj > Color_obj::__new(int r,int g,int b)
{  hx::ObjectPtr< Color_obj > result = new Color_obj();
	result->__construct(r,g,b);
	return result;}

Dynamic Color_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Color_obj > result = new Color_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


Color_obj::Color_obj()
{
}

void Color_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Color);
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_END_CLASS();
}

Dynamic Color_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		if (HX_FIELD_EQ(inName,"g") ) { return g; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
	}
	return super::__Field(inName);
}

Dynamic Color_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Color_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("r"));
	outFields->push(HX_CSTRING("g"));
	outFields->push(HX_CSTRING("b"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("r"),
	HX_CSTRING("g"),
	HX_CSTRING("b"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Color_obj::__mClass;

void Color_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.kje.Color"), hx::TCanCast< Color_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Color_obj::__boot()
{
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje
