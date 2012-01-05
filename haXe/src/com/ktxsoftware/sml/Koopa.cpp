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
#ifndef INCLUDED_com_ktxsoftware_kje_Scene
#include <com/ktxsoftware/kje/Scene.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Sprite
#include <com/ktxsoftware/kje/Sprite.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_Enemy
#include <com/ktxsoftware/sml/Enemy.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_Jumpman
#include <com/ktxsoftware/sml/Jumpman.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_Koopa
#include <com/ktxsoftware/sml/Koopa.h>
#endif
namespace com{
namespace ktxsoftware{
namespace sml{

Void Koopa_obj::__construct(int x,int y)
{
{
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",26)
	::com::ktxsoftware::sml::Koopa_obj::init();
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",27)
	super::__construct(::com::ktxsoftware::sml::Koopa_obj::image,(int)64,(int)48);
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",28)
	this->x = x;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",29)
	this->y = y;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",30)
	this->leftAnim = ::com::ktxsoftware::kje::Animation_obj::__new(Array_obj< int >::__new().Add((int)0).Add((int)1),(int)10);
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",31)
	this->rightAnim = ::com::ktxsoftware::kje::Animation_obj::__new(Array_obj< int >::__new().Add((int)2).Add((int)3),(int)10);
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",32)
	this->setAnimation(this->leftAnim);
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",33)
	this->speedx = ((int)-1 * ::Math_obj::round(::Math_obj::pow(1.2,::com::ktxsoftware::sml::Jumpman_obj::getInstance()->getRound())));
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",34)
	this->collider = ::com::ktxsoftware::kje::Rectangle_obj::__new((int)0,(int)16,(int)64,(int)32);
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",35)
	this->killcount = (int)-1;
}
;
	return null();
}

Koopa_obj::~Koopa_obj() { }

Dynamic Koopa_obj::__CreateEmpty() { return  new Koopa_obj; }
hx::ObjectPtr< Koopa_obj > Koopa_obj::__new(int x,int y)
{  hx::ObjectPtr< Koopa_obj > result = new Koopa_obj();
	result->__construct(x,y);
	return result;}

Dynamic Koopa_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Koopa_obj > result = new Koopa_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Koopa_obj::update( ){
{
		HX_SOURCE_PUSH("Koopa_obj::update")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",39)
		if (((this->killcount > (int)0))){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",40)
			--(this->killcount);
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",41)
			if (((this->killcount == (int)0))){
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",41)
				::com::ktxsoftware::kje::Scene_obj::getInstance()->removeEnemy(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",43)
		this->super::update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Koopa_obj,update,(void))

Void Koopa_obj::kill( ){
{
		HX_SOURCE_PUSH("Koopa_obj::kill")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",47)
		this->super::kill();
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",48)
		this->speedx = (int)0;
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",49)
		Array< int > anim = Array_obj< int >::__new().Add((int)4).Add((int)5).Add((int)4).Add((int)5).Add((int)4).Add((int)5).Add((int)4).Add((int)5).Add((int)6).Add((int)7);
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",50)
		this->setAnimation(::com::ktxsoftware::kje::Animation_obj::__new(anim,(int)14));
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",51)
		this->killcount = (anim->length * (int)14);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Koopa_obj,kill,(void))

Void Koopa_obj::hit( ::com::ktxsoftware::kje::Sprite sprite){
{
		HX_SOURCE_PUSH("Koopa_obj::hit")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",54)
		if (((bool((this->killcount > (int)0)) && bool((this->killcount < (int)28))))){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",55)
			::com::ktxsoftware::sml::Jumpman_obj::getInstance()->die();
		}
		else{
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",58)
			this->super::hit(sprite);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Koopa_obj,hit,(void))

Void Koopa_obj::hitFrom( ::com::ktxsoftware::kje::Direction dir){
{
		HX_SOURCE_PUSH("Koopa_obj::hitFrom")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",63)
		if (((dir == ::com::ktxsoftware::kje::Direction_obj::LEFT_dyn()))){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",65)
			this->setAnimation(this->leftAnim);
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",66)
			this->speedx = ((int)-1 * ::Math_obj::round(::Math_obj::pow(1.2,::com::ktxsoftware::sml::Jumpman_obj::getInstance()->getRound())));
		}
		else{
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",68)
			if (((dir == ::com::ktxsoftware::kje::Direction_obj::RIGHT_dyn()))){
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",69)
				this->setAnimation(this->rightAnim);
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",70)
				this->speedx = ::Math_obj::round(::Math_obj::pow(1.2,::com::ktxsoftware::sml::Jumpman_obj::getInstance()->getRound()));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Koopa_obj,hitFrom,(void))

::com::ktxsoftware::kje::Image Koopa_obj::image;

bool Koopa_obj::initialized;

Void Koopa_obj::init( ){
{
		HX_SOURCE_PUSH("Koopa_obj::init")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",18)
		if ((!(::com::ktxsoftware::sml::Koopa_obj::initialized))){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",20)
			::com::ktxsoftware::sml::Koopa_obj::image = ::com::ktxsoftware::kje::Loader_obj::getInstance()->getImage(HX_CSTRING("koopa.png"));
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Koopa.hx",21)
			::com::ktxsoftware::sml::Koopa_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Koopa_obj,init,(void))


Koopa_obj::Koopa_obj()
{
}

void Koopa_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Koopa);
	HX_MARK_MEMBER_NAME(killcount,"killcount");
	HX_MARK_MEMBER_NAME(leftAnim,"leftAnim");
	HX_MARK_MEMBER_NAME(rightAnim,"rightAnim");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic Koopa_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hit") ) { return hit_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hitFrom") ) { return hitFrom_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"leftAnim") ) { return leftAnim; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"killcount") ) { return killcount; }
		if (HX_FIELD_EQ(inName,"rightAnim") ) { return rightAnim; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
	}
	return super::__Field(inName);
}

Dynamic Koopa_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::com::ktxsoftware::kje::Image >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"leftAnim") ) { leftAnim=inValue.Cast< ::com::ktxsoftware::kje::Animation >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"killcount") ) { killcount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightAnim") ) { rightAnim=inValue.Cast< ::com::ktxsoftware::kje::Animation >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Koopa_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("killcount"));
	outFields->push(HX_CSTRING("leftAnim"));
	outFields->push(HX_CSTRING("rightAnim"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("image"),
	HX_CSTRING("initialized"),
	HX_CSTRING("init"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("killcount"),
	HX_CSTRING("leftAnim"),
	HX_CSTRING("rightAnim"),
	HX_CSTRING("update"),
	HX_CSTRING("kill"),
	HX_CSTRING("hit"),
	HX_CSTRING("hitFrom"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Koopa_obj::image,"image");
	HX_MARK_MEMBER_NAME(Koopa_obj::initialized,"initialized");
};

Class Koopa_obj::__mClass;

void Koopa_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.sml.Koopa"), hx::TCanCast< Koopa_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Koopa_obj::__boot()
{
	hx::Static(image);
	hx::Static(initialized) = false;
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace sml
