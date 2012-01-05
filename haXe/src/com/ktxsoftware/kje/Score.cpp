#include <hxcpp.h>

#ifndef INCLUDED_com_ktxsoftware_kje_Score
#include <com/ktxsoftware/kje/Score.h>
#endif
namespace com{
namespace ktxsoftware{
namespace kje{

Void Score_obj::__construct(::String name,int score)
{
{
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Score.hx",8)
	this->name = name;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Score.hx",9)
	this->score = score;
}
;
	return null();
}

Score_obj::~Score_obj() { }

Dynamic Score_obj::__CreateEmpty() { return  new Score_obj; }
hx::ObjectPtr< Score_obj > Score_obj::__new(::String name,int score)
{  hx::ObjectPtr< Score_obj > result = new Score_obj();
	result->__construct(name,score);
	return result;}

Dynamic Score_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Score_obj > result = new Score_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String Score_obj::getName( ){
	HX_SOURCE_PUSH("Score_obj::getName")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Score.hx",12)
	return this->name;
}


HX_DEFINE_DYNAMIC_FUNC0(Score_obj,getName,return )

int Score_obj::getScore( ){
	HX_SOURCE_PUSH("Score_obj::getScore")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Score.hx",16)
	return this->score;
}


HX_DEFINE_DYNAMIC_FUNC0(Score_obj,getScore,return )

Void Score_obj::increase( int amount){
{
		HX_SOURCE_PUSH("Score_obj::increase")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Score.hx",20)
		hx::AddEq(this->score,amount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Score_obj,increase,(void))


Score_obj::Score_obj()
{
}

void Score_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Score);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(score,"score");
	HX_MARK_END_CLASS();
}

Dynamic Score_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"score") ) { return score; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getScore") ) { return getScore_dyn(); }
		if (HX_FIELD_EQ(inName,"increase") ) { return increase_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Score_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"score") ) { score=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Score_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("score"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("score"),
	HX_CSTRING("getName"),
	HX_CSTRING("getScore"),
	HX_CSTRING("increase"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Score_obj::__mClass;

void Score_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.kje.Score"), hx::TCanCast< Score_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Score_obj::__boot()
{
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje
