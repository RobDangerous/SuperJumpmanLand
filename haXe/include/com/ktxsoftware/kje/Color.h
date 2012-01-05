#ifndef INCLUDED_com_ktxsoftware_kje_Color
#define INCLUDED_com_ktxsoftware_kje_Color

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,ktxsoftware,kje,Color)
namespace com{
namespace ktxsoftware{
namespace kje{


class Color_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Color_obj OBJ_;
		Color_obj();
		Void __construct(int r,int g,int b);

	public:
		static hx::ObjectPtr< Color_obj > __new(int r,int g,int b);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Color_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Color"); }

		int r; /* REM */ 
		int g; /* REM */ 
		int b; /* REM */ 
};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje

#endif /* INCLUDED_com_ktxsoftware_kje_Color */ 
