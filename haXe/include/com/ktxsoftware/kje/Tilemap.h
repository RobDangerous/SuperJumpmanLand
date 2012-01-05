#ifndef INCLUDED_com_ktxsoftware_kje_Tilemap
#define INCLUDED_com_ktxsoftware_kje_Tilemap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,ktxsoftware,kje,Painter)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Sprite)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Tilemap)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Tileset)
namespace com{
namespace ktxsoftware{
namespace kje{


class Tilemap_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tilemap_obj OBJ_;
		Tilemap_obj();
		Void __construct(::String imagename,int tileWidth,int tileHeight,Array< Array< int > > map,Array< bool > tileCollision);

	public:
		static hx::ObjectPtr< Tilemap_obj > __new(::String imagename,int tileWidth,int tileHeight,Array< Array< int > > map,Array< bool > tileCollision);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Tilemap_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Tilemap"); }

		::com::ktxsoftware::kje::Tileset tileset; /* REM */ 
		Array< Array< int > > map; /* REM */ 
		int levelWidth; /* REM */ 
		int levelHeight; /* REM */ 
		Array< bool > tileCollision; /* REM */ 
		virtual Void render( ::com::ktxsoftware::kje::Painter painter,int xleft,int ytop,int width,int height);
		Dynamic render_dyn();

		virtual bool collidesupdown( int x1,int x2,int y);
		Dynamic collidesupdown_dyn();

		virtual bool collidesrightleft( int x,int y1,int y2);
		Dynamic collidesrightleft_dyn();

		virtual bool collides( int x,int y);
		Dynamic collides_dyn();

		virtual bool collideright( ::com::ktxsoftware::kje::Sprite sprite);
		Dynamic collideright_dyn();

		virtual bool collideleft( ::com::ktxsoftware::kje::Sprite sprite);
		Dynamic collideleft_dyn();

		virtual bool collidedown( ::com::ktxsoftware::kje::Sprite sprite);
		Dynamic collidedown_dyn();

		virtual bool collideup( ::com::ktxsoftware::kje::Sprite sprite);
		Dynamic collideup_dyn();

		virtual int getWidth( );
		Dynamic getWidth_dyn();

		virtual ::com::ktxsoftware::kje::Tileset getTileset( );
		Dynamic getTileset_dyn();

		static int round( double value);
		static Dynamic round_dyn();

};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje

#endif /* INCLUDED_com_ktxsoftware_kje_Tilemap */ 
