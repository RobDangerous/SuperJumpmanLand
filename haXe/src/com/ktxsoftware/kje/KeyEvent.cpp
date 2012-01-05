#include <hxcpp.h>

#ifndef INCLUDED_com_ktxsoftware_kje_Key
#include <com/ktxsoftware/kje/Key.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_KeyEvent
#include <com/ktxsoftware/kje/KeyEvent.h>
#endif
namespace com{
namespace ktxsoftware{
namespace kje{

Void KeyEvent_obj::__construct(::com::ktxsoftware::kje::Key key,bool down)
{
{
	HX_SOURCE_POS("src/com/ktxsoftware/kje/KeyEvent.hx",8)
	this->key = key;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/KeyEvent.hx",9)
	this->down = down;
}
;
	return null();
}

KeyEvent_obj::~KeyEvent_obj() { }

Dynamic KeyEvent_obj::__CreateEmpty() { return  new KeyEvent_obj; }
hx::ObjectPtr< KeyEvent_obj > KeyEvent_obj::__new(::com::ktxsoftware::kje::Key key,bool down)
{  hx::ObjectPtr< KeyEvent_obj > result = new KeyEvent_obj();
	result->__construct(key,down);
	return result;}

Dynamic KeyEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KeyEvent_obj > result = new KeyEvent_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


KeyEvent_obj::KeyEvent_obj()
{
}

void KeyEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(KeyEvent);
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_MEMBER_NAME(down,"down");
	HX_MARK_END_CLASS();
}

Dynamic KeyEvent_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return key; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"down") ) { return down; }
	}
	return super::__Field(inName);
}

Dynamic KeyEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< ::com::ktxsoftware::kje::Key >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"down") ) { down=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void KeyEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("key"));
	outFields->push(HX_CSTRING("down"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("key"),
	HX_CSTRING("down"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class KeyEvent_obj::__mClass;

void KeyEvent_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.kje.KeyEvent"), hx::TCanCast< KeyEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void KeyEvent_obj::__boot()
{
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje
