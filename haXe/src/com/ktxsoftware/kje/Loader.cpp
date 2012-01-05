#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Font
#include <com/ktxsoftware/kje/Font.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Game
#include <com/ktxsoftware/kje/Game.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Image
#include <com/ktxsoftware/kje/Image.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Loader
#include <com/ktxsoftware/kje/Loader.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Music
#include <com/ktxsoftware/kje/Music.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Score
#include <com/ktxsoftware/kje/Score.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_Sound
#include <com/ktxsoftware/kje/Sound.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
namespace com{
namespace ktxsoftware{
namespace kje{

Void Loader_obj::__construct()
{
{
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",13)
	this->maps = ::Hash_obj::__new();
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",14)
	this->images = ::Hash_obj::__new();
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",15)
	this->sounds = ::Hash_obj::__new();
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",16)
	this->musics = ::Hash_obj::__new();
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",17)
	this->xmls = ::Hash_obj::__new();
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",18)
	this->loadcount = (int)0;
}
;
	return null();
}

Loader_obj::~Loader_obj() { }

Dynamic Loader_obj::__CreateEmpty() { return  new Loader_obj; }
hx::ObjectPtr< Loader_obj > Loader_obj::__new()
{  hx::ObjectPtr< Loader_obj > result = new Loader_obj();
	result->__construct();
	return result;}

Dynamic Loader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Loader_obj > result = new Loader_obj();
	result->__construct();
	return result;}

Array< Array< int > > Loader_obj::getMap( ::String name){
	HX_SOURCE_PUSH("Loader_obj::getMap")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",29)
	return this->maps->get(name);
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,getMap,return )

::com::ktxsoftware::kje::Image Loader_obj::getImage( ::String name){
	HX_SOURCE_PUSH("Loader_obj::getImage")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",34)
	if ((!(this->images->exists(name)))){
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",34)
		::haxe::Log_obj::trace(((HX_CSTRING("Could not find image ") + name) + HX_CSTRING(".")),hx::SourceInfo(HX_CSTRING("Loader.hx"),35,HX_CSTRING("com.ktxsoftware.kje.Loader"),HX_CSTRING("getImage")));
	}
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",37)
	return this->images->get(name);
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,getImage,return )

::com::ktxsoftware::kje::Music Loader_obj::getMusic( ::String name){
	HX_SOURCE_PUSH("Loader_obj::getMusic")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",40)
	return this->musics->get(name);
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,getMusic,return )

::com::ktxsoftware::kje::Sound Loader_obj::getSound( ::String name){
	HX_SOURCE_PUSH("Loader_obj::getSound")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",44)
	return this->sounds->get(name);
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,getSound,return )

::Xml Loader_obj::getXml( ::String name){
	HX_SOURCE_PUSH("Loader_obj::getXml")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",48)
	return this->xmls->get(name);
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,getXml,return )

Void Loader_obj::load( ){
{
		HX_SOURCE_PUSH("Loader_obj::load")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",52)
		this->loadDataDefinition();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,load,(void))

Void Loader_obj::loadDataDefinition( ){
{
		HX_SOURCE_PUSH("Loader_obj::loadDataDefinition")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",58)
		this->loadXml(HX_CSTRING("data.xml"));
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",59)
		this->loadFiles();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,loadDataDefinition,(void))

Void Loader_obj::loadFiles( ){
{
		HX_SOURCE_PUSH("Loader_obj::loadFiles")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",63)
		::Xml node = this->getXml(HX_CSTRING("data.xml"));
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",64)
		int size = (int)0;
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",65)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(node->elements()->__Field(HX_CSTRING("next"))()->__Field(HX_CSTRING("elements"))());  __it->hasNext(); ){
			::Xml element = __it->next();
			++(size);
		}
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",66)
		this->loadStarted(size);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",67)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(node->elements()->__Field(HX_CSTRING("next"))()->__Field(HX_CSTRING("elements"))());  __it->hasNext(); ){
			::Xml dataNode = __it->next();
			::String _switch_1 = (dataNode->getNodeName());
			if (  ( _switch_1==HX_CSTRING("image"))){
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",69)
				this->loadImage(dataNode->firstChild()->getNodeValue());
			}
			else if (  ( _switch_1==HX_CSTRING("xml"))){
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",71)
				this->loadXml(dataNode->firstChild()->getNodeValue());
			}
			else if (  ( _switch_1==HX_CSTRING("music"))){
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",73)
				this->loadMusic(dataNode->firstChild()->getNodeValue());
			}
			else if (  ( _switch_1==HX_CSTRING("sound"))){
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",75)
				this->loadSound(dataNode->firstChild()->getNodeValue());
			}
			else if (  ( _switch_1==HX_CSTRING("map"))){
				HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",77)
				this->loadMap(dataNode->firstChild()->getNodeValue());
			}
;
		}
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",81)
		if ((::com::ktxsoftware::kje::Game_obj::getInstance()->hasScores())){
			HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",81)
			this->loadHighscore();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,loadFiles,(void))

Void Loader_obj::loadStarted( int numberOfFiles){
{
		HX_SOURCE_PUSH("Loader_obj::loadStarted")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loadStarted,(void))

Void Loader_obj::loadHighscore( ){
{
		HX_SOURCE_PUSH("Loader_obj::loadHighscore")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,loadHighscore,(void))

Void Loader_obj::saveHighscore( ::com::ktxsoftware::kje::Score score){
{
		HX_SOURCE_PUSH("Loader_obj::saveHighscore")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,saveHighscore,(void))

Void Loader_obj::loadImage( ::String filename){
{
		HX_SOURCE_PUSH("Loader_obj::loadImage")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loadImage,(void))

Void Loader_obj::loadMap( ::String name){
{
		HX_SOURCE_PUSH("Loader_obj::loadMap")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loadMap,(void))

Void Loader_obj::loadSound( ::String filename){
{
		HX_SOURCE_PUSH("Loader_obj::loadSound")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loadSound,(void))

Void Loader_obj::loadMusic( ::String filename){
{
		HX_SOURCE_PUSH("Loader_obj::loadMusic")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loadMusic,(void))

Void Loader_obj::loadXml( ::String filename){
{
		HX_SOURCE_PUSH("Loader_obj::loadXml")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loadXml,(void))

::com::ktxsoftware::kje::Font Loader_obj::loadFont( ::String name,int style,int size){
	HX_SOURCE_PUSH("Loader_obj::loadFont")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",95)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Loader_obj,loadFont,return )

Void Loader_obj::setNormalCursor( ){
{
		HX_SOURCE_PUSH("Loader_obj::setNormalCursor")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,setNormalCursor,(void))

Void Loader_obj::setHandCursor( ){
{
		HX_SOURCE_PUSH("Loader_obj::setHandCursor")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,setHandCursor,(void))

::com::ktxsoftware::kje::Loader Loader_obj::instance;

Void Loader_obj::init( ::com::ktxsoftware::kje::Loader loader){
{
		HX_SOURCE_PUSH("Loader_obj::init")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",21)
		::com::ktxsoftware::kje::Loader_obj::instance = loader;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,init,(void))

::com::ktxsoftware::kje::Loader Loader_obj::getInstance( ){
	HX_SOURCE_PUSH("Loader_obj::getInstance")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/Loader.hx",25)
	return ::com::ktxsoftware::kje::Loader_obj::instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,getInstance,return )


Loader_obj::Loader_obj()
{
}

void Loader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Loader);
	HX_MARK_MEMBER_NAME(maps,"maps");
	HX_MARK_MEMBER_NAME(images,"images");
	HX_MARK_MEMBER_NAME(sounds,"sounds");
	HX_MARK_MEMBER_NAME(musics,"musics");
	HX_MARK_MEMBER_NAME(xmls,"xmls");
	HX_MARK_MEMBER_NAME(loadcount,"loadcount");
	HX_MARK_END_CLASS();
}

Dynamic Loader_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"maps") ) { return maps; }
		if (HX_FIELD_EQ(inName,"xmls") ) { return xmls; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"images") ) { return images; }
		if (HX_FIELD_EQ(inName,"sounds") ) { return sounds; }
		if (HX_FIELD_EQ(inName,"musics") ) { return musics; }
		if (HX_FIELD_EQ(inName,"getMap") ) { return getMap_dyn(); }
		if (HX_FIELD_EQ(inName,"getXml") ) { return getXml_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"loadMap") ) { return loadMap_dyn(); }
		if (HX_FIELD_EQ(inName,"loadXml") ) { return loadXml_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return instance; }
		if (HX_FIELD_EQ(inName,"getImage") ) { return getImage_dyn(); }
		if (HX_FIELD_EQ(inName,"getMusic") ) { return getMusic_dyn(); }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		if (HX_FIELD_EQ(inName,"loadFont") ) { return loadFont_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadcount") ) { return loadcount; }
		if (HX_FIELD_EQ(inName,"loadFiles") ) { return loadFiles_dyn(); }
		if (HX_FIELD_EQ(inName,"loadImage") ) { return loadImage_dyn(); }
		if (HX_FIELD_EQ(inName,"loadSound") ) { return loadSound_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMusic") ) { return loadMusic_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		if (HX_FIELD_EQ(inName,"loadStarted") ) { return loadStarted_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadHighscore") ) { return loadHighscore_dyn(); }
		if (HX_FIELD_EQ(inName,"saveHighscore") ) { return saveHighscore_dyn(); }
		if (HX_FIELD_EQ(inName,"setHandCursor") ) { return setHandCursor_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setNormalCursor") ) { return setNormalCursor_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadDataDefinition") ) { return loadDataDefinition_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Loader_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"maps") ) { maps=inValue.Cast< ::Hash >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xmls") ) { xmls=inValue.Cast< ::Hash >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"images") ) { images=inValue.Cast< ::Hash >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sounds") ) { sounds=inValue.Cast< ::Hash >(); return inValue; }
		if (HX_FIELD_EQ(inName,"musics") ) { musics=inValue.Cast< ::Hash >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::com::ktxsoftware::kje::Loader >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadcount") ) { loadcount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Loader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("maps"));
	outFields->push(HX_CSTRING("images"));
	outFields->push(HX_CSTRING("sounds"));
	outFields->push(HX_CSTRING("musics"));
	outFields->push(HX_CSTRING("xmls"));
	outFields->push(HX_CSTRING("loadcount"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("instance"),
	HX_CSTRING("init"),
	HX_CSTRING("getInstance"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("maps"),
	HX_CSTRING("images"),
	HX_CSTRING("sounds"),
	HX_CSTRING("musics"),
	HX_CSTRING("xmls"),
	HX_CSTRING("loadcount"),
	HX_CSTRING("getMap"),
	HX_CSTRING("getImage"),
	HX_CSTRING("getMusic"),
	HX_CSTRING("getSound"),
	HX_CSTRING("getXml"),
	HX_CSTRING("load"),
	HX_CSTRING("loadDataDefinition"),
	HX_CSTRING("loadFiles"),
	HX_CSTRING("loadStarted"),
	HX_CSTRING("loadHighscore"),
	HX_CSTRING("saveHighscore"),
	HX_CSTRING("loadImage"),
	HX_CSTRING("loadMap"),
	HX_CSTRING("loadSound"),
	HX_CSTRING("loadMusic"),
	HX_CSTRING("loadXml"),
	HX_CSTRING("loadFont"),
	HX_CSTRING("setNormalCursor"),
	HX_CSTRING("setHandCursor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Loader_obj::instance,"instance");
};

Class Loader_obj::__mClass;

void Loader_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.kje.Loader"), hx::TCanCast< Loader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Loader_obj::__boot()
{
	hx::Static(instance);
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje
