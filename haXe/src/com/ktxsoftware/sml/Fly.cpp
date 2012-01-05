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
#ifndef INCLUDED_com_ktxsoftware_kje_Loader
#include <com/ktxsoftware/kje/Loader.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Rectangle
#include <com/ktxsoftware/kje/Rectangle.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Sprite
#include <com/ktxsoftware/kje/Sprite.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_Enemy
#include <com/ktxsoftware/sml/Enemy.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_Fly
#include <com/ktxsoftware/sml/Fly.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_Jumpman
#include <com/ktxsoftware/sml/Jumpman.h>
#endif
namespace com{
namespace ktxsoftware{
namespace sml{

Void Fly_obj::__construct(int x,int y)
{
{
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",27)
	::com::ktxsoftware::sml::Fly_obj::init();
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",28)
	super::__construct(::com::ktxsoftware::sml::Fly_obj::image,(int)64,(int)56);
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",29)
	this->x = x;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",30)
	this->y = y;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",31)
	this->setAnimation(::com::ktxsoftware::sml::Fly_obj::leftAnim);
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",32)
	this->collider = ::com::ktxsoftware::kje::Rectangle_obj::__new((int)0,(int)16,(int)64,(int)40);
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",33)
	this->killcount = (int)-1;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",34)
	this->count = (int)0;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",35)
	this->jumping = false;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",36)
	this->left = true;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",37)
	this->killed = false;
}
;
	return null();
}

Fly_obj::~Fly_obj() { }

Dynamic Fly_obj::__CreateEmpty() { return  new Fly_obj; }
hx::ObjectPtr< Fly_obj > Fly_obj::__new(int x,int y)
{  hx::ObjectPtr< Fly_obj > result = new Fly_obj();
	result->__construct(x,y);
	return result;}

Dynamic Fly_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Fly_obj > result = new Fly_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Fly_obj::update( ){
{
		HX_SOURCE_PUSH("Fly_obj::update")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",41)
		if (((bool((this->count < (int)120)) && bool((this->killcount < (int)0))))){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",42)
			++(this->count);
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",43)
			if (((this->count == (int)120))){
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",44)
				this->jumping = true;
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",45)
				if ((this->left)){
					HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",45)
					this->speedx = ((int)-2 * ::Math_obj::round(::Math_obj::pow(1.2,::com::ktxsoftware::sml::Jumpman_obj::getInstance()->getRound())));
				}
				else{
					HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",46)
					this->speedx = ((int)2 * ::Math_obj::round(::Math_obj::pow(1.2,::com::ktxsoftware::sml::Jumpman_obj::getInstance()->getRound())));
				}
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",47)
				this->speedy = (int)-6;
			}
		}
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",50)
		if (((this->killcount > (int)0))){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",51)
			--(this->killcount);
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",52)
			if (((this->killcount == (int)0))){
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",53)
				if ((this->left)){
					HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",53)
					this->speedx = (int)-1;
				}
				else{
					HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",54)
					this->speedx = (int)1;
				}
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",55)
				this->speedy = (int)-4;
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",56)
				this->collides = false;
			}
		}
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",59)
		this->super::update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Fly_obj,update,(void))

Void Fly_obj::kill( ){
{
		HX_SOURCE_PUSH("Fly_obj::kill")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",63)
		this->super::kill();
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",64)
		this->killed = true;
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",65)
		if ((this->left)){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",65)
			this->setAnimation(::com::ktxsoftware::kje::Animation_obj::create((int)2));
		}
		else{
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",66)
			this->setAnimation(::com::ktxsoftware::kje::Animation_obj::create((int)3));
		}
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",67)
		this->killcount = (int)60;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Fly_obj,kill,(void))

Void Fly_obj::hitFrom( ::com::ktxsoftware::kje::Direction dir){
{
		HX_SOURCE_PUSH("Fly_obj::hitFrom")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",70)
		if (((bool((dir == ::com::ktxsoftware::kje::Direction_obj::LEFT_dyn())) && bool(!(this->killed))))){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",72)
			this->setAnimation(::com::ktxsoftware::sml::Fly_obj::leftAnim);
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",73)
			this->left = true;
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",74)
			if ((this->jumping)){
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",74)
				this->speedx = (int)-2;
			}
		}
		else{
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",76)
			if (((bool((dir == ::com::ktxsoftware::kje::Direction_obj::RIGHT_dyn())) && bool(!(this->killed))))){
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",77)
				this->setAnimation(::com::ktxsoftware::sml::Fly_obj::rightAnim);
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",78)
				this->left = false;
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",79)
				if ((this->jumping)){
					HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",79)
					this->speedx = (int)2;
				}
			}
			else{
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",81)
				if (((bool((dir == ::com::ktxsoftware::kje::Direction_obj::UP_dyn())) && bool(this->jumping)))){
					HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",82)
					this->jumping = false;
					HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",83)
					this->count = (int)0;
					HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",84)
					this->speedx = (int)0;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Fly_obj,hitFrom,(void))

::com::ktxsoftware::kje::Image Fly_obj::image;

::com::ktxsoftware::kje::Animation Fly_obj::leftAnim;

::com::ktxsoftware::kje::Animation Fly_obj::rightAnim;

bool Fly_obj::initialized;

Void Fly_obj::init( ){
{
		HX_SOURCE_PUSH("Fly_obj::init")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",19)
		if ((!(::com::ktxsoftware::sml::Fly_obj::initialized))){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",21)
			::com::ktxsoftware::sml::Fly_obj::image = ::com::ktxsoftware::kje::Loader_obj::getInstance()->getImage(HX_CSTRING("fly.png"));
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Fly.hx",22)
			::com::ktxsoftware::sml::Fly_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Fly_obj,init,(void))


Fly_obj::Fly_obj()
{
}

void Fly_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Fly);
	HX_MARK_MEMBER_NAME(killcount,"killcount");
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(jumping,"jumping");
	HX_MARK_MEMBER_NAME(left,"left");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic Fly_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"left") ) { return left; }
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		if (HX_FIELD_EQ(inName,"count") ) { return count; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"jumping") ) { return jumping; }
		if (HX_FIELD_EQ(inName,"hitFrom") ) { return hitFrom_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"leftAnim") ) { return leftAnim; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightAnim") ) { return rightAnim; }
		if (HX_FIELD_EQ(inName,"killcount") ) { return killcount; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
	}
	return super::__Field(inName);
}

Dynamic Fly_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::com::ktxsoftware::kje::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"jumping") ) { jumping=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"leftAnim") ) { leftAnim=inValue.Cast< ::com::ktxsoftware::kje::Animation >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightAnim") ) { rightAnim=inValue.Cast< ::com::ktxsoftware::kje::Animation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"killcount") ) { killcount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Fly_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("killcount"));
	outFields->push(HX_CSTRING("count"));
	outFields->push(HX_CSTRING("jumping"));
	outFields->push(HX_CSTRING("left"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("image"),
	HX_CSTRING("leftAnim"),
	HX_CSTRING("rightAnim"),
	HX_CSTRING("initialized"),
	HX_CSTRING("init"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("killcount"),
	HX_CSTRING("count"),
	HX_CSTRING("jumping"),
	HX_CSTRING("left"),
	HX_CSTRING("update"),
	HX_CSTRING("kill"),
	HX_CSTRING("hitFrom"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Fly_obj::image,"image");
	HX_MARK_MEMBER_NAME(Fly_obj::leftAnim,"leftAnim");
	HX_MARK_MEMBER_NAME(Fly_obj::rightAnim,"rightAnim");
	HX_MARK_MEMBER_NAME(Fly_obj::initialized,"initialized");
};

Class Fly_obj::__mClass;

void Fly_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.sml.Fly"), hx::TCanCast< Fly_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Fly_obj::__boot()
{
	hx::Static(image);
	hx::Static(leftAnim) = ::com::ktxsoftware::kje::Animation_obj::__new(Array_obj< int >::__new().Add((int)0).Add((int)1),(int)8);
	hx::Static(rightAnim) = ::com::ktxsoftware::kje::Animation_obj::__new(Array_obj< int >::__new().Add((int)4).Add((int)5),(int)8);
	hx::Static(initialized) = false;
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace sml
