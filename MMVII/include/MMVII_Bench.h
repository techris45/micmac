#ifndef  _MMVII_Bench_H_
#define  _MMVII_Bench_H_

namespace MMVII
{


/** \file MMVII_Bench.h
    \brief Declare function that will be called for bench

    When MMVII will grow, most bench function will be done in file/folde
   close to the functionality. So it will be necessary to declare these function.

*/


void Bench_0000_Ptxd();  ///< Basic Ptxd
void Bench_0000_SysDepString(); ///< String split (dir, path, file ...)
void Bench_0000_Memory(); ///< Bench on memory integrity
void Bench_0000_Param();  ///< Bench on param line processing (elementary)
// void cAppli_MMVII_Bench::Bench_0000_String(); => Bench on string-split
void BenchSerialization(const std::string & aDirOut,const std::string & aDirIn); ///< Bench on seriaization function



void BenchGlob();      ///< All Bench


void BenchSet(const std::string & aDir); ///< Bench on cInterfSet (set "en extension")
void BenchSelector(const std::string & aDir); ///< Bench on selecto, (set "en comprehension")
void BenchEditSet(); ///< Bench on commands : EditSet  (to come EditCple)




};

#endif  //  _MMVII_Bench_H_