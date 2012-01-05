#include <hxcpp.h>

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
#ifndef INCLUDED_com_ktxsoftware_sml_BlockCoin
#include <com/ktxsoftware/sml/BlockCoin.h>
#endif
namespace com{
namespace ktxsoftware{
namespace sml{

Void BlockCoin_obj::__construct(double x,double y)
{
{
	HX_SOURCE_POS("src/com/ktxsoftware/sml/BlockCoin.hx",21)
	::com::ktxsoftware::sml::BlockCoin_obj::init();
	HX_SOURCE_POS("src/com/ktxsoftware/sml/BlockCoin.hx",22)
	super::__construct(::com::ktxsoftware::sml::BlockCoin_obj::image,::com::ktxsoftware::sml::BlockCoin_obj::image->getWidth(),::com::ktxsoftware::sml::BlockCoin_obj::image->getHeight(),(int)0);
	HX_SOURCE_POS("src/com/ktxsoftware/sml/BlockCoin.hx",23)
	this->accy = (int)0;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/BlockCoin.hx",24)
	this->speedy = (int)-2;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/BlockCoin.hx",25)
	this->collides = false;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/BlockCoin.hx",26)
	this->x = (x - (double(this->width) / double((int)2)));
	HX_SOURCE_POS("src/com/ktxsoftware/sml/BlockCoin.hx",27)
	this->y = y;
	HX_SOURCE_POS("src/com/ktxsoftware/sml/BlockCoin.hx",28)
	this->count = (int)20;
}
;
	return null();
}

BlockCoin_obj::~BlockCoin_obj() { }

Dynamic BlockCoin_obj::__CreateEmpty() { return  new BlockCoin_obj; }
hx::ObjectPtr< BlockCoin_obj > BlockCoin_obj::__new(double x,double y)
{  hx::ObjectPtr< BlockCoin_obj > result = new BlockCoin_obj();
	result->__construct(x,y);
	return result;}

Dynamic BlockCoin_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BlockCoin_obj > result = new BlockCoin_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void BlockCoin_obj::update( ){
{
		HX_SOURCE_PUSH("BlockCoin_obj::update")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/BlockCoin.hx",32)
		--(this->count);
		HX_SOURCE_POS("src/com/ktxsoftware/sml/BlockCoin.hx",33)
		if (((this->count == (int)0))){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/BlockCoin.hx",33)
			::com::ktxsoftware::kje::Scene_obj::getInstance()->removeEnemy(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BlockCoin_obj,update,(void))

::com::ktxsoftware::kje::Image BlockCoin_obj::image;

bool BlockCoin_obj::initialized;

Void BlockCoin_obj::init( ){
{
		HX_SOURCE_PUSH("BlockCoin_obj::init")
		HX_SOURCE_POS("src/com/ktxsoftware/sml/BlockCoin.hx",13)
		if ((!(::com::ktxsoftware::sml::BlockCoin_obj::initialized))){
			HX_SOURCE_POS("src/com/ktxsoftware/sml/BlockCoin.hx",15)
			::com::ktxsoftware::sml::BlockCoin_obj::image = ::com::ktxsoftware::kje::Loader_obj::getInstance()->getImage(HX_CSTRING("blockcoin.png"));
			HX_SOURCE_POS("src/com/ktxsoftware/sml/BlockCoin.hx",16)
			::com::ktxsoftware::sml::BlockCoin_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BlockCoin_obj,init,(void))


BlockCoin_obj::BlockCoin_obj()
{
}

void BlockCoin_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BlockCoin);
	HX_MARK_MEMBER_NAME(count,"count");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic BlockCoin_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		if (HX_FIELD_EQ(inName,"count") ) { return count; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
	}
	return super::__Field(inName);
}

Dynamic BlockCoin_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::com::ktxsoftware::kje::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void BlockCoin_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("count"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("image"),
	HX_CSTRING("initialized"),
	HX_CSTRING("init"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("count"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlockCoin_obj::image,"image");
	HX_MARK_MEMBER_NAME(BlockCoin_obj::initialized,"initialized");
};

Class BlockCoin_obj::__mClass;

void BlockCoin_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.sml.BlockCoin"), hx::TCanCast< BlockCoin_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void BlockCoin_obj::__boot()
{
	hx::Static(image);
	hx::Static(initialized) = false;
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace sml
