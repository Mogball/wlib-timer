#ifndef __WLIB_TIMER_COSA_H__
#define __WLIB_TIMER_COSA_H__

#include <wlib/emb/Timer.h>
#include <Cosa/RTT.hh>

using namespace wlp;

time_t timer::epoch() {
    return RTT::micros();
}

void timer::begin() {
    RTT::begin();
}

void timer::end() {
    RTT::begin();
}

#endif
