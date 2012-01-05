#ifndef INCLUDED_com_ktxsoftware_kje_Tileset
#define INCLUDED_com_ktxsoftware_kje_Tileset

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,ktxsoftware,kje,Image)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Painter)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Tileset)
namespace com{
namespace ktxsoftware{
namespace kje{


class Tileset_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tileset_obj OBJ_;
		Tileset_obj();
		Void __construct(::String imagename,int tileWidth,int tileHeight);

	public:
		static hx::ObjectPtr< Tileset_obj > __new(::String imagename,int tileWidth,int tileHeight);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Tileset_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Tileset"); }

		int TILE_WIDTH; /* REM */ 
		int TILE_HEIGHT; /* REM */ 
		int xmax; /* REM */ 
		int ymax; /* REM */ 
		::com::ktxsoftware::kje::Image image; /* REM */ 
		virtual Void render( ::com::ktxsoftware::kje::Painter painter,int tile,int x,int y);
		Dynamic render_dyn();

		virtual int getLength( );
		Dynamic getLength_dyn();

};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje

#endif /* INCLUDED_com_ktxsoftware_kje_Tileset */ 
