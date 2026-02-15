#include<stdio.h>
int main(){


char str1[100],str2[100];
puts("str1: ");
gets(str1);
puts("str2: ");
gets(str2);


int i,len=0;
for(i=0;str1[i]!='\0';i++){
    len++;
}
printf("\n");


for(i=0;str2[i]!='\0';i++){
    str1[len+i]=str2[i];
}


puts(str1);
printf("\n");

return 0;


}
