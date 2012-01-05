#ifndef INCLUDED_com_ktxsoftware_sml_SuperMarioLand
#define INCLUDED_com_ktxsoftware_sml_SuperMarioLand

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/ktxsoftware/kje/Game.h>
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Game)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,KeyEvent)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Music)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Painter)
HX_DECLARE_CLASS3(com,ktxsoftware,sml,Mode)
HX_DECLARE_CLASS3(com,ktxsoftware,sml,SuperMarioLand)
namespace com{
namespace ktxsoftware{
namespace sml{


class SuperMarioLand_obj : public ::com::ktxsoftware::kje::Game_obj{
	public:
		typedef ::com::ktxsoftware::kje::Game_obj super;
		typedef SuperMarioLand_obj OBJ_;
		SuperMarioLand_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SuperMarioLand_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SuperMarioLand_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("SuperMarioLand"); }

		::com::ktxsoftware::kje::Music music; /* REM */ 
		Array< bool > tileColissions; /* REM */ 
		Array< Array< int > > map; /* REM */ 
		Array< Array< int > > originalmap; /* REM */ 
		::String highscoreName; /* REM */ 
		::com::ktxsoftware::sml::Mode mode; /* REM */ 
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void startGame( );
		Dynamic startGame_dyn();

		virtual Void showHighscore( );
		Dynamic showHighscore_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void render( ::com::ktxsoftware::kje::Painter painter);
		Dynamic render_dyn();

		virtual Void key( ::com::ktxsoftware::kje::KeyEvent event);
		Dynamic key_dyn();

		virtual Void charKey( ::String c);
		Dynamic charKey_dyn();

		static ::com::ktxsoftware::sml::SuperMarioLand instance; /* REM */ 
		static ::com::ktxsoftware::sml::SuperMarioLand getInstance( );
		static Dynamic getInstance_dyn();

		static bool isCollidable( int tilenumber);
		static Dynamic isCollidable_dyn();

};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace sml

#endif /* INCLUDED_com_ktxsoftware_sml_SuperMarioLand */ 
