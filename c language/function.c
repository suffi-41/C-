#include<stdio.h>
#include<string.h>
/*function protocall*/
void print();
void print_table(int n);
int return_sum(int arr[], int n);
float area_of_squre(float side);
float area_of_triangle(float length , float width);
float area_of_circle(float radius);


int main(){
 
/*function call*/
int n;
printf("Enter the value of n for table:");
scanf("%d",&n);
print_table(n);
print();

printf("\n%d\n",area_of_circle(4.1));
printf("%f\n",area_of_squre(5.0));
printf("%f\n",area_of_triangle(2.3,4.0));
    return 0;
}

/*function define*/
void print(){
    printf("hello word:");
}
void print_table(int n){
    static int i;
    while(i<10){
        printf("%d x %d=>%d\n",n,i+1,n*(i+1));

        i++;
    }
}

int return_sum(int arr[], int n){
    int sum=0;
    static int i;
    while(i<n){
        sum+=arr[i];

        i++;
    }
}

float area_of_squre(float side){
    return side*side;
}

float area_of_triangle(float length, float width){
    return length*width;
}

float area_of_circle(float radius){
   return radius*radius*3.14;
}
