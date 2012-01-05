#include <hxcpp.h>

#ifndef INCLUDED_com_ktxsoftware_kje_Game
#include <com/ktxsoftware/kje/Game.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_KeyEvent
#include <com/ktxsoftware/kje/KeyEvent.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Painter
#include <com/ktxsoftware/kje/Painter.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Scene
#include <com/ktxsoftware/kje/Scene.h>
#endif
namespace com{
namespace ktxsoftware{
namespace kje{

Void Game_obj::__construct(int width,int height)
{
{
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Game.hx",14)
	::com::ktxsoftware::kje::Game_obj::instance = hx::ObjectPtr<OBJ_>(this);
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Game.hx",15)
	this->width = width;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Game.hx",16)
	this->height = height;
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Game.hx",17)
	this->scene = ::com::ktxsoftware::kje::Scene_obj::__new();
}
;
	return null();
}

Game_obj::~Game_obj() { }

Dynamic Game_obj::__CreateEmpty() { return  new Game_obj; }
hx::ObjectPtr< Game_obj > Game_obj::__new(int width,int height)
{  hx::ObjectPtr< Game_obj > result = new Game_obj();
	result->__construct(width,height);
	return result;}

Dynamic Game_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Game_obj > result = new Game_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

int Game_obj::getWidth( ){
	HX_SOURCE_PUSH("Game_obj::getWidth")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Game.hx",20)
	return this->width;
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getWidth,return )

int Game_obj::getHeight( ){
	HX_SOURCE_PUSH("Game_obj::getHeight")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Game.hx",24)
	return this->height;
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getHeight,return )

Void Game_obj::init( ){
{
		HX_SOURCE_PUSH("Game_obj::init")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,init,(void))

Void Game_obj::update( ){
{
		HX_SOURCE_PUSH("Game_obj::update")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Game.hx",30)
		this->scene->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,update,(void))

Void Game_obj::render( ::com::ktxsoftware::kje::Painter painter){
{
		HX_SOURCE_PUSH("Game_obj::render")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Game.hx",34)
		this->scene->render(painter);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,render,(void))

bool Game_obj::hasScores( ){
	HX_SOURCE_PUSH("Game_obj::hasScores")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Game.hx",38)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,hasScores,return )

Void Game_obj::key( ::com::ktxsoftware::kje::KeyEvent event){
{
		HX_SOURCE_PUSH("Game_obj::key")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,key,(void))

Void Game_obj::charKey( ::String c){
{
		HX_SOURCE_PUSH("Game_obj::charKey")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,charKey,(void))

Void Game_obj::mouseDown( int x,int y){
{
		HX_SOURCE_PUSH("Game_obj::mouseDown")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Game_obj,mouseDown,(void))

Void Game_obj::mouseUp( int x,int y){
{
		HX_SOURCE_PUSH("Game_obj::mouseUp")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Game_obj,mouseUp,(void))

Void Game_obj::mouseMove( int x,int y){
{
		HX_SOURCE_PUSH("Game_obj::mouseMove")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Game_obj,mouseMove,(void))

::com::ktxsoftware::kje::Game Game_obj::instance;

::com::ktxsoftware::kje::Game Game_obj::getInstance( ){
	HX_SOURCE_PUSH("Game_obj::getInstance")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Game.hx",9)
	return ::com::ktxsoftware::kje::Game_obj::instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getInstance,return )


Game_obj::Game_obj()
{
}

void Game_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Game);
	HX_MARK_MEMBER_NAME(scene,"scene");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_END_CLASS();
}

Dynamic Game_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return key_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { return scene; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"charKey") ) { return charKey_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return instance; }
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"hasScores") ) { return hasScores_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseMove") ) { return mouseMove_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Game_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { scene=inValue.Cast< ::com::ktxsoftware::kje::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::com::ktxsoftware::kje::Game >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Game_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("scene"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("instance"),
	HX_CSTRING("getInstance"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("scene"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("getWidth"),
	HX_CSTRING("getHeight"),
	HX_CSTRING("init"),
	HX_CSTRING("update"),
	HX_CSTRING("render"),
	HX_CSTRING("hasScores"),
	HX_CSTRING("key"),
	HX_CSTRING("charKey"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("mouseMove"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Game_obj::instance,"instance");
};

Class Game_obj::__mClass;

void Game_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.kje.Game"), hx::TCanCast< Game_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Game_obj::__boot()
{
	hx::Static(instance);
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje
