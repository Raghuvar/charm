
#define CMK_NET_VERSION					   1

#define CMK_CCS_AVAILABLE                                  1

#define CMK_CMIPRINTF_IS_A_BUILTIN                         1
#define CMK_CMIPRINTF_IS_JUST_PRINTF                       0

#define CMK_CMIDELIVERS_USE_COMMON_CODE                    1
#define CMK_CMIDELIVERS_USE_SPECIAL_CODE                   0

#define CMK_HANDLE_SIGUSR                                  1

#define CMK_MULTICAST_GROUP_TYPE                struct { unsigned pe, id; }
#define CMK_MULTICAST_DEF_USE_COMMON_CODE                  1
#define CMK_MULTICAST_LIST_USE_COMMON_CODE                 1
#define CMK_MULTICAST_GROUP_USE_COMMON_CODE                1

/* the first 5 fields of the header are defined in machine-dgram.c
   and are used for the udp retransmission protocol implementation.
   Parameters stratid and root are for the communication library.
   Stratid is the stratgy id and root is used in the broadcast.
   - Sameer 10/06/04 
*/
#define CMK_MSG_HEADER_BASIC  {CmiUInt2 d0,d1,d2,d3,d4,d5,hdl,stratid,root,padding1,padding2,padding3;}
#define CMK_MSG_HEADER_EXT    {CmiUInt2 d0,d1,d2,d3,d4,d5,hdl,xhdl,info,stratid,root,padding1;}
#define CMK_MSG_HEADER_BLUEGENE    { CmiUInt2 d0,d1,d2,d3,d4,d5,hdl,xhdl,info,stratid,root; CmiUInt4 padding; int nd, n; double rt; CmiInt2 tID; CmiUInt2 hID; char t; int msgID; int srcPe;}

#define CMK_REDUCTION_USES_COMMON_CODE                     1
#define CMK_REDUCTION_USES_SPECIAL_CODE                    0

#define CMK_SPANTREE_MAXSPAN                               4
#define CMK_SPANTREE_USE_COMMON_CODE                       1
#define CMK_SPANTREE_USE_SPECIAL_CODE                      0

#define CMK_VECTOR_SEND_USES_COMMON_CODE                   1
#define CMK_VECTOR_SEND_USES_SPECIAL_CODE                  0

#define CMK_IMMEDIATE_MSG				   1

#define CMK_PERSISTENT_COMM				   0

#define CMK_OBJECT_QUEUE_AVAILABLE		   	   0

#define CMK_MACHINE_PROGRESS_DEFINED                       1
