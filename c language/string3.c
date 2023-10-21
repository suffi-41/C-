#include<stdio.h>
#include<string.h>
#include<math.h>

 int count_of_vowel(char words[]){
       int count=0;
       int i=0;
       for(i; words[i] !='\0'; i++){
          if(words[i]=='a' || words[i]=='A' || words[i]=='e' || words[i]=='E' || words[i]=='o' || words[i]=='O' || words[i]=='u' || words[i]=='U' || words[i]=='i' || words[i] =='I'){
            count++;
          }
       }
       return count;
}

int count_length(char string[]){
    int count=0;
    static int i;
    while(string[i] !='\0' ){
        count++;
        i++;
    }
    return count;
}


int main(){
    char words[100];
    int count_v, count_l;
    printf("Enter the word :");
    scanf("%s",words);
    count_v=count_of_vowel(words);
    count_l=count_length(words);
    printf("The vowel is %d\n Length is %d",count_v, count_l);



    return 0;
}