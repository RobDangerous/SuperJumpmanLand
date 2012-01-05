#ifndef INCLUDED_com_ktxsoftware_kje_Score
#define INCLUDED_com_ktxsoftware_kje_Score

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,ktxsoftware,kje,Score)
namespace com{
namespace ktxsoftware{
namespace kje{


class Score_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Score_obj OBJ_;
		Score_obj();
		Void __construct(::String name,int score);

	public:
		static hx::ObjectPtr< Score_obj > __new(::String name,int score);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Score_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Score"); }

		::String name; /* REM */ 
		int score; /* REM */ 
		virtual ::String getName( );
		Dynamic getName_dyn();

		virtual int getScore( );
		Dynamic getScore_dyn();

		virtual Void increase( int amount);
		Dynamic increase_dyn();

};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje

#endif /* INCLUDED_com_ktxsoftware_kje_Score */ 
