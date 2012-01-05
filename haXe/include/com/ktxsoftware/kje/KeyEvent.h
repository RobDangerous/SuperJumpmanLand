#ifndef INCLUDED_com_ktxsoftware_kje_KeyEvent
#define INCLUDED_com_ktxsoftware_kje_KeyEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,ktxsoftware,kje,Key)
HX_DECLARE_CLASS3(com,ktxsoftware,kje,KeyEvent)
namespace com{
namespace ktxsoftware{
namespace kje{


class KeyEvent_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef KeyEvent_obj OBJ_;
		KeyEvent_obj();
		Void __construct(::com::ktxsoftware::kje::Key key,bool down);

	public:
		static hx::ObjectPtr< KeyEvent_obj > __new(::com::ktxsoftware::kje::Key key,bool down);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~KeyEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("KeyEvent"); }

		::com::ktxsoftware::kje::Key key; /* REM */ 
		bool down; /* REM */ 
};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje

#endif /* INCLUDED_com_ktxsoftware_kje_KeyEvent */ 
