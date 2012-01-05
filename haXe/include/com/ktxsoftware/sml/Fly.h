#ifndef INCLUDED_com_ktxsoftware_sml_Fly
#define INCLUDED_com_ktxsoftware_sml_Fly

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/ktxsoftware/sml/Enemy.h>
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Animation)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Direction)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Image)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Sprite)
HX_DECLARE_CLASS3(com,ktxsoftware,sml,Enemy)
HX_DECLARE_CLASS3(com,ktxsoftware,sml,Fly)
namespace com{
namespace ktxsoftware{
namespace sml{


class Fly_obj : public ::com::ktxsoftware::sml::Enemy_obj{
	public:
		typedef ::com::ktxsoftware::sml::Enemy_obj super;
		typedef Fly_obj OBJ_;
		Fly_obj();
		Void __construct(int x,int y);

	public:
		static hx::ObjectPtr< Fly_obj > __new(int x,int y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Fly_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Fly"); }

		int killcount; /* REM */ 
		int count; /* REM */ 
		bool jumping; /* REM */ 
		bool left; /* REM */ 
		virtual Void update( );
		Dynamic update_dyn();

		virtual Void kill( );
		Dynamic kill_dyn();

		virtual Void hitFrom( ::com::ktxsoftware::kje::Direction dir);
		Dynamic hitFrom_dyn();

		static ::com::ktxsoftware::kje::Image image; /* REM */ 
		static ::com::ktxsoftware::kje::Animation leftAnim; /* REM */ 
		static ::com::ktxsoftware::kje::Animation rightAnim; /* REM */ 
		static bool initialized; /* REM */ 
		static Void init( );
		static Dynamic init_dyn();

};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace sml

#endif /* INCLUDED_com_ktxsoftware_sml_Fly */ 
