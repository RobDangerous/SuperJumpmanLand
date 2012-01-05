#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Game)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Painter)
HX_DECLARE_CLASS5(com,ktxsoftware,kje,backend,cpp,Painter)


class Main_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Main_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Main"); }

		static ::com::ktxsoftware::kje::Game game; /* REM */ 
		static ::com::ktxsoftware::kje::backend::cpp::Painter painter; /* REM */ 
		static Void main( );
		static Dynamic main_dyn();

		static Void start( );
		static Dynamic start_dyn();

		static Void frame( );
		static Dynamic frame_dyn();

		static Void pushUp( );
		static Dynamic pushUp_dyn();

		static Void pushDown( );
		static Dynamic pushDown_dyn();

		static Void pushLeft( );
		static Dynamic pushLeft_dyn();

		static Void pushRight( );
		static Dynamic pushRight_dyn();

		static Void releaseUp( );
		static Dynamic releaseUp_dyn();

		static Void releaseDown( );
		static Dynamic releaseDown_dyn();

		static Void releaseLeft( );
		static Dynamic releaseLeft_dyn();

		static Void releaseRight( );
		static Dynamic releaseRight_dyn();

};


#endif /* INCLUDED_Main */ 
