#include <hxcpp.h>

#ifndef INCLUDED_com_ktxsoftware_kje_Animation
#include <com/ktxsoftware/kje/Animation.h>
#endif
namespace com{
namespace ktxsoftware{
namespace kje{

Void Animation_obj::__construct(Array< int > indices,int speeddiv)
{
{
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Animation.hx",21)
	this->indices = indices;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Animation.hx",22)
	this->index = (int)0;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Animation.hx",23)
	this->speeddiv = speeddiv;
}
;
	return null();
}

Animation_obj::~Animation_obj() { }

Dynamic Animation_obj::__CreateEmpty() { return  new Animation_obj; }
hx::ObjectPtr< Animation_obj > Animation_obj::__new(Array< int > indices,int speeddiv)
{  hx::ObjectPtr< Animation_obj > result = new Animation_obj();
	result->__construct(indices,speeddiv);
	return result;}

Dynamic Animation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Animation_obj > result = new Animation_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

int Animation_obj::get( ){
	HX_SOURCE_PUSH("Animation_obj::get")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Animation.hx",26)
	return this->indices->__get(this->index);
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,get,return )

Void Animation_obj::next( ){
{
		HX_SOURCE_PUSH("Animation_obj::next")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Animation.hx",31)
		++(this->count);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Animation.hx",32)
		if (((hx::Mod(this->count,this->speeddiv) == (int)0))){
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Animation.hx",33)
			++(this->index);
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Animation.hx",34)
			if (((this->index >= this->indices->length))){
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Animation.hx",34)
				this->index = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,next,(void))

Void Animation_obj::reset( ){
{
		HX_SOURCE_PUSH("Animation_obj::reset")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Animation.hx",39)
		this->count = (int)0;
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Animation.hx",40)
		this->index = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,reset,(void))

::com::ktxsoftware::kje::Animation Animation_obj::create( int index){
	HX_SOURCE_PUSH("Animation_obj::create")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Animation.hx",10)
	Array< int > indices = Array_obj< int >::__new().Add(index);
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Animation.hx",11)
	return ::com::ktxsoftware::kje::Animation_obj::__new(indices,(int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,create,return )

::com::ktxsoftware::kje::Animation Animation_obj::createRange( int minindex,int maxindex,int speeddiv){
	HX_SOURCE_PUSH("Animation_obj::createRange")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Animation.hx",15)
	Array< int > indices = Array_obj< int >::__new();
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Animation.hx",16)
	{
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Animation.hx",16)
		int _g1 = (int)0;
		int _g = ((maxindex - minindex) + (int)1);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Animation.hx",16)
		while(((_g1 < _g))){
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Animation.hx",16)
			int i = (_g1)++;
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Animation.hx",16)
			indices->push((minindex + i));
		}
	}
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Animation.hx",17)
	return ::com::ktxsoftware::kje::Animation_obj::__new(indices,speeddiv);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Animation_obj,createRange,return )


Animation_obj::Animation_obj()
{
}

void Animation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Animation);
	HX_MARK_MEMBER_NAME(indices,"indices");
	HX_MARK_MEMBER_NAME(speeddiv,"speeddiv");
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_END_CLASS();
}

Dynamic Animation_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { return count; }
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { return indices; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"speeddiv") ) { return speeddiv; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createRange") ) { return createRange_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Animation_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { indices=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"speeddiv") ) { speeddiv=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Animation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("indices"));
	outFields->push(HX_CSTRING("speeddiv"));
	outFields->push(HX_CSTRING("count"));
	outFields->push(HX_CSTRING("index"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("createRange"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("indices"),
	HX_CSTRING("speeddiv"),
	HX_CSTRING("count"),
	HX_CSTRING("index"),
	HX_CSTRING("get"),
	HX_CSTRING("next"),
	HX_CSTRING("reset"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Animation_obj::__mClass;

void Animation_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.kje.Animation"), hx::TCanCast< Animation_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Animation_obj::__boot()
{
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje
