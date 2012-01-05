#ifndef INCLUDED_com_ktxsoftware_sml_Coin
#define INCLUDED_com_ktxsoftware_sml_Coin

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/ktxsoftware/kje/Sprite.h>
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Image)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Sound)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Sprite)
HX_DECLARE_CLASS3(com,ktxsoftware,sml,Coin)
namespace com{
namespace ktxsoftware{
namespace sml{


class Coin_obj : public ::com::ktxsoftware::kje::Sprite_obj{
	public:
		typedef ::com::ktxsoftware::kje::Sprite_obj super;
		typedef Coin_obj OBJ_;
		Coin_obj();
		Void __construct(int x,int y);

	public:
		static hx::ObjectPtr< Coin_obj > __new(int x,int y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Coin_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Coin"); }

		virtual Void hit( ::com::ktxsoftware::kje::Sprite sprite);
		Dynamic hit_dyn();

		static ::com::ktxsoftware::kje::Image image; /* REM */ 
		static ::com::ktxsoftware::kje::Sound sound; /* REM */ 
		static bool initialized; /* REM */ 
		static Void init( );
		static Dynamic init_dyn();

};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace sml

#endif /* INCLUDED_com_ktxsoftware_sml_Coin */ 
