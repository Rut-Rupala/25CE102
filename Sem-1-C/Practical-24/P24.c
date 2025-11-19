#include<stdio.h>

void main(){
    char str[] = "Hello Hi";
    printf("Rut Rupala, 25CE102!\n");
    int len = 0;
    int len2 = 0;
    for (int i =0; str[i] != '\0'; i++) {
        len++;
        len2++;
    }
    printf("%d\n",len);
    for (int i =0; str[i] != '\0' && i<=len-1;i++)
    {
        char temp = str[i];
        str[i] = str[len-1];
        str[len-1] = temp;
        len--;
    }
    str[len2] =  '\0';
    puts(str);
    printf("\n");
    

    char str1[100],str2[100];
    int i;
    printf("Enter Str1 : ");
    scanf("%s",str1);
    fflush(stdin);
    printf("Enter Str2 : ");
    scanf("%s",str2);
    fflush(stdin);
    int result = 0; 
    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            result = str1[i] - str2[i];
            
        }   
        if (result < 0)
        {
            result = str1[i+1] - str2[i+1];
        }
        
    }
    // result = str1[i] - str2[i];
    

    printf("%d",result);
    

}