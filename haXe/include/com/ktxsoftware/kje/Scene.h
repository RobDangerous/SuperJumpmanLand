#ifndef INCLUDED_com_ktxsoftware_kje_Scene
#define INCLUDED_com_ktxsoftware_kje_Scene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,ktxsoftware,kje,Color)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Painter)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Scene)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Sprite)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Tilemap)
namespace com{
namespace ktxsoftware{
namespace kje{


class Scene_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Scene_obj OBJ_;
		Scene_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Scene_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Scene_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Scene"); }

		::com::ktxsoftware::kje::Tilemap colissionMap; /* REM */ 
		Array< ::com::ktxsoftware::kje::Tilemap > backgrounds; /* REM */ 
		Array< ::com::ktxsoftware::kje::Tilemap > foregrounds; /* REM */ 
		Array< double > backgroundSpeeds; /* REM */ 
		Array< double > foregroundSpeeds; /* REM */ 
		Array< ::com::ktxsoftware::kje::Sprite > heroes; /* REM */ 
		Array< ::com::ktxsoftware::kje::Sprite > sprites; /* REM */ 
		Array< ::com::ktxsoftware::kje::Sprite > enemies; /* REM */ 
		::com::ktxsoftware::kje::Color backgroundColor; /* REM */ 
		int camx; /* REM */ 
		int camy; /* REM */ 
		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void clearTilemaps( );
		Dynamic clearTilemaps_dyn();

		virtual Void setBackgroundColor( ::com::ktxsoftware::kje::Color color);
		Dynamic setBackgroundColor_dyn();

		virtual Array< ::com::ktxsoftware::kje::Sprite > getEnemies( );
		Dynamic getEnemies_dyn();

		virtual Void addBackgroundTilemap( ::com::ktxsoftware::kje::Tilemap tilemap,double speed);
		Dynamic addBackgroundTilemap_dyn();

		virtual Void addForegroundTilemap( ::com::ktxsoftware::kje::Tilemap tilemap,double speed);
		Dynamic addForegroundTilemap_dyn();

		virtual Void setColissionMap( ::com::ktxsoftware::kje::Tilemap tilemap);
		Dynamic setColissionMap_dyn();

		virtual Void addHero( ::com::ktxsoftware::kje::Sprite sprite);
		Dynamic addHero_dyn();

		virtual Void addEnemy( ::com::ktxsoftware::kje::Sprite sprite);
		Dynamic addEnemy_dyn();

		virtual Void removeEnemy( ::com::ktxsoftware::kje::Sprite sprite);
		Dynamic removeEnemy_dyn();

		virtual Void removeHero( ::com::ktxsoftware::kje::Sprite sprite);
		Dynamic removeHero_dyn();

		virtual int adjustCamX( );
		Dynamic adjustCamX_dyn();

		virtual Void sort( Array< ::com::ktxsoftware::kje::Sprite > sprites);
		Dynamic sort_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void move( ::com::ktxsoftware::kje::Sprite sprite);
		Dynamic move_dyn();

		virtual Void render( ::com::ktxsoftware::kje::Painter painter);
		Dynamic render_dyn();

		virtual double getWidth( );
		Dynamic getWidth_dyn();

		static ::com::ktxsoftware::kje::Scene instance; /* REM */ 
		static ::com::ktxsoftware::kje::Scene getInstance( );
		static Dynamic getInstance_dyn();

};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje

#endif /* INCLUDED_com_ktxsoftware_kje_Scene */ 
