#ifndef INCLUDED_com_ktxsoftware_sml_Enemy
#define INCLUDED_com_ktxsoftware_sml_Enemy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/ktxsoftware/kje/Sprite.h>
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Image)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Sprite)
HX_DECLARE_CLASS3(com,ktxsoftware,sml,Enemy)
namespace com{
namespace ktxsoftware{
namespace sml{


class Enemy_obj : public ::com::ktxsoftware::kje::Sprite_obj{
	public:
		typedef ::com::ktxsoftware::kje::Sprite_obj super;
		typedef Enemy_obj OBJ_;
		Enemy_obj();
		Void __construct(::com::ktxsoftware::kje::Image image,int width,int height);

	public:
		static hx::ObjectPtr< Enemy_obj > __new(::com::ktxsoftware::kje::Image image,int width,int height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Enemy_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Enemy"); }

		bool killed; /* REM */ 
		virtual Void kill( );
		Dynamic kill_dyn();

		virtual bool isKilled( );
		Dynamic isKilled_dyn();

		virtual Void hit( ::com::ktxsoftware::kje::Sprite sprite);
		Dynamic hit_dyn();

};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace sml

#endif /* INCLUDED_com_ktxsoftware_sml_Enemy */ 
