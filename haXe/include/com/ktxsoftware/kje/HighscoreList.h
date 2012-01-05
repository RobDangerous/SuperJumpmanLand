#ifndef INCLUDED_com_ktxsoftware_kje_HighscoreList
#define INCLUDED_com_ktxsoftware_kje_HighscoreList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,ktxsoftware,kje,HighscoreList)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Score)
namespace com{
namespace ktxsoftware{
namespace kje{


class HighscoreList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HighscoreList_obj OBJ_;
		HighscoreList_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< HighscoreList_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~HighscoreList_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("HighscoreList"); }

		Array< ::com::ktxsoftware::kje::Score > scores; /* REM */ 
		virtual Void init( Array< ::com::ktxsoftware::kje::Score > scores);
		Dynamic init_dyn();

		virtual Array< ::com::ktxsoftware::kje::Score > getScores( );
		Dynamic getScores_dyn();

		virtual Void addScore( ::String name,int score);
		Dynamic addScore_dyn();

		static ::com::ktxsoftware::kje::HighscoreList instance; /* REM */ 
		static ::com::ktxsoftware::kje::HighscoreList getInstance( );
		static Dynamic getInstance_dyn();

};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje

#endif /* INCLUDED_com_ktxsoftware_kje_HighscoreList */ 
