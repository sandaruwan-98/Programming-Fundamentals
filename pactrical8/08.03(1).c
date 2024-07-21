//Write two separate functions for get values to an integer array and print them
#include<stdio.h>
int arr[5];
void getValues();
void printValues();

int main(){
getValues();
printValues();
return 0;
}



void getValues(){
printf("Enter 5 values for the array : \n");
int i;
for(i=0;i<5;i++){
scanf("%d",&arr[i]);
}
}



void printValues(){
printf("Values of the array : ");
int i;
for(i=0;i<5;i++){
printf("%d ",arr[i]);
}
}
