#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
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
#ifndef INCLUDED_com_ktxsoftware_kje_Sound
#include <com/ktxsoftware/kje/Sound.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_backend_cpp_Image
#include <com/ktxsoftware/kje/backend/cpp/Image.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_backend_cpp_Loader
#include <com/ktxsoftware/kje/backend/cpp/Loader.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_backend_cpp_Music
#include <com/ktxsoftware/kje/backend/cpp/Music.h>
#endif
#ifndef INCLUDED_com_ktxsoftware_kje_backend_cpp_Sound
#include <com/ktxsoftware/kje/backend/cpp/Sound.h>
#endif
#ifndef INCLUDED_cpp_io_File
#include <cpp/io/File.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
namespace com{
namespace ktxsoftware{
namespace kje{
namespace backend{
namespace cpp{

Void Loader_obj::__construct()
{
{
	HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",9)
	super::__construct();
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

Void Loader_obj::loadStarted( int numberOfFiles){
{
		HX_SOURCE_PUSH("Loader_obj::loadStarted")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",13)
		this->numberOfFiles = numberOfFiles;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loadStarted,(void))

Void Loader_obj::loadDataDefinition( ){
{
		HX_SOURCE_PUSH("Loader_obj::loadDataDefinition")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",18)
		this->xmls->set(HX_CSTRING("data.xml"),::Xml_obj::parse(::cpp::io::File_obj::getContent(HX_CSTRING("data.xml"))));
		HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",19)
		this->loadFiles();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,loadDataDefinition,(void))

Void Loader_obj::loadXml( ::String filename){
{
		HX_SOURCE_PUSH("Loader_obj::loadXml")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",23)
		this->xmls->set(filename,::Xml_obj::parse(::cpp::io::File_obj::getContent(filename)));
		HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",24)
		--(this->numberOfFiles);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",25)
		this->checkComplete();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loadXml,(void))

Void Loader_obj::loadMusic( ::String filename){
{
		HX_SOURCE_PUSH("Loader_obj::loadMusic")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",29)
		this->musics->set(filename,::com::ktxsoftware::kje::backend::cpp::Music_obj::__new(filename));
		HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",30)
		--(this->numberOfFiles);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",31)
		this->checkComplete();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loadMusic,(void))

Void Loader_obj::loadSound( ::String filename){
{
		HX_SOURCE_PUSH("Loader_obj::loadSound")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",35)
		this->sounds->set(filename,::com::ktxsoftware::kje::backend::cpp::Sound_obj::__new(filename));
		HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",36)
		--(this->numberOfFiles);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",37)
		this->checkComplete();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loadSound,(void))

Void Loader_obj::loadImage( ::String filename){
{
		HX_SOURCE_PUSH("Loader_obj::loadImage")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",41)
		this->images->set(filename,::com::ktxsoftware::kje::backend::cpp::Image_obj::__new(filename));
		HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",42)
		--(this->numberOfFiles);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",43)
		this->checkComplete();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loadImage,(void))

int Loader_obj::readInt( ::haxe::io::Bytes bytes){
	HX_SOURCE_PUSH("Loader_obj::readInt")
	HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",49)
	int fourth = bytes->b->__get(this->bytePosition);
	HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",50)
	int third = bytes->b->__get((this->bytePosition + (int)1));
	HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",51)
	int second = bytes->b->__get((this->bytePosition + (int)2));
	HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",52)
	int first = bytes->b->__get((this->bytePosition + (int)3));
	HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",53)
	hx::AddEq(this->bytePosition,(int)4);
	HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",54)
	return (((first + (second * (int)256)) + ((third * (int)256) * (int)256)) + (((fourth * (int)256) * (int)256) * (int)256));
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,readInt,return )

Void Loader_obj::loadMap( ::String name){
{
		HX_SOURCE_PUSH("Loader_obj::loadMap")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",58)
		this->bytePosition = (int)0;
		HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",59)
		::haxe::io::Bytes bytes = ::cpp::io::File_obj::getBytes(name);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",60)
		int levelWidth = this->readInt(bytes);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",61)
		int levelHeight = this->readInt(bytes);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",62)
		Array< Array< int > > map = Array_obj< Array< int > >::__new();
		HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",63)
		{
			HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",63)
			int _g = (int)0;
			HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",63)
			while(((_g < levelWidth))){
				HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",63)
				int x = (_g)++;
				HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",64)
				map->push(Array_obj< int >::__new());
				HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",65)
				{
					HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",65)
					int _g1 = (int)0;
					HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",65)
					while(((_g1 < levelHeight))){
						HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",65)
						int y = (_g1)++;
						HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",66)
						map->__get(x)->push(this->readInt(bytes));
					}
				}
			}
		}
		HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",69)
		this->maps->set(name,map);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",70)
		--(this->numberOfFiles);
		HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",71)
		this->checkComplete();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loadMap,(void))

Void Loader_obj::checkComplete( ){
{
		HX_SOURCE_PUSH("Loader_obj::checkComplete")
		HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",74)
		if (((this->numberOfFiles <= (int)0))){
			HX_SOURCE_POS("src/com/ktxsoftware/kje/backend/cpp/Loader.hx",75)
			::Main_obj::start();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,checkComplete,(void))


Loader_obj::Loader_obj()
{
}

void Loader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Loader);
	HX_MARK_MEMBER_NAME(numberOfFiles,"numberOfFiles");
	HX_MARK_MEMBER_NAME(bytePosition,"bytePosition");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic Loader_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"loadXml") ) { return loadXml_dyn(); }
		if (HX_FIELD_EQ(inName,"readInt") ) { return readInt_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMap") ) { return loadMap_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadMusic") ) { return loadMusic_dyn(); }
		if (HX_FIELD_EQ(inName,"loadSound") ) { return loadSound_dyn(); }
		if (HX_FIELD_EQ(inName,"loadImage") ) { return loadImage_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadStarted") ) { return loadStarted_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bytePosition") ) { return bytePosition; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"numberOfFiles") ) { return numberOfFiles; }
		if (HX_FIELD_EQ(inName,"checkComplete") ) { return checkComplete_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadDataDefinition") ) { return loadDataDefinition_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Loader_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"bytePosition") ) { bytePosition=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"numberOfFiles") ) { numberOfFiles=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Loader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("numberOfFiles"));
	outFields->push(HX_CSTRING("bytePosition"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("numberOfFiles"),
	HX_CSTRING("loadStarted"),
	HX_CSTRING("loadDataDefinition"),
	HX_CSTRING("loadXml"),
	HX_CSTRING("loadMusic"),
	HX_CSTRING("loadSound"),
	HX_CSTRING("loadImage"),
	HX_CSTRING("bytePosition"),
	HX_CSTRING("readInt"),
	HX_CSTRING("loadMap"),
	HX_CSTRING("checkComplete"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Loader_obj::__mClass;

void Loader_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ktxsoftware.kje.backend.cpp.Loader"), hx::TCanCast< Loader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Loader_obj::__boot()
{
}

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje
} // end namespace backend
} // end namespace cpp
