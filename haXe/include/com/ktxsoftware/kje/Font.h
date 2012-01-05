#ifndef INCLUDED_com_ktxsoftware_kje_Font
#define INCLUDED_com_ktxsoftware_kje_Font

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,ktxsoftware,kje,Font)
namespace com{
namespace ktxsoftware{
namespace kje{


class Font_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Font_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual double getHeight( )=0;
		Dynamic getHeight_dyn();
		virtual double charWidth( ::String ch)=0;
		Dynamic charWidth_dyn();
		virtual double charsWidth( ::String ch,int offset,int length)=0;
		Dynamic charsWidth_dyn();
		virtual double stringWidth( ::String str)=0;
		Dynamic stringWidth_dyn();
		virtual double getBaselinePosition( )=0;
		Dynamic getBaselinePosition_dyn();
};

#define DELEGATE_com_ktxsoftware_kje_Font \
virtual double getHeight( ) { return mDelegate->getHeight();}  \
virtual Dynamic getHeight_dyn() { return mDelegate->getHeight_dyn();}  \
virtual double charWidth( ::String ch) { return mDelegate->charWidth(ch);}  \
virtual Dynamic charWidth_dyn() { return mDelegate->charWidth_dyn();}  \
virtual double charsWidth( ::String ch,int offset,int length) { return mDelegate->charsWidth(ch,offset,length);}  \
virtual Dynamic charsWidth_dyn() { return mDelegate->charsWidth_dyn();}  \
virtual double stringWidth( ::String str) { return mDelegate->stringWidth(str);}  \
virtual Dynamic stringWidth_dyn() { return mDelegate->stringWidth_dyn();}  \
virtual double getBaselinePosition( ) { return mDelegate->getBaselinePosition();}  \
virtual Dynamic getBaselinePosition_dyn() { return mDelegate->getBaselinePosition_dyn();}  \


template<typename IMPL>
class Font_delegate_ : public Font_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Font_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		DELEGATE_com_ktxsoftware_kje_Font
};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje

#endif /* INCLUDED_com_ktxsoftware_kje_Font */ 
