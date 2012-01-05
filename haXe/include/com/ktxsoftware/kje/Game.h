#ifndef INCLUDED_com_ktxsoftware_kje_Game
#define INCLUDED_com_ktxsoftware_kje_Game

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,ktxsoftware,kje,Game)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,KeyEvent)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Painter)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Scene)
namespace com{
namespace ktxsoftware{
namespace kje{


class Game_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Game_obj OBJ_;
		Game_obj();
		Void __construct(int width,int height);

	public:
		static hx::ObjectPtr< Game_obj > __new(int width,int height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Game_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Game"); }

		::com::ktxsoftware::kje::Scene scene; /* REM */ 
		int width; /* REM */ 
		int height; /* REM */ 
		virtual int getWidth( );
		Dynamic getWidth_dyn();

		virtual int getHeight( );
		Dynamic getHeight_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void render( ::com::ktxsoftware::kje::Painter painter);
		Dynamic render_dyn();

		virtual bool hasScores( );
		Dynamic hasScores_dyn();

		virtual Void key( ::com::ktxsoftware::kje::KeyEvent event);
		Dynamic key_dyn();

		virtual Void charKey( ::String c);
		Dynamic charKey_dyn();

		virtual Void mouseDown( int x,int y);
		Dynamic mouseDown_dyn();

		virtual Void mouseUp( int x,int y);
		Dynamic mouseUp_dyn();

		virtual Void mouseMove( int x,int y);
		Dynamic mouseMove_dyn();

		static ::com::ktxsoftware::kje::Game instance; /* REM */ 
		static ::com::ktxsoftware::kje::Game getInstance( );
		static Dynamic getInstance_dyn();

};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje

#endif /* INCLUDED_com_ktxsoftware_kje_Game */ 
