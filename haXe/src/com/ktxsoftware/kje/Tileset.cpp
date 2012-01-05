#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Image
#include <com/ktxsoftware/kje/Image.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Loader
#include <com/ktxsoftware/kje/Loader.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Painter
#include <com/ktxsoftware/kje/Painter.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Tileset
#include <com/ktxsoftware/kje/Tileset.h>
#endif
namespace com{
namespace ktxsoftware{
namespace kje{

Void Tileset_obj::__construct(::String imagename,int tileWidth,int tileHeight)
{
{
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tileset.hx",11)
	this->TILE_WIDTH = (int)32;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tileset.hx",12)
	this->TILE_HEIGHT = (int)32;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tileset.hx",14)
	this->image = ::com::ktxsoftware::kje::Loader_obj::getInstance()->getImage(imagename);
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tileset.hx",15)
	this->TILE_WIDTH = tileWidth;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tileset.hx",16)
	this->TILE_HEIGHT = tileHeight;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tileset.hx",17)
	this->xmax = ::Std_obj::_int((double(this->image->getWidth()) / double(this->TILE_WIDTH)));
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tileset.hx",18)
	this->ymax = ::Std_obj::_int((double(this->image->getHeight()) / double(this->TILE_HEIGHT)));
}
;
	return null();
}

Tileset_obj::~Tileset_obj() { }

Dynamic Tileset_obj::__CreateEmpty() { return  new Tileset_obj; }
hx::ObjectPtr< Tileset_obj > Tileset_obj::__new(::String imagename,int tileWidth,int tileHeight)
{  hx::ObjectPtr< Tileset_obj > result = new Tileset_obj();
	result->__construct(imagename,tileWidth,tileHeight);
	return result;}

Dynamic Tileset_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tileset_obj > result = new Tileset_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Tileset_obj::render( ::com::ktxsoftware::kje::Painter painter,int tile,int x,int y){
{
		HX_SOURCE_PUSH("Tileset_obj::render")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Tileset.hx",22)
		int ytile = ::Std_obj::_int((double(tile) / double(this->xmax)));
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Tileset.hx",23)
		int xtile = (tile - (ytile * this->xmax));
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Tileset.hx",24)
		painter->drawImage2(this->image,(xtile * this->TILE_WIDTH),(ytile * this->TILE_HEIGHT),this->TILE_WIDTH,this->TILE_HEIGHT,x,y,this->TILE_WIDTH,this->TILE_HEIGHT);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Tileset_obj,render,(void))

int Tileset_obj::getLength( ){
	HX_SOURCE_PUSH("Tileset_obj::getLength")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tileset.hx",27)
	return (this->xmax * this->ymax);
}


HX_DEFINE_DYNAMIC_FUNC0(Tileset_obj,getLength,return )


Tileset_obj::Tileset_obj()
{
}

void Tileset_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tileset);
	HX_MARK_MEMBER_NAME(TILE_WIDTH,"TILE_WIDTH");
	HX_MARK_MEMBER_NAME(TILE_HEIGHT,"TILE_HEIGHT");
	HX_MARK_MEMBER_NAME(xmax,"xmax");
	HX_MARK_MEMBER_NAME(ymax,"ymax");
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_END_CLASS();
}

Dynamic Tileset_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xmax") ) { return xmax; }
		if (HX_FIELD_EQ(inName,"ymax") ) { return ymax; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"TILE_WIDTH") ) { return TILE_WIDTH; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TILE_HEIGHT") ) { return TILE_HEIGHT; }
	}
	return super::__Field(inName);
}

Dynamic Tileset_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xmax") ) { xmax=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ymax") ) { ymax=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::com::ktxsoftware::kje::Image >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"TILE_WIDTH") ) { TILE_WIDTH=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TILE_HEIGHT") ) { TILE_HEIGHT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Tileset_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("TILE_WIDTH"));
	outFields->push(HX_CSTRING("TILE_HEIGHT"));
	outFields->push(HX_CSTRING("xmax"));
	outFields->push(HX_CSTRING("ymax"));
	outFields->push(HX_CSTRING("image"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("TILE_WIDTH"),
	HX_CSTRING("TILE_HEIGHT"),
	HX_CSTRING("xmax"),
	HX_CSTRING("ymax"),
	HX_CSTRING("image"),
	HX_CSTRING("render"),
	HX_CSTRING("getLength"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Tileset_obj::__mClass;

void Tileset_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.kje.Tileset"), hx::TCanCast< Tileset_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Tileset_obj::__boot()
{
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje
