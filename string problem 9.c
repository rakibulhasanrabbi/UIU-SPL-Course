#include<stdio.h>
int main(){

  char str[100],ch;
  int i,len=0,count=0;

  printf("Enter any name: ");
  gets(str);


  for(i=0;str[i]!='\0';i++){
        len++;
  }
  printf("count: ");
  scanf("%c",&ch);

  for(i=0;i<len;i++){
    if(str[i]>='A' && str[i]<='Z'){
        str[i]+=32;
    }
    if(str[i]==ch){
        count++;
    }
  }
 printf("digit: %d\n\n",count);

return 0;
}
