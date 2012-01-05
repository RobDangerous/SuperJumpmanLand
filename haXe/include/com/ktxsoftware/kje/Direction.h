#ifndef INCLUDED_com_ktxsoftware_kje_Direction
#define INCLUDED_com_ktxsoftware_kje_Direction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,ktxsoftware,kje,Direction)
namespace com{
namespace ktxsoftware{
namespace kje{


class Direction_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Direction_obj OBJ_;

	public:
		Direction_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("com.ktxsoftware.kje.Direction"); }
		::String __ToString() const { return HX_CSTRING("Direction.") + tag; }

		static ::com::ktxsoftware::kje::Direction DOWN;
		static inline ::com::ktxsoftware::kje::Direction DOWN_dyn() { return DOWN; }
		static ::com::ktxsoftware::kje::Direction LEFT;
		static inline ::com::ktxsoftware::kje::Direction LEFT_dyn() { return LEFT; }
		static ::com::ktxsoftware::kje::Direction RIGHT;
		static inline ::com::ktxsoftware::kje::Direction RIGHT_dyn() { return RIGHT; }
		static ::com::ktxsoftware::kje::Direction UP;
		static inline ::com::ktxsoftware::kje::Direction UP_dyn() { return UP; }
};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje

#endif /* INCLUDED_com_ktxsoftware_kje_Direction */ 
