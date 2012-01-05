#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Painter
#include <com/ktxsoftware/kje/Painter.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Rectangle
#include <com/ktxsoftware/kje/Rectangle.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Sprite
#include <com/ktxsoftware/kje/Sprite.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Tilemap
#include <com/ktxsoftware/kje/Tilemap.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Tileset
#include <com/ktxsoftware/kje/Tileset.h>
#endif
namespace com{
namespace ktxsoftware{
namespace kje{

Void Tilemap_obj::__construct(::String imagename,int tileWidth,int tileHeight,Array< Array< int > > map,Array< bool > tileCollision)
{
{
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",11)
	this->tileset = ::com::ktxsoftware::kje::Tileset_obj::__new(imagename,tileWidth,tileHeight);
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",12)
	this->map = map;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",13)
	this->tileCollision = tileCollision;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",14)
	this->levelWidth = map->length;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",15)
	this->levelHeight = map->__get((int)0)->length;
}
;
	return null();
}

Tilemap_obj::~Tilemap_obj() { }

Dynamic Tilemap_obj::__CreateEmpty() { return  new Tilemap_obj; }
hx::ObjectPtr< Tilemap_obj > Tilemap_obj::__new(::String imagename,int tileWidth,int tileHeight,Array< Array< int > > map,Array< bool > tileCollision)
{  hx::ObjectPtr< Tilemap_obj > result = new Tilemap_obj();
	result->__construct(imagename,tileWidth,tileHeight,map,tileCollision);
	return result;}

Dynamic Tilemap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tilemap_obj > result = new Tilemap_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void Tilemap_obj::render( ::com::ktxsoftware::kje::Painter painter,int xleft,int ytop,int width,int height){
{
		HX_SOURCE_PUSH("Tilemap_obj::render")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",19)
		int xstart = ::Std_obj::_int(::Math_obj::max((double(xleft) / double(this->tileset->TILE_WIDTH)),(int)0));
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",20)
		int xend = ::Std_obj::_int(::Math_obj::min(((double(((xleft + width))) / double(this->tileset->TILE_WIDTH)) + (int)1),this->levelWidth));
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",21)
		int ystart = ::Std_obj::_int(::Math_obj::max((double(ytop) / double(this->tileset->TILE_HEIGHT)),(int)0));
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",22)
		int yend = ::Std_obj::_int(::Math_obj::min(((double(((ytop + height))) / double(this->tileset->TILE_HEIGHT)) + (int)1),this->levelHeight));
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",23)
		{
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",23)
			int _g = xstart;
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",23)
			while(((_g < xend))){
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",23)
				int x = (_g)++;
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",23)
				int _g1 = ystart;
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",23)
				while(((_g1 < yend))){
					HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",23)
					int y = (_g1)++;
					HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",24)
					this->tileset->render(painter,this->map->__get(x)->__get(y),(x * this->tileset->TILE_WIDTH),(y * this->tileset->TILE_HEIGHT));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Tilemap_obj,render,(void))

bool Tilemap_obj::collidesupdown( int x1,int x2,int y){
	HX_SOURCE_PUSH("Tilemap_obj::collidesupdown")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",29)
	if (((bool((y < (int)0)) || bool(((double(y) / double(this->tileset->TILE_HEIGHT)) >= this->levelHeight))))){
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",29)
		return false;
	}
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",30)
	int xtilestart = ::Std_obj::_int((double(x1) / double(this->tileset->TILE_WIDTH)));
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",31)
	int xtileend = ::Std_obj::_int((double(x2) / double(this->tileset->TILE_WIDTH)));
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",32)
	int ytile = ::Std_obj::_int((double(y) / double(this->tileset->TILE_HEIGHT)));
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",33)
	{
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",33)
		int _g1 = xtilestart;
		int _g = (xtileend + (int)1);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",33)
		while(((_g1 < _g))){
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",33)
			int xtile = (_g1)++;
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",33)
			if ((this->tileCollision->__get(this->map->__get(xtile)->__get(ytile)))){
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",33)
				return true;
			}
		}
	}
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",34)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC3(Tilemap_obj,collidesupdown,return )

bool Tilemap_obj::collidesrightleft( int x,int y1,int y2){
	HX_SOURCE_PUSH("Tilemap_obj::collidesrightleft")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",38)
	if (((bool((x < (int)0)) || bool(((double(x) / double(this->tileset->TILE_WIDTH)) >= this->levelWidth))))){
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",38)
		return true;
	}
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",39)
	int ytilestart = ::Std_obj::_int((double(y1) / double(this->tileset->TILE_HEIGHT)));
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",40)
	int ytileend = ::Std_obj::_int((double(y2) / double(this->tileset->TILE_HEIGHT)));
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",41)
	int xtile = ::Std_obj::_int((double(x) / double(this->tileset->TILE_WIDTH)));
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",42)
	{
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",42)
		int _g1 = ytilestart;
		int _g = (ytileend + (int)1);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",42)
		while(((_g1 < _g))){
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",42)
			int ytile = (_g1)++;
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",43)
			if (((bool((ytile < (int)0)) || bool((ytile >= this->levelHeight))))){
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",43)
				continue;
			}
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",44)
			if ((this->tileCollision->__get(this->map->__get(xtile)->__get(ytile)))){
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",44)
				return true;
			}
		}
	}
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",46)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC3(Tilemap_obj,collidesrightleft,return )

bool Tilemap_obj::collides( int x,int y){
	HX_SOURCE_PUSH("Tilemap_obj::collides")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",50)
	if (((bool((x < (int)0)) || bool(((double(x) / double(this->tileset->TILE_WIDTH)) >= this->levelWidth))))){
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",50)
		return true;
	}
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",51)
	if (((bool((y < (int)0)) || bool(((double(y) / double(this->tileset->TILE_HEIGHT)) >= this->levelHeight))))){
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",51)
		return false;
	}
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",53)
	int value = this->map->__get(::Std_obj::_int((double(x) / double(this->tileset->TILE_WIDTH))))->__get(::Std_obj::_int((double(y) / double(this->tileset->TILE_HEIGHT))));
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",55)
	return this->tileCollision->__get(value);
}


HX_DEFINE_DYNAMIC_FUNC2(Tilemap_obj,collides,return )

bool Tilemap_obj::collideright( ::com::ktxsoftware::kje::Sprite sprite){
	HX_SOURCE_PUSH("Tilemap_obj::collideright")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",63)
	::com::ktxsoftware::kje::Rectangle rect = sprite->collisionRect();
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",64)
	bool collided = false;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",65)
	if ((this->collidesrightleft(::Std_obj::_int((rect->x + rect->width)),::com::ktxsoftware::kje::Tilemap_obj::round((rect->y + (int)1)),::com::ktxsoftware::kje::Tilemap_obj::round(((rect->y + rect->height) - (int)1))))){
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",66)
		sprite->x = ((::Math_obj::floor((double(((rect->x + rect->width))) / double(this->tileset->TILE_WIDTH))) * this->tileset->TILE_WIDTH) - rect->width);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",67)
		collided = true;
	}
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",69)
	return collided;
}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,collideright,return )

bool Tilemap_obj::collideleft( ::com::ktxsoftware::kje::Sprite sprite){
	HX_SOURCE_PUSH("Tilemap_obj::collideleft")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",73)
	::com::ktxsoftware::kje::Rectangle rect = sprite->collisionRect();
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",74)
	bool collided = false;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",75)
	if ((this->collidesrightleft(::Std_obj::_int(rect->x),::com::ktxsoftware::kje::Tilemap_obj::round((rect->y + (int)1)),::com::ktxsoftware::kje::Tilemap_obj::round(((rect->y + rect->height) - (int)1))))){
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",76)
		sprite->x = (((::Math_obj::floor((double(rect->x) / double(this->tileset->TILE_WIDTH))) + (int)1)) * this->tileset->TILE_WIDTH);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",77)
		collided = true;
	}
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",79)
	return collided;
}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,collideleft,return )

bool Tilemap_obj::collidedown( ::com::ktxsoftware::kje::Sprite sprite){
	HX_SOURCE_PUSH("Tilemap_obj::collidedown")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",83)
	::com::ktxsoftware::kje::Rectangle rect = sprite->collisionRect();
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",84)
	bool collided = false;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",85)
	if ((this->collidesupdown(::com::ktxsoftware::kje::Tilemap_obj::round((rect->x + (int)1)),::com::ktxsoftware::kje::Tilemap_obj::round(((rect->x + rect->width) - (int)1)),::Std_obj::_int((rect->y + rect->height))))){
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",86)
		sprite->y = ((::Math_obj::floor((double(((rect->y + rect->height))) / double(this->tileset->TILE_HEIGHT))) * this->tileset->TILE_HEIGHT) - rect->height);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",87)
		collided = true;
	}
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",89)
	return collided;
}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,collidedown,return )

bool Tilemap_obj::collideup( ::com::ktxsoftware::kje::Sprite sprite){
	HX_SOURCE_PUSH("Tilemap_obj::collideup")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",93)
	::com::ktxsoftware::kje::Rectangle rect = sprite->collisionRect();
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",94)
	bool collided = false;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",95)
	if ((this->collidesupdown(::com::ktxsoftware::kje::Tilemap_obj::round((rect->x + (int)1)),::com::ktxsoftware::kje::Tilemap_obj::round(((rect->x + rect->width) - (int)1)),::Std_obj::_int(rect->y)))){
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",96)
		sprite->y = (((::Math_obj::floor((double(rect->y) / double(this->tileset->TILE_HEIGHT))) + (int)1)) * this->tileset->TILE_HEIGHT);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",97)
		collided = true;
	}
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",99)
	return collided;
}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,collideup,return )

int Tilemap_obj::getWidth( ){
	HX_SOURCE_PUSH("Tilemap_obj::getWidth")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",102)
	return this->levelWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(Tilemap_obj,getWidth,return )

::com::ktxsoftware::kje::Tileset Tilemap_obj::getTileset( ){
	HX_SOURCE_PUSH("Tilemap_obj::getTileset")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",106)
	return this->tileset;
}


HX_DEFINE_DYNAMIC_FUNC0(Tilemap_obj,getTileset,return )

int Tilemap_obj::round( double value){
	HX_SOURCE_PUSH("Tilemap_obj::round")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Tilemap.hx",58)
	return ::Math_obj::round(value);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,round,return )


Tilemap_obj::Tilemap_obj()
{
}

void Tilemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tilemap);
	HX_MARK_MEMBER_NAME(tileset,"tileset");
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(levelWidth,"levelWidth");
	HX_MARK_MEMBER_NAME(levelHeight,"levelHeight");
	HX_MARK_MEMBER_NAME(tileCollision,"tileCollision");
	HX_MARK_END_CLASS();
}

Dynamic Tilemap_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"round") ) { return round_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tileset") ) { return tileset; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"collides") ) { return collides_dyn(); }
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"collideup") ) { return collideup_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"levelWidth") ) { return levelWidth; }
		if (HX_FIELD_EQ(inName,"getTileset") ) { return getTileset_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"levelHeight") ) { return levelHeight; }
		if (HX_FIELD_EQ(inName,"collideleft") ) { return collideleft_dyn(); }
		if (HX_FIELD_EQ(inName,"collidedown") ) { return collidedown_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"collideright") ) { return collideright_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tileCollision") ) { return tileCollision; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collidesupdown") ) { return collidesupdown_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"collidesrightleft") ) { return collidesrightleft_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Tilemap_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< Array< Array< int > > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tileset") ) { tileset=inValue.Cast< ::com::ktxsoftware::kje::Tileset >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"levelWidth") ) { levelWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"levelHeight") ) { levelHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tileCollision") ) { tileCollision=inValue.Cast< Array< bool > >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Tilemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tileset"));
	outFields->push(HX_CSTRING("map"));
	outFields->push(HX_CSTRING("levelWidth"));
	outFields->push(HX_CSTRING("levelHeight"));
	outFields->push(HX_CSTRING("tileCollision"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("round"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("tileset"),
	HX_CSTRING("map"),
	HX_CSTRING("levelWidth"),
	HX_CSTRING("levelHeight"),
	HX_CSTRING("tileCollision"),
	HX_CSTRING("render"),
	HX_CSTRING("collidesupdown"),
	HX_CSTRING("collidesrightleft"),
	HX_CSTRING("collides"),
	HX_CSTRING("collideright"),
	HX_CSTRING("collideleft"),
	HX_CSTRING("collidedown"),
	HX_CSTRING("collideup"),
	HX_CSTRING("getWidth"),
	HX_CSTRING("getTileset"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Tilemap_obj::__mClass;

void Tilemap_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.kje.Tilemap"), hx::TCanCast< Tilemap_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Tilemap_obj::__boot()
{
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje
