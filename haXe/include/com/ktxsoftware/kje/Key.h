#ifndef INCLUDED_com_ktxsoftware_kje_Key
#define INCLUDED_com_ktxsoftware_kje_Key

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,ktxsoftware,kje,Key)
namespace com{
namespace ktxsoftware{
namespace kje{


class Key_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Key_obj OBJ_;

	public:
		Key_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("com.ktxsoftware.kje.Key"); }
		::String __ToString() const { return HX_CSTRING("Key.") + tag; }

		static ::com::ktxsoftware::kje::Key BACKSPACE;
		static inline ::com::ktxsoftware::kje::Key BACKSPACE_dyn() { return BACKSPACE; }
		static ::com::ktxsoftware::kje::Key BUTTON_1;
		static inline ::com::ktxsoftware::kje::Key BUTTON_1_dyn() { return BUTTON_1; }
		static ::com::ktxsoftware::kje::Key BUTTON_2;
		static inline ::com::ktxsoftware::kje::Key BUTTON_2_dyn() { return BUTTON_2; }
		static ::com::ktxsoftware::kje::Key DOWN;
		static inline ::com::ktxsoftware::kje::Key DOWN_dyn() { return DOWN; }
		static ::com::ktxsoftware::kje::Key ENTER;
		static inline ::com::ktxsoftware::kje::Key ENTER_dyn() { return ENTER; }
		static ::com::ktxsoftware::kje::Key LEFT;
		static inline ::com::ktxsoftware::kje::Key LEFT_dyn() { return LEFT; }
		static ::com::ktxsoftware::kje::Key RIGHT;
		static inline ::com::ktxsoftware::kje::Key RIGHT_dyn() { return RIGHT; }
		static ::com::ktxsoftware::kje::Key UP;
		static inline ::com::ktxsoftware::kje::Key UP_dyn() { return UP; }
};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje

#endif /* INCLUDED_com_ktxsoftware_kje_Key */ 
