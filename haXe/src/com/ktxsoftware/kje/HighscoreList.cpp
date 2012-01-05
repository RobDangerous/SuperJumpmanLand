#include <hxcpp.h>

#ifndef INCLUDED_com_ktxsoftware_kje_HighscoreList
#include <com/ktxsoftware/kje/HighscoreList.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Loader
#include <com/ktxsoftware/kje/Loader.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Score
#include <com/ktxsoftware/kje/Score.h>
#endif
namespace com{
namespace ktxsoftware{
namespace kje{

Void HighscoreList_obj::__construct()
{
{
	HX_SOURCE_POS("src/com/ktxsoftware/kje/HighscoreList.hx",7)
	this->scores = Array_obj< ::com::ktxsoftware::kje::Score >::__new();
}
;
	return null();
}

HighscoreList_obj::~HighscoreList_obj() { }

Dynamic HighscoreList_obj::__CreateEmpty() { return  new HighscoreList_obj; }
hx::ObjectPtr< HighscoreList_obj > HighscoreList_obj::__new()
{  hx::ObjectPtr< HighscoreList_obj > result = new HighscoreList_obj();
	result->__construct();
	return result;}

Dynamic HighscoreList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HighscoreList_obj > result = new HighscoreList_obj();
	result->__construct();
	return result;}

Void HighscoreList_obj::init( Array< ::com::ktxsoftware::kje::Score > scores){
{
		HX_SOURCE_PUSH("HighscoreList_obj::init")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/HighscoreList.hx",16)
		this->scores = scores;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HighscoreList_obj,init,(void))

Array< ::com::ktxsoftware::kje::Score > HighscoreList_obj::getScores( ){
	HX_SOURCE_PUSH("HighscoreList_obj::getScores")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/HighscoreList.hx",20)
	return this->scores;
}


HX_DEFINE_DYNAMIC_FUNC0(HighscoreList_obj,getScores,return )

Void HighscoreList_obj::addScore( ::String name,int score){
{
		HX_SOURCE_PUSH("HighscoreList_obj::addScore")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/HighscoreList.hx",25)
		this->scores->push(::com::ktxsoftware::kje::Score_obj::__new(name,score));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int run(::com::ktxsoftware::kje::Score score1,::com::ktxsoftware::kje::Score score2){
{
				HX_SOURCE_POS("src/com/ktxsoftware/kje/HighscoreList.hx",26)
				return (score2->getScore() - score1->getScore());
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_SOURCE_POS("src/com/ktxsoftware/kje/HighscoreList.hx",26)
		this->scores->sort( Dynamic(new _Function_1_1()));
		HX_SOURCE_POS("src/com/ktxsoftware/kje/HighscoreList.hx",29)
		::com::ktxsoftware::kje::Loader_obj::getInstance()->saveHighscore(::com::ktxsoftware::kje::Score_obj::__new(name,score));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HighscoreList_obj,addScore,(void))

::com::ktxsoftware::kje::HighscoreList HighscoreList_obj::instance;

::com::ktxsoftware::kje::HighscoreList HighscoreList_obj::getInstance( ){
	HX_SOURCE_PUSH("HighscoreList_obj::getInstance")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/HighscoreList.hx",12)
	if (((::com::ktxsoftware::kje::HighscoreList_obj::instance == null()))){
		HX_SOURCE_POS("src/com/ktxsoftware/kje/HighscoreList.hx",12)
		::com::ktxsoftware::kje::HighscoreList_obj::instance = ::com::ktxsoftware::kje::HighscoreList_obj::__new();
	}
	HX_SOURCE_POS("src/com/ktxsoftware/kje/HighscoreList.hx",13)
	return ::com::ktxsoftware::kje::HighscoreList_obj::instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HighscoreList_obj,getInstance,return )


HighscoreList_obj::HighscoreList_obj()
{
}

void HighscoreList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HighscoreList);
	HX_MARK_MEMBER_NAME(scores,"scores");
	HX_MARK_END_CLASS();
}

Dynamic HighscoreList_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scores") ) { return scores; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return instance; }
		if (HX_FIELD_EQ(inName,"addScore") ) { return addScore_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getScores") ) { return getScores_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic HighscoreList_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"scores") ) { scores=inValue.Cast< Array< ::com::ktxsoftware::kje::Score > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::com::ktxsoftware::kje::HighscoreList >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void HighscoreList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("scores"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("instance"),
	HX_CSTRING("getInstance"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("scores"),
	HX_CSTRING("init"),
	HX_CSTRING("getScores"),
	HX_CSTRING("addScore"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HighscoreList_obj::instance,"instance");
};

Class HighscoreList_obj::__mClass;

void HighscoreList_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.kje.HighscoreList"), hx::TCanCast< HighscoreList_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void HighscoreList_obj::__boot()
{
	hx::Static(instance);
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje
