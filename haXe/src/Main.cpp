#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Game
#include <com/ktxsoftware/kje/Game.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Key
#include <com/ktxsoftware/kje/Key.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_KeyEvent
#include <com/ktxsoftware/kje/KeyEvent.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Loader
#include <com/ktxsoftware/kje/Loader.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Painter
#include <com/ktxsoftware/kje/Painter.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_backend_cpp_Loader
#include <com/ktxsoftware/kje/backend/cpp/Loader.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_backend_cpp_Painter
#include <com/ktxsoftware/kje/backend/cpp/Painter.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_sml_SuperMarioLand
#include <com/ktxsoftware/sml/SuperMarioLand.h>
#endif

Void Main_obj::__construct()
{
	return null();
}

Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

::com::ktxsoftware::kje::Game Main_obj::game;

::com::ktxsoftware::kje::backend::cpp::Painter Main_obj::painter;

Void Main_obj::main( ){
{
		HX_SOURCE_PUSH("Main_obj::main")
		HX_SOURCE_POS("src/Main.hx",159)
		::com::ktxsoftware::kje::Loader_obj::init(::com::ktxsoftware::kje::backend::cpp::Loader_obj::__new());
		HX_SOURCE_POS("src/Main.hx",160)
		::Main_obj::game = ::com::ktxsoftware::sml::SuperMarioLand_obj::__new();
		HX_SOURCE_POS("src/Main.hx",161)
		::com::ktxsoftware::kje::Loader_obj::getInstance()->load();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))

Void Main_obj::start( ){
{
		HX_SOURCE_PUSH("Main_obj::start")
		HX_SOURCE_POS("src/Main.hx",165)
		::Main_obj::game->init();
		HX_SOURCE_POS("src/Main.hx",166)
		::Main_obj::painter = ::com::ktxsoftware::kje::backend::cpp::Painter_obj::__new();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,start,(void))

Void Main_obj::frame( ){
{
		HX_SOURCE_PUSH("Main_obj::frame")
		HX_SOURCE_POS("src/Main.hx",170)
		::Main_obj::game->update();
		HX_SOURCE_POS("src/Main.hx",171)
		::Main_obj::painter->begin();
		HX_SOURCE_POS("src/Main.hx",172)
		::Main_obj::game->render(::Main_obj::painter);
		HX_SOURCE_POS("src/Main.hx",173)
		::Main_obj::painter->end();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,frame,(void))

Void Main_obj::pushUp( ){
{
		HX_SOURCE_PUSH("Main_obj::pushUp")
		HX_SOURCE_POS("src/Main.hx",176)
		::Main_obj::game->key(::com::ktxsoftware::kje::KeyEvent_obj::__new(::com::ktxsoftware::kje::Key_obj::UP_dyn(),true));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,pushUp,(void))

Void Main_obj::pushDown( ){
{
		HX_SOURCE_PUSH("Main_obj::pushDown")
		HX_SOURCE_POS("src/Main.hx",180)
		::Main_obj::game->key(::com::ktxsoftware::kje::KeyEvent_obj::__new(::com::ktxsoftware::kje::Key_obj::DOWN_dyn(),true));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,pushDown,(void))

Void Main_obj::pushLeft( ){
{
		HX_SOURCE_PUSH("Main_obj::pushLeft")
		HX_SOURCE_POS("src/Main.hx",184)
		::Main_obj::game->key(::com::ktxsoftware::kje::KeyEvent_obj::__new(::com::ktxsoftware::kje::Key_obj::LEFT_dyn(),true));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,pushLeft,(void))

Void Main_obj::pushRight( ){
{
		HX_SOURCE_PUSH("Main_obj::pushRight")
		HX_SOURCE_POS("src/Main.hx",188)
		::Main_obj::game->key(::com::ktxsoftware::kje::KeyEvent_obj::__new(::com::ktxsoftware::kje::Key_obj::RIGHT_dyn(),true));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,pushRight,(void))

Void Main_obj::releaseUp( ){
{
		HX_SOURCE_PUSH("Main_obj::releaseUp")
		HX_SOURCE_POS("src/Main.hx",192)
		::Main_obj::game->key(::com::ktxsoftware::kje::KeyEvent_obj::__new(::com::ktxsoftware::kje::Key_obj::UP_dyn(),false));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,releaseUp,(void))

Void Main_obj::releaseDown( ){
{
		HX_SOURCE_PUSH("Main_obj::releaseDown")
		HX_SOURCE_POS("src/Main.hx",196)
		::Main_obj::game->key(::com::ktxsoftware::kje::KeyEvent_obj::__new(::com::ktxsoftware::kje::Key_obj::DOWN_dyn(),false));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,releaseDown,(void))

Void Main_obj::releaseLeft( ){
{
		HX_SOURCE_PUSH("Main_obj::releaseLeft")
		HX_SOURCE_POS("src/Main.hx",200)
		::Main_obj::game->key(::com::ktxsoftware::kje::KeyEvent_obj::__new(::com::ktxsoftware::kje::Key_obj::LEFT_dyn(),false));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,releaseLeft,(void))

Void Main_obj::releaseRight( ){
{
		HX_SOURCE_PUSH("Main_obj::releaseRight")
		HX_SOURCE_POS("src/Main.hx",204)
		::Main_obj::game->key(::com::ktxsoftware::kje::KeyEvent_obj::__new(::com::ktxsoftware::kje::Key_obj::RIGHT_dyn(),false));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,releaseRight,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_END_CLASS();
}

Dynamic Main_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { return game; }
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"frame") ) { return frame_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pushUp") ) { return pushUp_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"painter") ) { return painter; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pushDown") ) { return pushDown_dyn(); }
		if (HX_FIELD_EQ(inName,"pushLeft") ) { return pushLeft_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pushRight") ) { return pushRight_dyn(); }
		if (HX_FIELD_EQ(inName,"releaseUp") ) { return releaseUp_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"releaseDown") ) { return releaseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"releaseLeft") ) { return releaseLeft_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"releaseRight") ) { return releaseRight_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { game=inValue.Cast< ::com::ktxsoftware::kje::Game >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"painter") ) { painter=inValue.Cast< ::com::ktxsoftware::kje::backend::cpp::Painter >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("game"),
	HX_CSTRING("painter"),
	HX_CSTRING("main"),
	HX_CSTRING("start"),
	HX_CSTRING("frame"),
	HX_CSTRING("pushUp"),
	HX_CSTRING("pushDown"),
	HX_CSTRING("pushLeft"),
	HX_CSTRING("pushRight"),
	HX_CSTRING("releaseUp"),
	HX_CSTRING("releaseDown"),
	HX_CSTRING("releaseLeft"),
	HX_CSTRING("releaseRight"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::game,"game");
	HX_MARK_MEMBER_NAME(Main_obj::painter,"painter");
};

Class Main_obj::__mClass;

void Main_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Main_obj::__boot()
{
	hx::Static(game);
	hx::Static(painter);
}

