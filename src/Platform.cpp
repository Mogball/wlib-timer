#if defined(WIO_PLATFORM_AVR)
    #if defined(WIO_FRAMEWORK_COSA)
        #include "TimerCosa.h"
    #else
        #error "wlib-timer supports only Cosa for AVR"
    #endif
#elif defined(WIO_PLATFORM_NATIVE)
    #include "TimerPOSIX.h"
#else
    #error "wlib-timer supports only Native and AVR"
#endif
