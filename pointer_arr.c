#include <stdio.h>
#include <math.h>

float calculateSD(float data[]);


int main(){
    float data[10];
    printf("Введите 10 чисел: ");
    for(int i =0; i < 10; i++){
        scanf("%f", &data[i]);
    }
    float result = calculateSD(data);
printf("Result: %.6f", result);
return 0;
}

float calculateSD(float data[]){
float sum = 0.0, mean, standartDeviation = 0.0;
for (int i = 0; i < 10; i++){
    sum += data[i]; 
}
mean = sum/10;
for(int i = 0; i < 10; i++){
    standartDeviation += pow(data[i] - mean, 2);
}
return sqrt(standartDeviation/10);

}