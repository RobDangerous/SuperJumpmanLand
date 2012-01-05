#ifndef INCLUDED_com_ktxsoftware_kje_Music
#define INCLUDED_com_ktxsoftware_kje_Music

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,ktxsoftware,kje,Music)
namespace com{
namespace ktxsoftware{
namespace kje{


class Music_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Music_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void start( )=0;
		Dynamic start_dyn();
		virtual Void stop( )=0;
		Dynamic stop_dyn();
		virtual Void update( )=0;
		Dynamic update_dyn();
};

#define DELEGATE_com_ktxsoftware_kje_Music \
virtual Void start( ) { return mDelegate->start();}  \
virtual Dynamic start_dyn() { return mDelegate->start_dyn();}  \
virtual Void stop( ) { return mDelegate->stop();}  \
virtual Dynamic stop_dyn() { return mDelegate->stop_dyn();}  \
virtual Void update( ) { return mDelegate->update();}  \
virtual Dynamic update_dyn() { return mDelegate->update_dyn();}  \


template<typename IMPL>
class Music_delegate_ : public Music_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Music_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		DELEGATE_com_ktxsoftware_kje_Music
};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje

#endif /* INCLUDED_com_ktxsoftware_kje_Music */ 
