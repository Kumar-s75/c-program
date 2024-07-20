#include <stdio.h> 
#include <string.h>

using namespace std;

int main(){
    char str1[30],str2[30];
    int len,i,j=0;
    printf("\n Enter the string  : ");
    gets(str1);
    
    for(i=0;i<=strlen(strl);i++)
    {
        if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'||str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||str1[i]=='O'||str1[i]=='U')
        {
           str1[i]='';
            }
            else{
                str2[j++]=str1[i];
            }
        }           
                                                                                 
    }
    str2[j]='\0';
printf("\n After removal of vowels:%s",str2);
     