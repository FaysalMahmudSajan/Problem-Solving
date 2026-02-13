//Write a function that takes an integer as input and prints all of its divisors.Call this function from the main function.
#include<stdio.h>
int main(){
divior(45);
}
int divior(int num){
  for(int i=1; i<=num; i++){
    if(num%i==0){
      printf("%d\n",i);
}
  }
}