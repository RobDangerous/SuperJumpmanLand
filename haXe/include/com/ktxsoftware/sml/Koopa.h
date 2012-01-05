#ifndef INCLUDED_com_ktxsoftware_sml_Koopa
#define INCLUDED_com_ktxsoftware_sml_Koopa

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/ktxsoftware/sml/Enemy.h>
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Animation)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Direction)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Image)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Sprite)
HX_DECLARE_CLASS3(com,ktxsoftware,sml,Enemy)
HX_DECLARE_CLASS3(com,ktxsoftware,sml,Koopa)
namespace com{
namespace ktxsoftware{
namespace sml{


class Koopa_obj : public ::com::ktxsoftware::sml::Enemy_obj{
	public:
		typedef ::com::ktxsoftware::sml::Enemy_obj super;
		typedef Koopa_obj OBJ_;
		Koopa_obj();
		Void __construct(int x,int y);

	public:
		static hx::ObjectPtr< Koopa_obj > __new(int x,int y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Koopa_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Koopa"); }

		int killcount; /* REM */ 
		::com::ktxsoftware::kje::Animation leftAnim; /* REM */ 
		::com::ktxsoftware::kje::Animation rightAnim; /* REM */ 
		virtual Void update( );
		Dynamic update_dyn();

		virtual Void kill( );
		Dynamic kill_dyn();

		virtual Void hit( ::com::ktxsoftware::kje::Sprite sprite);
		Dynamic hit_dyn();

		virtual Void hitFrom( ::com::ktxsoftware::kje::Direction dir);
		Dynamic hitFrom_dyn();

		static ::com::ktxsoftware::kje::Image image; /* REM */ 
		static bool initialized; /* REM */ 
		static Void init( );
		static Dynamic init_dyn();

};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace sml

#endif /* INCLUDED_com_ktxsoftware_sml_Koopa */ 
