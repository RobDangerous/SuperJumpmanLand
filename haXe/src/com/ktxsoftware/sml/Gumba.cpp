#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_com_ktxsoftware_kje_Scene
#include <com/ktxsoftware/kje/Scene.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Sprite
#include <com/ktxsoftware/kje/Sprite.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_Enemy
#include <com/ktxsoftware/sml/Enemy.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_Gumba
#include <com/ktxsoftware/sml/Gumba.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_Jumpman
#include <com/ktxsoftware/sml/Jumpman.h>
#endif
namespace com{
namespace ktxsoftware{
namespace sml{

Void Gumba_obj::__construct(int x,int y)
{
{
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Gumba.hx",22)
	::com::ktxsoftware::sml::Gumba_obj::init();
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Gumba.hx",23)
	super::__construct(::com::ktxsoftware::sml::Gumba_obj::image,::Std_obj::_int((double((int)96) / double((int)3))),(int)32);
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Gumba.hx",24)
	this->x = x;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Gumba.hx",25)
	this->y = y;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Gumba.hx",26)
	this->setAnimation(::com::ktxsoftware::kje::Animation_obj::__new(Array_obj< int >::__new().Add((int)0).Add((int)2),(int)14));
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Gumba.hx",27)
	this->speedx = ((int)-1 * ::Math_obj::round(::Math_obj::pow(1.2,::com::ktxsoftware::sml::Jumpman_obj::getInstance()->getRound())));
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Gumba.hx",28)
	this->killcount = (int)-1;
}
;
	return null();
}

Gumba_obj::~Gumba_obj() { }

Dynamic Gumba_obj::__CreateEmpty() { return  new Gumba_obj; }
hx::ObjectPtr< Gumba_obj > Gumba_obj::__new(int x,int y)
{  hx::ObjectPtr< Gumba_obj > result = new Gumba_obj();
	result->__construct(x,y);
	return result;}

Dynamic Gumba_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Gumba_obj > result = new Gumba_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Gumba_obj::kill( ){
{
		HX_SOURCE_PUSH("Gumba_obj::kill")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Gumba.hx",32)
		this->super::kill();
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Gumba.hx",33)
		this->setAnimation(::com::ktxsoftware::kje::Animation_obj::create((int)1));
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Gumba.hx",34)
		this->speedx = (int)0;
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Gumba.hx",35)
		this->killcount = (int)30;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Gumba_obj,kill,(void))

Void Gumba_obj::update( ){
{
		HX_SOURCE_PUSH("Gumba_obj::update")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Gumba.hx",39)
		this->super::update();
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Gumba.hx",40)
		if (((this->killcount > (int)0))){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Gumba.hx",41)
			--(this->killcount);
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Gumba.hx",42)
			if (((this->killcount == (int)0))){
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Gumba.hx",42)
				::com::ktxsoftware::kje::Scene_obj::getInstance()->removeEnemy(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Gumba_obj,update,(void))

Void Gumba_obj::hitFrom( ::com::ktxsoftware::kje::Direction dir){
{
		HX_SOURCE_PUSH("Gumba_obj::hitFrom")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Gumba.hx",46)
		if (((dir == ::com::ktxsoftware::kje::Direction_obj::LEFT_dyn()))){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Gumba.hx",47)
			this->speedx = ((int)-1 * ::Math_obj::round(::Math_obj::pow(1.2,::com::ktxsoftware::sml::Jumpman_obj::getInstance()->getRound())));
		}
		else{
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Gumba.hx",50)
			if (((dir == ::com::ktxsoftware::kje::Direction_obj::RIGHT_dyn()))){
				HX_SOURCE_POS("src/com/ktxsoftware/sml/Gumba.hx",50)
				this->speedx = ::Math_obj::round(::Math_obj::pow(1.2,::com::ktxsoftware::sml::Jumpman_obj::getInstance()->getRound()));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gumba_obj,hitFrom,(void))

::com::ktxsoftware::kje::Image Gumba_obj::image;

bool Gumba_obj::initialized;

Void Gumba_obj::init( ){
{
		HX_SOURCE_PUSH("Gumba_obj::init")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Gumba.hx",14)
		if ((!(::com::ktxsoftware::sml::Gumba_obj::initialized))){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Gumba.hx",16)
			::com::ktxsoftware::sml::Gumba_obj::image = ::com::ktxsoftware::kje::Loader_obj::getInstance()->getImage(HX_CSTRING("gumba.png"));
			HX_SOURCE_POS("src/com/ktxsoftware/sml/Gumba.hx",17)
			::com::ktxsoftware::sml::Gumba_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gumba_obj,init,(void))


Gumba_obj::Gumba_obj()
{
}

void Gumba_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Gumba);
	HX_MARK_MEMBER_NAME(killcount,"killcount");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic Gumba_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
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
	case 9:
		if (HX_FIELD_EQ(inName,"killcount") ) { return killcount; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
	}
	return super::__Field(inName);
}

Dynamic Gumba_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::com::ktxsoftware::kje::Image >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"killcount") ) { killcount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Gumba_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("killcount"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("image"),
	HX_CSTRING("initialized"),
	HX_CSTRING("init"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("killcount"),
	HX_CSTRING("kill"),
	HX_CSTRING("update"),
	HX_CSTRING("hitFrom"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gumba_obj::image,"image");
	HX_MARK_MEMBER_NAME(Gumba_obj::initialized,"initialized");
};

Class Gumba_obj::__mClass;

void Gumba_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.sml.Gumba"), hx::TCanCast< Gumba_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Gumba_obj::__boot()
{
	hx::Static(image);
	hx::Static(initialized) = false;
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace sml
