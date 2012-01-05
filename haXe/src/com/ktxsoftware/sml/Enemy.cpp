#include <hxcpp.h>

#ifndef INCLUDED_com_ktxsoftware_kje_Image
#include <com/ktxsoftware/kje/Image.h>
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
namespace com{
namespace ktxsoftware{
namespace sml{

Void Enemy_obj::__construct(::com::ktxsoftware::kje::Image image,int width,int height)
{
{
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Enemy.hx",10)
	super::__construct(image,width,height,(int)0);
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Enemy.hx",11)
	this->killed = false;
}
;
	return null();
}

Enemy_obj::~Enemy_obj() { }

Dynamic Enemy_obj::__CreateEmpty() { return  new Enemy_obj; }
hx::ObjectPtr< Enemy_obj > Enemy_obj::__new(::com::ktxsoftware::kje::Image image,int width,int height)
{  hx::ObjectPtr< Enemy_obj > result = new Enemy_obj();
	result->__construct(image,width,height);
	return result;}

Dynamic Enemy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Enemy_obj > result = new Enemy_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Enemy_obj::kill( ){
{
		HX_SOURCE_PUSH("Enemy_obj::kill")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Enemy.hx",14)
		this->killed = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Enemy_obj,kill,(void))

bool Enemy_obj::isKilled( ){
	HX_SOURCE_PUSH("Enemy_obj::isKilled")
	HX_SOURCE_POS("src/com/ktxsoftware/sml/Enemy.hx",18)
	return this->killed;
}


HX_DEFINE_DYNAMIC_FUNC0(Enemy_obj,isKilled,return )

Void Enemy_obj::hit( ::com::ktxsoftware::kje::Sprite sprite){
{
		HX_SOURCE_PUSH("Enemy_obj::hit")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/Enemy.hx",22)
		::com::ktxsoftware::sml::Jumpman_obj::getInstance()->hitEnemy(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enemy_obj,hit,(void))


Enemy_obj::Enemy_obj()
{
}

void Enemy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Enemy);
	HX_MARK_MEMBER_NAME(killed,"killed");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic Enemy_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hit") ) { return hit_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"killed") ) { return killed; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isKilled") ) { return isKilled_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Enemy_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"killed") ) { killed=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Enemy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("killed"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("killed"),
	HX_CSTRING("kill"),
	HX_CSTRING("isKilled"),
	HX_CSTRING("hit"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Enemy_obj::__mClass;

void Enemy_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.sml.Enemy"), hx::TCanCast< Enemy_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Enemy_obj::__boot()
{
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace sml
