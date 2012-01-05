#ifndef INCLUDED_com_ktxsoftware_kje_Sprite
#define INCLUDED_com_ktxsoftware_kje_Sprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,ktxsoftware,kje,Animation)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Direction)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Image)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Painter)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Rectangle)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Sprite)
namespace com{
namespace ktxsoftware{
namespace kje{


class Sprite_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Sprite_obj OBJ_;
		Sprite_obj();
		Void __construct(::com::ktxsoftware::kje::Image image,int width,int height,int z);

	public:
		static hx::ObjectPtr< Sprite_obj > __new(::com::ktxsoftware::kje::Image image,int width,int height,int z);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Sprite_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Sprite"); }

		::com::ktxsoftware::kje::Image image; /* REM */ 
		::com::ktxsoftware::kje::Animation animation; /* REM */ 
		::com::ktxsoftware::kje::Rectangle collider; /* REM */ 
		double x; /* REM */ 
		double y; /* REM */ 
		double width; /* REM */ 
		double height; /* REM */ 
		double speedx; /* REM */ 
		double speedy; /* REM */ 
		double accx; /* REM */ 
		double accy; /* REM */ 
		double maxspeedy; /* REM */ 
		bool collides; /* REM */ 
		int z; /* REM */ 
		::com::ktxsoftware::kje::Rectangle tempcollider; /* REM */ 
		virtual ::com::ktxsoftware::kje::Rectangle collisionRect( );
		Dynamic collisionRect_dyn();

		virtual Void setAnimation( ::com::ktxsoftware::kje::Animation animation);
		Dynamic setAnimation_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void render( ::com::ktxsoftware::kje::Painter painter);
		Dynamic render_dyn();

		virtual Void hitFrom( ::com::ktxsoftware::kje::Direction dir);
		Dynamic hitFrom_dyn();

		virtual Void hit( ::com::ktxsoftware::kje::Sprite sprite);
		Dynamic hit_dyn();

		virtual Void setImage( ::com::ktxsoftware::kje::Image image);
		Dynamic setImage_dyn();

		virtual Void outOfView( );
		Dynamic outOfView_dyn();

};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje

#endif /* INCLUDED_com_ktxsoftware_kje_Sprite */ 
