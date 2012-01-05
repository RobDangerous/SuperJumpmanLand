#ifndef INCLUDED_com_ktxsoftware_kje_backend_cpp_Loader
#define INCLUDED_com_ktxsoftware_kje_backend_cpp_Loader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/ktxsoftware/kje/Loader.h>
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Loader)
HX_DECLARE_CLASS5(com,ktxsoftware,kje,backend,cpp,Loader)
HX_DECLARE_CLASS2(haxe,io,Bytes)
namespace com{
namespace ktxsoftware{
namespace kje{
namespace backend{
namespace cpp{


class Loader_obj : public ::com::ktxsoftware::kje::Loader_obj{
	public:
		typedef ::com::ktxsoftware::kje::Loader_obj super;
		typedef Loader_obj OBJ_;
		Loader_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Loader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Loader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Loader"); }

		int numberOfFiles; /* REM */ 
		virtual Void loadStarted( int numberOfFiles);
		Dynamic loadStarted_dyn();

		virtual Void loadDataDefinition( );
		Dynamic loadDataDefinition_dyn();

		virtual Void loadXml( ::String filename);
		Dynamic loadXml_dyn();

		virtual Void loadMusic( ::String filename);
		Dynamic loadMusic_dyn();

		virtual Void loadSound( ::String filename);
		Dynamic loadSound_dyn();

		virtual Void loadImage( ::String filename);
		Dynamic loadImage_dyn();

		int bytePosition; /* REM */ 
		virtual int readInt( ::haxe::io::Bytes bytes);
		Dynamic readInt_dyn();

		virtual Void loadMap( ::String name);
		Dynamic loadMap_dyn();

		virtual Void checkComplete( );
		Dynamic checkComplete_dyn();

};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje
} // end namespace backend
} // end namespace cpp

#endif /* INCLUDED_com_ktxsoftware_kje_backend_cpp_Loader */ 
