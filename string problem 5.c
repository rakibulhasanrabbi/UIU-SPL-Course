#include<stdio.h>
int main(){

char str[100];
int i,len=0,temp=0;
puts("Enter any name: ");
gets(str);


 for(i= 0; str[i]!='\0'; i++){
    len++;
 }


for(i=0;i<len/2;i++){

temp=str[i];
str[i]=str[len-1-i];
str[len-1-i]=temp;
}

 puts(str);


return 0;
}
