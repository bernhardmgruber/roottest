//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef Trk__RecVertex_p1_h
#define Trk__RecVertex_p1_h
namespace Trk {
class RecVertex_p1;
} // end of namespace.

#include "TPObjRef.h"

namespace Trk {
class RecVertex_p1 {

public:
// Nested classes declaration.

public:
// Data Members.
   TPObjRef    vtx;         //
   TPObjRef    m_positionError;    //
   TPObjRef    m_fitQuality;       //

   RecVertex_p1();
   RecVertex_p1(const RecVertex_p1 & );
   virtual ~RecVertex_p1();

};
} // namespace
#endif
