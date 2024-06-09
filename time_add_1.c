#include <stdio.h>

// Define a struct to represent time
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to sum two time values
struct Time addTimes(struct Time t1, struct Time t2) {
    struct Time result;
    int totalSeconds1, totalSeconds2, totalSeconds;

    // Convert both times to total seconds
    totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    // Sum the total seconds
    totalSeconds = totalSeconds1 + totalSeconds2;

    // Convert total seconds back to hours, minutes, and seconds
    result.hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    result.minutes = totalSeconds / 60;
    result.seconds = totalSeconds % 60;

    return result;
}

void main() {
    struct Time time1, time2, sum;

    // Input time 1
    printf("Enter the first time (hours minutes seconds): ");
    scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds);

    // Input time 2
    printf("Enter the second time (hours minutes seconds): ");
    scanf("%d %d %d", &time2.hours, &time2.minutes, &time2.seconds);

    // Sum the two times
    sum = addTimes(time1, time2);
    
    
    system("cls");


    // Display the result
    printf("Sum of times: %d hours %d minutes %d seconds\n",  result.hours, result.minutes, result.seconds);
}
