#include<stdio.h>
int main(){

char str[100];
int i,len=0;
printf("\nEnter any name: ");
gets(str);


 for(i= 0; str[i]!='\0'; i++){
    len++;
 }

puts("\n");
for(i=0;i<len;i++){
if(str[i]!=str[len-i-1]){
   puts("not palindrome");
   break;
   }else{
   puts(" palindrome");
   break;
   }

}


return 0;
}
