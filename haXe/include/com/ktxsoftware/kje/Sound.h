#ifndef INCLUDED_com_ktxsoftware_kje_Sound
#define INCLUDED_com_ktxsoftware_kje_Sound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,ktxsoftware,kje,Sound)
namespace com{
namespace ktxsoftware{
namespace kje{


class Sound_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Sound_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void play( )=0;
		Dynamic play_dyn();
		virtual Void stop( )=0;
		Dynamic stop_dyn();
};

#define DELEGATE_com_ktxsoftware_kje_Sound \
virtual Void play( ) { return mDelegate->play();}  \
virtual Dynamic play_dyn() { return mDelegate->play_dyn();}  \
virtual Void stop( ) { return mDelegate->stop();}  \
virtual Dynamic stop_dyn() { return mDelegate->stop_dyn();}  \


template<typename IMPL>
class Sound_delegate_ : public Sound_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Sound_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		DELEGATE_com_ktxsoftware_kje_Sound
};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje

#endif /* INCLUDED_com_ktxsoftware_kje_Sound */ 
