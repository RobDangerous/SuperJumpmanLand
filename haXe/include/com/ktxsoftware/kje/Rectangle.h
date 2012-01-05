#ifndef INCLUDED_com_ktxsoftware_kje_Rectangle
#define INCLUDED_com_ktxsoftware_kje_Rectangle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,ktxsoftware,kje,Rectangle)
namespace com{
namespace ktxsoftware{
namespace kje{


class Rectangle_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Rectangle_obj OBJ_;
		Rectangle_obj();
		Void __construct(double x,double y,double width,double height);

	public:
		static hx::ObjectPtr< Rectangle_obj > __new(double x,double y,double width,double height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Rectangle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Rectangle"); }

		double x; /* REM */ 
		double y; /* REM */ 
		double width; /* REM */ 
		double height; /* REM */ 
		virtual Void setPos( int x,int y);
		Dynamic setPos_dyn();

		virtual Void moveX( int xdelta);
		Dynamic moveX_dyn();

		virtual Void moveY( int ydelta);
		Dynamic moveY_dyn();

		virtual bool collision( ::com::ktxsoftware::kje::Rectangle r);
		Dynamic collision_dyn();

};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje

#endif /* INCLUDED_com_ktxsoftware_kje_Rectangle */ 
