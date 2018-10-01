#ifndef __WLIB_TIMER_H__
#define __WLIB_TIMER_H__

#ifdef WIO_PLATFORM_AVR
#include <stdint.h>
typedef uint32_t time_t;
#else
#include <time.h>
#endif

namespace wlp {

    class timer {
    public:
        static time_t epoch();
        static void begin();
        static void end();

        void zero();
        time_t us() const;
        time_t ms() const;
        float sec() const;

    private:
        time_t m_base;
    };

}

#endif
