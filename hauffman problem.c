
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
   char s[100];
   scanf("%[^\n]c",s);
   int c=1;
   int length=strlen(s);
   for(int i=0;i<length;i++)
   {
       if(s[i]!='\0')
       {
           for(int j=i+1;j<length;j++)
           {
               if(tolower(s[i])==tolower(s[j]))
               {
                   c+=1;
                   s[j]='\0';
               }
           }
           
            if(i==0) printf("'%c' = %d ",tolower(s[i]),c);
            else printf("\n '%c' = %d ",tolower(s[i]),c);
       }
       c=1;
   }

    return 0;
}



