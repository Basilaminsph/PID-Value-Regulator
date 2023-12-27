
#include <stdio.h>
//PID Values
float Kp = 0.8;
float Ki = 0.0;
float Kd = 0.2;

float desiredVal = 1.0;
float error = 0.0;
float Preverror = 0.0;
float currentval = 0.0;
float integral = 0.0;

int main(){
    
 printf("Put in a value");
 scanf("%f", &currentval);
 
 for(int i = 0; i < 100; ++i){
    error = desiredVal - currentval;
    integral += error;
    float derivative = error - Preverror;

    float control_output = Kp * error + Ki * integral + Kd * derivative;
    Preverror = error;
    currentval += control_output;
    printf("iteration %d: Current Value = %f\n:", i+1, currentval);
 }
 
 
    return 0;

} 
