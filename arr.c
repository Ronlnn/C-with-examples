#include <stdio.h>

int main(){
int n;
float arr[100];

printf("Введите число от (1-100): ");
scanf( "%d", &n);
printf("\n");
arr[0] = 1;
printf("1");
for(int i  = 0; i < n; ++i){
   printf("Введите элемент %d ", i+1);
   scanf("%f", &arr[i]);
}
printf("2");
// arr[0];
for(int i = 1; i < n ; ++i){
    if(arr[0] < arr[i]){
        arr[0] = arr[i];
    }
}

printf("Max number %.2f\n", arr[0]);
    return 0;
}