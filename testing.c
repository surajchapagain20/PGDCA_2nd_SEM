#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

	struct Time addtime (struct Time t1, struct Time t2){
    	struct Time result;
    	int totalsecond1, totalsecond2, totalseconds;
    
    
    totalsecond1 = t1.hours*3600 + t1.minutes*60 + t1.seconds;
    totalsecond2 = t2.hours*3600 + t2.minutes*60 + t2.seconds;
    
    totalseconds = totalsecond1 + totalsecond2;
    
    result.hours = totalseconds / 3600;
    totalseconds %=3600;
	result.minutes = totalseconds / 60;
	result.seconds = totalseconds % 60;
    

    return result;    
   
}

void main() {
   struct Time Time1, Time2, sum;

    printf("Input the first time (hours minutes seconds): ");
    scanf("%d %d %d", &Time1.hours, &Time1.minutes, &Time1.seconds);

    printf("Input the second time (hours minutes seconds): ");
    scanf("%d %d %d", &Time2.hours, &Time2.minutes, &Time2.seconds);

	sum = addtime(Time1, Time2);
    
    system("CLS");

    // Display the result
    printf("\nSum of Time: %dHours: %d Minutes:%dSeconds\n", sum.hours, sum.minutes, sum.seconds);

}

