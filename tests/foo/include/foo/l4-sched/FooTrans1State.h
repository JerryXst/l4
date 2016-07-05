#ifndef H06DC3D20_D9BF_4A15_A294_FFC92F7826E9
#define H06DC3D20_D9BF_4A15_A294_FFC92F7826E9

#include <foo/l3-trans/FooTrans1.h>
#include <foo/l3-trans/FooTrans1Context.h>
#include <foo/l4-sched/FooStateId.h>
#include <foo/l4-sched/FooTrans1State.h>
#include <state/GenericUnstableState.h>
#include <state/UnstableTransState.h>
#include <trans-dsl/sched/concept/InstanceId.h>
#include <trans-dsl/sched/concept/TransactionListener.h>

L4_NS_BEGIN


///////////////////////////////////////////////////////////////////////////////////////////////////
struct FooTrans1StaticStrategy
{
    static TransStrategy getStrategy(tsl::InstanceId, const ev::Event&)
    {
        return TS_UNKNOWN;
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////
struct FooTrans1RuntimeStrategy
{
    static TransStrategy getStrategy(tsl::InstanceId, com::Unknown*, const ev::Event&)
    {
        return TS_UNKNOWN;
    }
};


///////////////////////////////////////////////////////////////////////////////////////////////////
typedef GenericUnstableState
           < STATE_Trans1
           , STATE_Active
           , FooTrans1Trans
           , FooTrans1StaticStrategy
           , FooTrans1RuntimeStrategy> FooTrans1State;


L4_NS_END

#endif /* H06DC3D20_D9BF_4A15_A294_FFC92F7826E9 */
