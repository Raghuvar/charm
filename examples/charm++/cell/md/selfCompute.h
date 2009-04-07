#ifndef __SELF_COMPUTE_H__
#define __SELF_COMPUTE_H__


#include "md_config.h"
#include "selfCompute.decl.h"
#include "patch.h"


class SelfCompute : public CBase_SelfCompute {

  // Declare CkIndex_SelfCompute as a friend so accelerated entry methods can access
  //   the member variables of the object they execute on
  friend class CkIndex_SelfCompute;

  private:

    /// Member Variables ///
    int numParticles;
    float* particleX;
    float* particleY;
    float* particleZ;
    float* particleQ;
    float* forceX;
    float* forceY;
    float* forceZ;

    CProxy_ProxyPatch proxyPatchProxy;


    // DMK - DEBUG
    unsigned int localFlopCount;


  public:

    /// Constructor(s) \ Destructor ///
    SelfCompute();
    SelfCompute(CkMigrateMessage* msg);
    ~SelfCompute();

    /// Entry Methods ///
    void init(int numParticlesPerPatch);
    void patchData(int numParticles, float* particleX, float* particleY, float* particleZ, float* particleQ, CProxy_ProxyPatch proxyPatchProxy);
    void patchData(int numParticles, float* particleX, float* particleY, float* particleZ, float* particleQ);
    void doCalc_callback();

};


#endif //__SELF_COMPUTE_H__
