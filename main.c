#include <stdio.h>
#include <unistd.h>

#include "config.h"

int main() {
    int current_intervals = 0;
    puts("-Started Pomodoro-\n");

work:
    puts("Time to work!\n");
    sleep(work_minutes * 60);

quick_break:
    puts("Time to break!\n");
    sleep(break_minutes * 60);

    current_intervals++;
    if (current_intervals != intervals) {
        goto work;
    }

long_break:
    puts("Pomodoro completed!\n"
         "It is time for a longer break.\n")
    sleep(long_break_minutes * 60);

    current_intervals = 0;
    goto work;
}
