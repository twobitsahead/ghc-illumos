/* ----------------------------------------------------------------------------
 * 
 * (c) The GHC Team, 1998-2005
 *
 * Closure Type Constants: out here because the native code generator
 * needs to get at them.
 *
 * -------------------------------------------------------------------------- */

#ifndef RTS_STORAGE_CLOSURETYPES_H
#define RTS_STORAGE_CLOSURETYPES_H

/* 
 * WARNING WARNING WARNING
 *
 * If you add or delete any closure types, don't forget to update
 * the closure flags table in rts/ClosureFlags.c.
 */

/* Object tag 0 raises an internal error */
#define INVALID_OBJECT          0
#define CONSTR                  1
#define	CONSTR_1_0		2
#define	CONSTR_0_1		3
#define	CONSTR_2_0		4
#define	CONSTR_1_1		5
#define	CONSTR_0_2		6
#define CONSTR_STATIC	        7
#define CONSTR_NOCAF_STATIC     8
#define FUN		        9 
#define	FUN_1_0		  	10
#define	FUN_0_1		  	11
#define	FUN_2_0		  	12
#define	FUN_1_1		  	13
#define	FUN_0_2			14
#define FUN_STATIC	        15
#define THUNK		        16
#define	THUNK_1_0	  	17
#define	THUNK_0_1	  	18
#define	THUNK_2_0	  	19
#define	THUNK_1_1	  	20
#define	THUNK_0_2		21
#define THUNK_STATIC	        22
#define THUNK_SELECTOR	        23
#define BCO		        24
#define AP		        25
#define PAP			26
#define AP_STACK                27
#define IND		        28
#define IND_PERM	        29
#define IND_STATIC	        30
#define RET_BCO                 31
#define RET_SMALL	        32
#define RET_BIG		        33
#define RET_DYN		        34
#define RET_FUN                 35
#define UPDATE_FRAME	        36
#define CATCH_FRAME	        37
#define STOP_FRAME	        38
#define BLOCKING_QUEUE		39
#define BLACKHOLE	        40
#define MVAR_CLEAN	        41
#define MVAR_DIRTY	        42
#define ARR_WORDS	        43
#define MUT_ARR_PTRS_CLEAN      44
#define MUT_ARR_PTRS_DIRTY      45
#define MUT_ARR_PTRS_FROZEN0    46
#define MUT_ARR_PTRS_FROZEN     47
#define MUT_VAR_CLEAN	        48
#define MUT_VAR_DIRTY	        49
#define WEAK		        50
#define PRIM		        51
#define MUT_PRIM                52
#define TSO		        53
#define TREC_CHUNK              54
#define ATOMICALLY_FRAME        55
#define CATCH_RETRY_FRAME       56
#define CATCH_STM_FRAME         57
#define WHITEHOLE               58
#define N_CLOSURE_TYPES         59

#endif /* RTS_STORAGE_CLOSURETYPES_H */
