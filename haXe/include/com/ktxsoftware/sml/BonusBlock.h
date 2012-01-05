#ifndef INCLUDED_com_ktxsoftware_sml_BonusBlock
#define INCLUDED_com_ktxsoftware_sml_BonusBlock

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/ktxsoftware/kje/Sprite.h>
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Image)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Sound)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Sprite)
HX_DECLARE_CLASS3(com,ktxsoftware,sml,BonusBlock)
namespace com{
namespace ktxsoftware{
namespace sml{


class BonusBlock_obj : public ::com::ktxsoftware::kje::Sprite_obj{
	public:
		typedef ::com::ktxsoftware::kje::Sprite_obj super;
		typedef BonusBlock_obj OBJ_;
		BonusBlock_obj();
		Void __construct(double x,double y);

	public:
		static hx::ObjectPtr< BonusBlock_obj > __new(double x,double y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BonusBlock_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("BonusBlock"); }

		int downcount; /* REM */ 
		bool washit; /* REM */ 
		virtual Void update( );
		Dynamic update_dyn();

		virtual Void hit( ::com::ktxsoftware::kje::Sprite sprite);
		Dynamic hit_dyn();

		static ::com::ktxsoftware::kje::Image image; /* REM */ 
		static ::com::ktxsoftware::kje::Sound sound; /* REM */ 
		static bool onehit; /* REM */ 
		static bool initialized; /* REM */ 
		static Void init( );
		static Dynamic init_dyn();

};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace sml

#endif /* INCLUDED_com_ktxsoftware_sml_BonusBlock */ 
