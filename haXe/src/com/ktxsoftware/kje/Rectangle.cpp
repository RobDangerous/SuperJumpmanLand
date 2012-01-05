#include <hxcpp.h>

#ifndef INCLUDED_com_ktxsoftware_kje_Rectangle
#include <com/ktxsoftware/kje/Rectangle.h>
#endif
namespace com{
namespace ktxsoftware{
namespace kje{

Void Rectangle_obj::__construct(double x,double y,double width,double height)
{
{
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Rectangle.hx",10)
	this->x = x;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Rectangle.hx",11)
	this->y = y;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Rectangle.hx",12)
	this->width = width;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Rectangle.hx",13)
	this->height = height;
}
;
	return null();
}

Rectangle_obj::~Rectangle_obj() { }

Dynamic Rectangle_obj::__CreateEmpty() { return  new Rectangle_obj; }
hx::ObjectPtr< Rectangle_obj > Rectangle_obj::__new(double x,double y,double width,double height)
{  hx::ObjectPtr< Rectangle_obj > result = new Rectangle_obj();
	result->__construct(x,y,width,height);
	return result;}

Dynamic Rectangle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Rectangle_obj > result = new Rectangle_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Rectangle_obj::setPos( int x,int y){
{
		HX_SOURCE_PUSH("Rectangle_obj::setPos")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Rectangle.hx",17)
		this->x = x;
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Rectangle.hx",18)
		this->y = y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,setPos,(void))

Void Rectangle_obj::moveX( int xdelta){
{
		HX_SOURCE_PUSH("Rectangle_obj::moveX")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Rectangle.hx",21)
		hx::AddEq(this->x,xdelta);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,moveX,(void))

Void Rectangle_obj::moveY( int ydelta){
{
		HX_SOURCE_PUSH("Rectangle_obj::moveY")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Rectangle.hx",25)
		hx::AddEq(this->y,ydelta);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,moveY,(void))

bool Rectangle_obj::collision( ::com::ktxsoftware::kje::Rectangle r){
	HX_SOURCE_PUSH("Rectangle_obj::collision")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Rectangle.hx",30)
	bool a;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Rectangle.hx",31)
	bool b;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Rectangle.hx",32)
	if (((this->x < r->x))){
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Rectangle.hx",32)
		a = (r->x < (this->x + this->width));
	}
	else{
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Rectangle.hx",33)
		a = (this->x < (r->x + r->width));
	}
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Rectangle.hx",34)
	if (((this->y < r->y))){
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Rectangle.hx",34)
		b = (r->y < (this->y + this->height));
	}
	else{
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Rectangle.hx",35)
		b = (this->y < (r->y + r->height));
	}
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Rectangle.hx",36)
	return (bool(a) && bool(b));
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,collision,return )


Rectangle_obj::Rectangle_obj()
{
}

void Rectangle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Rectangle);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_END_CLASS();
}

Dynamic Rectangle_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"moveX") ) { return moveX_dyn(); }
		if (HX_FIELD_EQ(inName,"moveY") ) { return moveY_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"setPos") ) { return setPos_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"collision") ) { return collision_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Rectangle_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< double >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< double >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< double >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Rectangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("setPos"),
	HX_CSTRING("moveX"),
	HX_CSTRING("moveY"),
	HX_CSTRING("collision"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Rectangle_obj::__mClass;

void Rectangle_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.kje.Rectangle"), hx::TCanCast< Rectangle_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Rectangle_obj::__boot()
{
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje
