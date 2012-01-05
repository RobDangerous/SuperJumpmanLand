#ifndef INCLUDED_com_ktxsoftware_sml_Exit
#define INCLUDED_com_ktxsoftware_sml_Exit

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/ktxsoftware/kje/Sprite.h>
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Sprite)
HX_DECLARE_CLASS3(com,ktxsoftware,sml,Exit)
namespace com{
namespace ktxsoftware{
namespace sml{


class Exit_obj : public ::com::ktxsoftware::kje::Sprite_obj{
	public:
		typedef ::com::ktxsoftware::kje::Sprite_obj super;
		typedef Exit_obj OBJ_;
		Exit_obj();
		Void __construct(int x,int y);

	public:
		static hx::ObjectPtr< Exit_obj > __new(int x,int y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Exit_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Exit"); }

		virtual Void hit( ::com::ktxsoftware::kje::Sprite sprite);
		Dynamic hit_dyn();

};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace sml

#endif /* INCLUDED_com_ktxsoftware_sml_Exit */ 
