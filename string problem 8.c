
#include<stdio.h>
int main(){

  char str[100];
  puts("Enter any name: ");
  gets(str);


int i,j,len=0,temp=0;
for(i=0;str[i]!='\0'; i++){
        len++;
}

    for(i=0;i<len;i++){
        for(j=i;j<len;j++){
            if(str[i]>str[j]){
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
    }
  }

  puts(str);

return 0;
}
