/*****************************************************************************
 * $Source$
 * $Author$
 * $Date$
 * $Revision$
 *****************************************************************************/

/**
 * \addtogroup CkLdb
*/
/*@{*/

#ifndef _COMMLB_H_
#define _COMMLB_H_

#include "CentralLB.h"
#include "CommLB.decl.h"

#include "CommLBHeap.h"
#define CUT_OFF_FACTOR 1.200

struct graph{
  int id;
  int data;
  int nmsg;
  struct graph * next;
};

void CreateCommLB();

class CommLB : public CentralLB {
public:
  int nobj,npe;
  double ** alloc_array;
  graph * object_graph;
  CommLB();
  CommLB(CkMigrateMessage *m);
private:
  CentralLB::LDStats* stats;
  CmiBool QueryBalanceNow(int step);
  LBMigrateMsg* Strategy(CentralLB::LDStats* stats, int count);
  void alloc(int pe, int id, double load);
  double compute_com(int id,int pe); 
  void add_graph(int x, int y, int data, int nmsg);
  void update(int id, int pe);
};

#endif



/*@}*/



