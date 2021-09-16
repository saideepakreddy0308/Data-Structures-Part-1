#include<stdio.h>
#include<stdlib.h>
main()
{
    char str[100],ch,*ptr,*ptr2;
    ptr2=(char*)malloc(20);
    printf("Enter a String :");
    gets(str);
    printf("Enter the Character you Want to Delete :");
    scanf("%c",&ch);
    ptr = str;
    while(*ptr!=NULL)
            {
               if(*ptr!=ch)
                 {
                     *ptr2=ch;
                       ptr2++;
                 }
                     ptr++;
            }
         printf("%s",ptr2); 
}
