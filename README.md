# wlib-timer

System-independent basic timer library. Defines a `timer`
type that is used to get time since a base point.

## Usage

```c++
static wlp::timer timer;

void setup() {
    wlp::timer::begin();
    timer.zero(); // base point
}

void loop() {
    timer.us() // microseconds
    timer.ms() // milliseconds
    timer.sec() // seconds (float)
}
```

## Caveats

On AVR systems `sizeof(time_t) => 4` which means that the max
time value is about 71 hours. The function `begin` must be
called on some platforms.
