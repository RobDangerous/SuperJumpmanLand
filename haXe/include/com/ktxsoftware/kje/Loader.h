#ifndef INCLUDED_com_ktxsoftware_kje_Loader
#define INCLUDED_com_ktxsoftware_kje_Loader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Font)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Image)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Loader)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Music)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Score)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Sound)
namespace com{
namespace ktxsoftware{
namespace kje{


class Loader_obj : public hx::Object{
	public:
		typedef hx::Object super;
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

		::Hash maps; /* REM */ 
		::Hash images; /* REM */ 
		::Hash sounds; /* REM */ 
		::Hash musics; /* REM */ 
		::Hash xmls; /* REM */ 
		int loadcount; /* REM */ 
		virtual Array< Array< int > > getMap( ::String name);
		Dynamic getMap_dyn();

		virtual ::com::ktxsoftware::kje::Image getImage( ::String name);
		Dynamic getImage_dyn();

		virtual ::com::ktxsoftware::kje::Music getMusic( ::String name);
		Dynamic getMusic_dyn();

		virtual ::com::ktxsoftware::kje::Sound getSound( ::String name);
		Dynamic getSound_dyn();

		virtual ::Xml getXml( ::String name);
		Dynamic getXml_dyn();

		virtual Void load( );
		Dynamic load_dyn();

		virtual Void loadDataDefinition( );
		Dynamic loadDataDefinition_dyn();

		virtual Void loadFiles( );
		Dynamic loadFiles_dyn();

		virtual Void loadStarted( int numberOfFiles);
		Dynamic loadStarted_dyn();

		virtual Void loadHighscore( );
		Dynamic loadHighscore_dyn();

		virtual Void saveHighscore( ::com::ktxsoftware::kje::Score score);
		Dynamic saveHighscore_dyn();

		virtual Void loadImage( ::String filename);
		Dynamic loadImage_dyn();

		virtual Void loadMap( ::String name);
		Dynamic loadMap_dyn();

		virtual Void loadSound( ::String filename);
		Dynamic loadSound_dyn();

		virtual Void loadMusic( ::String filename);
		Dynamic loadMusic_dyn();

		virtual Void loadXml( ::String filename);
		Dynamic loadXml_dyn();

		virtual ::com::ktxsoftware::kje::Font loadFont( ::String name,int style,int size);
		Dynamic loadFont_dyn();

		virtual Void setNormalCursor( );
		Dynamic setNormalCursor_dyn();

		virtual Void setHandCursor( );
		Dynamic setHandCursor_dyn();

		static ::com::ktxsoftware::kje::Loader instance; /* REM */ 
		static Void init( ::com::ktxsoftware::kje::Loader loader);
		static Dynamic init_dyn();

		static ::com::ktxsoftware::kje::Loader getInstance( );
		static Dynamic getInstance_dyn();

};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje

#endif /* INCLUDED_com_ktxsoftware_kje_Loader */ 
