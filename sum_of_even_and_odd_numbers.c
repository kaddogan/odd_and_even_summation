#include<stdio.h>

int main(){

int i,sum_even=0,sum_odd=0;
int a[7]={1,2,3,4,5,6};

for(i=0;i<7;i++){

if(a[i]%2==0) sum_even+=a[i];

else if(a[i]%2==1) sum_odd+=a[i];

}
int array[2]={};

array[0]=sum_even;
array[1]=sum_odd;

printf("\n\n%d , %d",array[0],array[1]);

return 0;
}
