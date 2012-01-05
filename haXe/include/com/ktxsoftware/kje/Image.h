#ifndef INCLUDED_com_ktxsoftware_kje_Image
#define INCLUDED_com_ktxsoftware_kje_Image

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,ktxsoftware,kje,Image)
namespace com{
namespace ktxsoftware{
namespace kje{


class Image_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Image_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual int getWidth( )=0;
		Dynamic getWidth_dyn();
		virtual int getHeight( )=0;
		Dynamic getHeight_dyn();
		virtual bool isAlpha( int x,int y)=0;
		Dynamic isAlpha_dyn();
};

#define DELEGATE_com_ktxsoftware_kje_Image \
virtual int getWidth( ) { return mDelegate->getWidth();}  \
virtual Dynamic getWidth_dyn() { return mDelegate->getWidth_dyn();}  \
virtual int getHeight( ) { return mDelegate->getHeight();}  \
virtual Dynamic getHeight_dyn() { return mDelegate->getHeight_dyn();}  \
virtual bool isAlpha( int x,int y) { return mDelegate->isAlpha(x,y);}  \
virtual Dynamic isAlpha_dyn() { return mDelegate->isAlpha_dyn();}  \


template<typename IMPL>
class Image_delegate_ : public Image_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Image_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		DELEGATE_com_ktxsoftware_kje_Image
};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje

#endif /* INCLUDED_com_ktxsoftware_kje_Image */ 
