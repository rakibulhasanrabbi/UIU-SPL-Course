#include<stdio.h>
int main(){

  char str[100];
  puts("enter any name: ");
  gets(str);
  int i,v=0;
  for(i=0;str[i]!='\0';i++){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')

        v++;
  }


printf("count : %d ",v);


return 0;

}
