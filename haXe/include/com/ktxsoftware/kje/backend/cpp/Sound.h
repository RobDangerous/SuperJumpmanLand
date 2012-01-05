#ifndef INCLUDED_com_ktxsoftware_kje_backend_cpp_Sound
#define INCLUDED_com_ktxsoftware_kje_backend_cpp_Sound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif
#include <Kt/stdafx.h>
#include <Kt/Sound/Sound.h>
#include <com/ktxsoftware/kje/Sound.h>
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Sound)
HX_DECLARE_CLASS5(com,ktxsoftware,kje,backend,cpp,Sound)
namespace com{
namespace ktxsoftware{
namespace kje{
namespace backend{
namespace cpp{


class Sound_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Sound_obj OBJ_;
		Sound_obj();
		Void __construct(::String filename);

	public:
		static hx::ObjectPtr< Sound_obj > __new(::String filename);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Sound_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		inline operator ::com::ktxsoftware::kje::Sound_obj *()
			{ return new ::com::ktxsoftware::kje::Sound_delegate_< Sound_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("Sound"); }

		virtual Void play( );
		Dynamic play_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();
		Kt::Sound::SoundHandle* sound;
};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje
} // end namespace backend
} // end namespace cpp

#endif /* INCLUDED_com_ktxsoftware_kje_backend_cpp_Sound */ 
