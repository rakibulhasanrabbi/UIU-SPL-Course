#include<stdio.h>
int main(){

  char str[100];
  int i,len=0,temp=0;
  puts("Enter any name: ");
  gets(str);




  for(i=0;str[i]!='\0'; i++){
    if(str[i]>='a' && str[i]<='z'){
        str[i]=str[i]-32;
    }
  }

  puts(str);

return 0;
}
