// File Automatically generated by eLiSe
#include "StdAfx.h"


class cGen2DBundleAttach_Deg0: public cElCompiledFonc
{
   public :

      cGen2DBundleAttach_Deg0();
      void ComputeVal();
      void ComputeValDeriv();
      void ComputeValDerivHessian();
      double * AdrVarLocFromString(const std::string &);
      void SetFixedV_x(double);
      void SetFixedV_y(double);


      static cAutoAddEntry  mTheAuto;
      static cElCompiledFonc *  Alloc();
   private :

      double mLocFixedV_x;
      double mLocFixedV_y;
};
