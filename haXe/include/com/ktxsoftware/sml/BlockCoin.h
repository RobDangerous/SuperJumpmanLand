#ifndef INCLUDED_com_ktxsoftware_sml_BlockCoin
#define INCLUDED_com_ktxsoftware_sml_BlockCoin

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/ktxsoftware/kje/Sprite.h>
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Image)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Sprite)
HX_DECLARE_CLASS3(com,ktxsoftware,sml,BlockCoin)
namespace com{
namespace ktxsoftware{
namespace sml{


class BlockCoin_obj : public ::com::ktxsoftware::kje::Sprite_obj{
	public:
		typedef ::com::ktxsoftware::kje::Sprite_obj super;
		typedef BlockCoin_obj OBJ_;
		BlockCoin_obj();
		Void __construct(double x,double y);

	public:
		static hx::ObjectPtr< BlockCoin_obj > __new(double x,double y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BlockCoin_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("BlockCoin"); }

		int count; /* REM */ 
		virtual Void update( );
		Dynamic update_dyn();

		static ::com::ktxsoftware::kje::Image image; /* REM */ 
		static bool initialized; /* REM */ 
		static Void init( );
		static Dynamic init_dyn();

};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace sml

#endif /* INCLUDED_com_ktxsoftware_sml_BlockCoin */ 
