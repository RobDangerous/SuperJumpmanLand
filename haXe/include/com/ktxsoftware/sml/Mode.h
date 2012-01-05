#ifndef INCLUDED_com_ktxsoftware_sml_Mode
#define INCLUDED_com_ktxsoftware_sml_Mode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,ktxsoftware,sml,Mode)
namespace com{
namespace ktxsoftware{
namespace sml{


class Mode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Mode_obj OBJ_;

	public:
		Mode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("com.ktxsoftware.sml.Mode"); }
		::String __ToString() const { return HX_CSTRING("Mode.") + tag; }

		static ::com::ktxsoftware::sml::Mode EnterHighscore;
		static inline ::com::ktxsoftware::sml::Mode EnterHighscore_dyn() { return EnterHighscore; }
		static ::com::ktxsoftware::sml::Mode Game;
		static inline ::com::ktxsoftware::sml::Mode Game_dyn() { return Game; }
		static ::com::ktxsoftware::sml::Mode Highscore;
		static inline ::com::ktxsoftware::sml::Mode Highscore_dyn() { return Highscore; }
};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace sml

#endif /* INCLUDED_com_ktxsoftware_sml_Mode */ 
