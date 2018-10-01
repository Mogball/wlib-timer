#include <wlib/timer>
#include <iostream>

void busy_wait(time_t ms) {
    static wlp::timer wait_timer;
    wait_timer.zero();
    while (wait_timer.ms() < ms) {}
}

void print_time(time_t ms) {
    std::cout << "Time: " << ms << " ms" << std::endl;
}

int main() {
    std::cout << "sizeof(time_t) => " << sizeof(time_t) << std::endl;
    wlp::timer timer;
    timer.zero();

    print_time(timer.ms());
    busy_wait(100);
    print_time(timer.ms());
}
