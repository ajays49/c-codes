
#include <stdio.h>
#include <string.h>
int main()
{
    char sub[] = "C and Opps";
    char copy[12];
    
    char str1[]="C"; char str2[]="C++"; int i,j;
    
    //String length
    int len = strlen(sub);
    printf("String: %s and its length: %d\n", sub, len);
    
    //String Copy
    strcpy(copy, sub);
    printf("Copied string = %s\n",copy);
    
    //String compare
    i = strcmp(str1, "C");
    j = strcmp(str2, "C sharp");
    printf("%d, %d\n", i,j);
    
    //String ncompare
    if (strncmp(str1, "C sharp", 1)==0)
        printf("They are equal\n");
        
    //String concat
    printf("String Concat: %s\n", strcat(str1," students"));
    
    //String nconcat
    printf("String nConcat: %s\n", strncat(str1,"oops", 2));
    return 0;
}


