#ifndef INCLUDED_com_ktxsoftware_sml_Gumba
#define INCLUDED_com_ktxsoftware_sml_Gumba

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/ktxsoftware/sml/Enemy.h>
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Direction)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Image)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Sprite)
HX_DECLARE_CLASS3(com,ktxsoftware,sml,Enemy)
HX_DECLARE_CLASS3(com,ktxsoftware,sml,Gumba)
namespace com{
namespace ktxsoftware{
namespace sml{


class Gumba_obj : public ::com::ktxsoftware::sml::Enemy_obj{
	public:
		typedef ::com::ktxsoftware::sml::Enemy_obj super;
		typedef Gumba_obj OBJ_;
		Gumba_obj();
		Void __construct(int x,int y);

	public:
		static hx::ObjectPtr< Gumba_obj > __new(int x,int y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Gumba_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Gumba"); }

		int killcount; /* REM */ 
		virtual Void kill( );
		Dynamic kill_dyn();

		virtual Void update( );
		Dynamic update_dyn();

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

#endif /* INCLUDED_com_ktxsoftware_sml_Gumba */ 
