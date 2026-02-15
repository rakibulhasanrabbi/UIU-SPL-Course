#include<stdio.h>
int main (){


char str1[100];
puts("enter any name: ");
gets(str1);


int i,len=0;
for(i=0;str1[i]!='\0';i++){
    len++;
}

printf("length: %d",len);
printf("\n");


return 0;


}
