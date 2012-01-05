#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Animation
#include <com/ktxsoftware/kje/Animation.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Direction
#include <com/ktxsoftware/kje/Direction.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Image
#include <com/ktxsoftware/kje/Image.h>
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
namespace com{
namespace ktxsoftware{
namespace kje{

Void Sprite_obj::__construct(::com::ktxsoftware::kje::Image image,int width,int height,int z)
{
{
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Sprite.hx",22)
	this->image = image;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Sprite.hx",23)
	this->width = width;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Sprite.hx",24)
	this->height = height;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Sprite.hx",25)
	this->z = z;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Sprite.hx",26)
	this->collider = ::com::ktxsoftware::kje::Rectangle_obj::__new((int)0,(int)0,width,height);
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Sprite.hx",27)
	this->speedx = this->speedy = (int)0;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Sprite.hx",28)
	this->accx = (int)0;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Sprite.hx",29)
	this->accy = 0.2;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Sprite.hx",30)
	this->animation = ::com::ktxsoftware::kje::Animation_obj::create((int)0);
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Sprite.hx",31)
	this->maxspeedy = 5.0;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Sprite.hx",32)
	this->collides = true;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Sprite.hx",33)
	this->tempcollider = ::com::ktxsoftware::kje::Rectangle_obj::__new((int)0,(int)0,(int)0,(int)0);
}
;
	return null();
}

Sprite_obj::~Sprite_obj() { }

Dynamic Sprite_obj::__CreateEmpty() { return  new Sprite_obj; }
hx::ObjectPtr< Sprite_obj > Sprite_obj::__new(::com::ktxsoftware::kje::Image image,int width,int height,int z)
{  hx::ObjectPtr< Sprite_obj > result = new Sprite_obj();
	result->__construct(image,width,height,z);
	return result;}

Dynamic Sprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sprite_obj > result = new Sprite_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::com::ktxsoftware::kje::Rectangle Sprite_obj::collisionRect( ){
	HX_SOURCE_PUSH("Sprite_obj::collisionRect")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Sprite.hx",37)
	this->tempcollider->x = this->x;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Sprite.hx",38)
	this->tempcollider->y = this->y;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Sprite.hx",39)
	this->tempcollider->width = this->collider->width;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Sprite.hx",40)
	this->tempcollider->height = this->collider->height;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Sprite.hx",41)
	return this->tempcollider;
}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,collisionRect,return )

Void Sprite_obj::setAnimation( ::com::ktxsoftware::kje::Animation animation){
{
		HX_SOURCE_PUSH("Sprite_obj::setAnimation")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Sprite.hx",44)
		this->animation = animation;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,setAnimation,(void))

Void Sprite_obj::update( ){
{
		HX_SOURCE_PUSH("Sprite_obj::update")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Sprite.hx",48)
		this->animation->next();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,update,(void))

Void Sprite_obj::render( ::com::ktxsoftware::kje::Painter painter){
{
		HX_SOURCE_PUSH("Sprite_obj::render")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Sprite.hx",52)
		if (((this->image != null()))){
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Sprite.hx",54)
			painter->drawImage2(this->image,(this->animation->get() * (hx::Mod(this->width,this->image->getWidth()))),(::Math_obj::floor((double((this->animation->get() * this->width)) / double(this->image->getWidth()))) * this->height),this->width,this->height,::Math_obj::round((this->x - this->collider->x)),::Math_obj::round((this->y - this->collider->y)),this->width,this->height);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,render,(void))

Void Sprite_obj::hitFrom( ::com::ktxsoftware::kje::Direction dir){
{
		HX_SOURCE_PUSH("Sprite_obj::hitFrom")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,hitFrom,(void))

Void Sprite_obj::hit( ::com::ktxsoftware::kje::Sprite sprite){
{
		HX_SOURCE_PUSH("Sprite_obj::hit")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,hit,(void))

Void Sprite_obj::setImage( ::com::ktxsoftware::kje::Image image){
{
		HX_SOURCE_PUSH("Sprite_obj::setImage")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Sprite.hx",65)
		this->image = image;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,setImage,(void))

Void Sprite_obj::outOfView( ){
{
		HX_SOURCE_PUSH("Sprite_obj::outOfView")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,outOfView,(void))


Sprite_obj::Sprite_obj()
{
}

void Sprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sprite);
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(animation,"animation");
	HX_MARK_MEMBER_NAME(collider,"collider");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(speedx,"speedx");
	HX_MARK_MEMBER_NAME(speedy,"speedy");
	HX_MARK_MEMBER_NAME(accx,"accx");
	HX_MARK_MEMBER_NAME(accy,"accy");
	HX_MARK_MEMBER_NAME(maxspeedy,"maxspeedy");
	HX_MARK_MEMBER_NAME(collides,"collides");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_MEMBER_NAME(tempcollider,"tempcollider");
	HX_MARK_END_CLASS();
}

Dynamic Sprite_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"hit") ) { return hit_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"accx") ) { return accx; }
		if (HX_FIELD_EQ(inName,"accy") ) { return accy; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"speedx") ) { return speedx; }
		if (HX_FIELD_EQ(inName,"speedy") ) { return speedy; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hitFrom") ) { return hitFrom_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"collider") ) { return collider; }
		if (HX_FIELD_EQ(inName,"collides") ) { return collides; }
		if (HX_FIELD_EQ(inName,"setImage") ) { return setImage_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { return animation; }
		if (HX_FIELD_EQ(inName,"maxspeedy") ) { return maxspeedy; }
		if (HX_FIELD_EQ(inName,"outOfView") ) { return outOfView_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tempcollider") ) { return tempcollider; }
		if (HX_FIELD_EQ(inName,"setAnimation") ) { return setAnimation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisionRect") ) { return collisionRect_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Sprite_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"accx") ) { accx=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"accy") ) { accy=inValue.Cast< double >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::com::ktxsoftware::kje::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< double >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speedx") ) { speedx=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speedy") ) { speedy=inValue.Cast< double >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"collider") ) { collider=inValue.Cast< ::com::ktxsoftware::kje::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"collides") ) { collides=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { animation=inValue.Cast< ::com::ktxsoftware::kje::Animation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxspeedy") ) { maxspeedy=inValue.Cast< double >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tempcollider") ) { tempcollider=inValue.Cast< ::com::ktxsoftware::kje::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Sprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("image"));
	outFields->push(HX_CSTRING("animation"));
	outFields->push(HX_CSTRING("collider"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("speedx"));
	outFields->push(HX_CSTRING("speedy"));
	outFields->push(HX_CSTRING("accx"));
	outFields->push(HX_CSTRING("accy"));
	outFields->push(HX_CSTRING("maxspeedy"));
	outFields->push(HX_CSTRING("collides"));
	outFields->push(HX_CSTRING("z"));
	outFields->push(HX_CSTRING("tempcollider"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("image"),
	HX_CSTRING("animation"),
	HX_CSTRING("collider"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("speedx"),
	HX_CSTRING("speedy"),
	HX_CSTRING("accx"),
	HX_CSTRING("accy"),
	HX_CSTRING("maxspeedy"),
	HX_CSTRING("collides"),
	HX_CSTRING("z"),
	HX_CSTRING("tempcollider"),
	HX_CSTRING("collisionRect"),
	HX_CSTRING("setAnimation"),
	HX_CSTRING("update"),
	HX_CSTRING("render"),
	HX_CSTRING("hitFrom"),
	HX_CSTRING("hit"),
	HX_CSTRING("setImage"),
	HX_CSTRING("outOfView"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Sprite_obj::__mClass;

void Sprite_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.kje.Sprite"), hx::TCanCast< Sprite_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Sprite_obj::__boot()
{
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje
