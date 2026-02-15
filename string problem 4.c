#include<stdio.h>
int main(){

char str[100];
puts("enter any name: ");
gets(str);
int i,v=0;
for(i=0;str[i]!='\0';i++){
    if(str[i]==' ')
        v++;
}
v++;
printf("count : %d ",v);

return 0;

}
