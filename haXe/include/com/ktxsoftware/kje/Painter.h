#ifndef INCLUDED_com_ktxsoftware_kje_Painter
#define INCLUDED_com_ktxsoftware_kje_Painter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,ktxsoftware,kje,Font)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Image)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Painter)
namespace com{
namespace ktxsoftware{
namespace kje{


class Painter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Painter_obj OBJ_;
		Painter_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Painter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Painter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Painter"); }

		virtual Void drawImage( ::com::ktxsoftware::kje::Image img,double x,double y);
		Dynamic drawImage_dyn();

		virtual Void drawImage2( ::com::ktxsoftware::kje::Image image,double sx,double sy,double sw,double sh,double dx,double dy,double dw,double dh);
		Dynamic drawImage2_dyn();

		virtual Void setColor( int r,int g,int b);
		Dynamic setColor_dyn();

		virtual Void drawRect( double x,double y,double width,double height);
		Dynamic drawRect_dyn();

		virtual Void fillRect( double x,double y,double width,double height);
		Dynamic fillRect_dyn();

		virtual Void setFont( ::com::ktxsoftware::kje::Font font);
		Dynamic setFont_dyn();

		virtual Void drawChars( ::String text,int offset,int length,double x,double y);
		Dynamic drawChars_dyn();

		virtual Void drawString( ::String text,double x,double y);
		Dynamic drawString_dyn();

		virtual Void drawLine( double x1,double y1,double x2,double y2);
		Dynamic drawLine_dyn();

		virtual Void fillTriangle( double x1,double y1,double x2,double y2,double x3,double y3);
		Dynamic fillTriangle_dyn();

		virtual Void translate( double x,double y);
		Dynamic translate_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void begin( );
		Dynamic begin_dyn();

		virtual Void end( );
		Dynamic end_dyn();

};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje

#endif /* INCLUDED_com_ktxsoftware_kje_Painter */ 
