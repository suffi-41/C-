#include<stdio.h>
#include<math.h>
#include<string.h>

int sum_of_array(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }

    return sum;
}

int main(){
    int array[10],sum;
    printf("Enter the multiplr array:");
    for(int i=0; i<10; i++){
        printf("NO %d :",i+1);
        scanf("%d",&array[i]);
    }
    
    sum=sum_of_array(array,10);
    printf("the sum of array of multiple is %d",sum);

       return 0;
}