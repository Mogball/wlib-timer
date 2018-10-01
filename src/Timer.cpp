#include <wlib/emb/Timer.h>

using namespace wlp;

void timer::zero() {
    m_base = timer::epoch();
}

time_t timer::us() const {
    return timer::epoch() - m_base;
}

time_t timer::ms() const {
    return us() / 1000;
}

float timer::sec() const {
    return us() / 1000000.0f;
}
