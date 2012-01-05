#ifndef INCLUDED_com_ktxsoftware_kje_backend_cpp_Painter
#define INCLUDED_com_ktxsoftware_kje_backend_cpp_Painter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/ktxsoftware/kje/Painter.h>
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Image)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Painter)
HX_DECLARE_CLASS5(com,ktxsoftware,kje,backend,cpp,Painter)
namespace com{
namespace ktxsoftware{
namespace kje{
namespace backend{
namespace cpp{


class Painter_obj : public ::com::ktxsoftware::kje::Painter_obj{
	public:
		typedef ::com::ktxsoftware::kje::Painter_obj super;
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

		double tx; /* REM */ 
		double ty; /* REM */ 
		virtual Void begin( );
		Dynamic begin_dyn();

		virtual Void end( );
		Dynamic end_dyn();

		virtual Void translate( double x,double y);
		Dynamic translate_dyn();

		virtual Void drawImage2( ::com::ktxsoftware::kje::Image image,double sx,double sy,double sw,double sh,double dx,double dy,double dw,double dh);
		Dynamic drawImage2_dyn();

};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje
} // end namespace backend
} // end namespace cpp

#endif /* INCLUDED_com_ktxsoftware_kje_backend_cpp_Painter */ 
