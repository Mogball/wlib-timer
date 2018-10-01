#ifndef __WLIB_TIMER_POSIX_H__
#define __WLIB_TIMER_POSIX_H__

#include <wlib/emb/Timer.h>
#include <chrono>

using namespace wlp;
using namespace std::chrono;

time_t timer::epoch() {
    auto now = high_resolution_clock::now().time_since_epoch();
    auto dur = duration_cast<microseconds>(now);
    return dur.count();
}

void timer::begin() {}
void timer::end() {}

#endif
