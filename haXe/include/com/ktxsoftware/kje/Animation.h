#ifndef INCLUDED_com_ktxsoftware_kje_Animation
#define INCLUDED_com_ktxsoftware_kje_Animation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,ktxsoftware,kje,Animation)
namespace com{
namespace ktxsoftware{
namespace kje{


class Animation_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Animation_obj OBJ_;
		Animation_obj();
		Void __construct(Array< int > indices,int speeddiv);

	public:
		static hx::ObjectPtr< Animation_obj > __new(Array< int > indices,int speeddiv);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Animation_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Animation"); }

		Array< int > indices; /* REM */ 
		int speeddiv; /* REM */ 
		int count; /* REM */ 
		int index; /* REM */ 
		virtual int get( );
		Dynamic get_dyn();

		virtual Void next( );
		Dynamic next_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		static ::com::ktxsoftware::kje::Animation create( int index);
		static Dynamic create_dyn();

		static ::com::ktxsoftware::kje::Animation createRange( int minindex,int maxindex,int speeddiv);
		static Dynamic createRange_dyn();

};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje

#endif /* INCLUDED_com_ktxsoftware_kje_Animation */ 
