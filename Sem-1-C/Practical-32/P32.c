#include<stdio.h>
#include<stdlib.h>
void reverse(char *,int);
void main(){
    FILE *fp;
    printf("Rut Rupala, 25CE102!\n");
    int j =0;
    fp = fopen("Demo.txt","r");
    if (fp == NULL)
    {
        perror("Error Reading File");
    }
    
    fseek(fp,0,SEEK_END);
    long size = ftell(fp);
    fseek(fp,0,0);

    char *data= (char *)malloc(size);
    fread(data,size,1,fp);
    
    
    
    reverse(data,size);

    free(data);
    fclose(fp);
}

void reverse(char *data,int size){
    int i=0,j=0,k=0;
    for (int l = 0; l < size+1; l++)
    {
        if (data[l] == ' ' || data[l] == '\0')
        {
            for (int m = l; m >= j; m--)
            {
                printf("%c",data[m]);
            }
            j=l;
        }
        
    }
    
}   