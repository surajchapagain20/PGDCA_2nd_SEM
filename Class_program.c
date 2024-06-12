#include <stdio.h> 
  
 struct time { 
     int hours; 
     int minutes; 
     int seconds; 
 }; 
  
 struct time sum(struct time t1, struct time t2); 
  
 void main() { 
     struct time t1, t2, result; 
  
     printf("Enter the first time (hrs min sec): "); 
     scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds); 
  
     printf("Enter the second time (hrs min sec): "); 
     scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds); 
  
     result = sum(t1, t2); 
  
     printf("Total: %d Hours %d Minutes %d Seconds\n", result.hours, result.minutes, result.seconds); 
  
 } 
  
 struct time sum(struct time t1, struct time t2) { 
  
     struct time result; 
     int tot_seconds; 
  
     tot_seconds = (t1.hours + t2.hours) * 3600 + (t1.minutes + t2.minutes) * 60 + t1.seconds + t2.seconds; 
     result.hours = tot_seconds / 3600; 
     result.minutes = tot_seconds % 3600 / 60; 
     result.seconds = tot_seconds % 60; 
  
     return result; 
 }
