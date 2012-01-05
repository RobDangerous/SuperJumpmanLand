#ifndef INCLUDED_com_ktxsoftware_sml_Jumpman
#define INCLUDED_com_ktxsoftware_sml_Jumpman

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/ktxsoftware/kje/Sprite.h>
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Animation)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Direction)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Music)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Sound)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Sprite)
HX_DECLARE_CLASS3(com,ktxsoftware,sml,Enemy)
HX_DECLARE_CLASS3(com,ktxsoftware,sml,Jumpman)
namespace com{
namespace ktxsoftware{
namespace sml{


class Jumpman_obj : public ::com::ktxsoftware::kje::Sprite_obj{
	public:
		typedef ::com::ktxsoftware::kje::Sprite_obj super;
		typedef Jumpman_obj OBJ_;
		Jumpman_obj();
		Void __construct(::com::ktxsoftware::kje::Music music);

	public:
		static hx::ObjectPtr< Jumpman_obj > __new(::com::ktxsoftware::kje::Music music);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Jumpman_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Jumpman"); }

		bool left; /* REM */ 
		bool right; /* REM */ 
		bool up; /* REM */ 
		bool lookRight; /* REM */ 
		bool standing; /* REM */ 
		bool killed; /* REM */ 
		int jumpcount; /* REM */ 
		int lastupcount; /* REM */ 
		::com::ktxsoftware::kje::Animation walkLeft; /* REM */ 
		::com::ktxsoftware::kje::Animation walkRight; /* REM */ 
		::com::ktxsoftware::kje::Animation standLeft; /* REM */ 
		::com::ktxsoftware::kje::Animation standRight; /* REM */ 
		::com::ktxsoftware::kje::Animation jumpLeft; /* REM */ 
		::com::ktxsoftware::kje::Animation jumpRight; /* REM */ 
		::com::ktxsoftware::kje::Sound stompsound; /* REM */ 
		::com::ktxsoftware::kje::Sound jumpsound; /* REM */ 
		::com::ktxsoftware::kje::Sound diesound; /* REM */ 
		::com::ktxsoftware::kje::Music music; /* REM */ 
		int score; /* REM */ 
		int round; /* REM */ 
		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void selectCoin( );
		Dynamic selectCoin_dyn();

		virtual int getScore( );
		Dynamic getScore_dyn();

		virtual int getRound( );
		Dynamic getRound_dyn();

		virtual Void nextRound( );
		Dynamic nextRound_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void setUp( );
		Dynamic setUp_dyn();

		virtual Void hitFrom( ::com::ktxsoftware::kje::Direction dir);
		Dynamic hitFrom_dyn();

		virtual Void die( );
		Dynamic die_dyn();

		virtual Void hitEnemy( ::com::ktxsoftware::sml::Enemy enemy);
		Dynamic hitEnemy_dyn();

		static ::com::ktxsoftware::sml::Jumpman instance; /* REM */ 
		static ::com::ktxsoftware::sml::Jumpman getInstance( );
		static Dynamic getInstance_dyn();

};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace sml

#endif /* INCLUDED_com_ktxsoftware_sml_Jumpman */ 
