#include <wlib/timer>
#include <Cosa/UART.hh>
#include <Cosa/Trace.hh>

static wlp::timer s_timer;

void setup() {
    wlp::timer::begin();
    uart.begin(9600);
    trace.begin(&uart);
    trace << "sizeof(time_t) => " << sizeof(time_t) << endl;
    s_timer.zero();
}

void loop() {
    auto ms = s_timer.ms();
    trace << "Time: " << ms << " ms" << endl;
    delay(250);
}
