#include <stdio.h>
/*int main(){
    FILE *karanei;
    karanei=fopen("Karanei.txt","w");
    char C;
    printf("Enter data:");
    while((C=getchar())!=EOF){
        putc(C,karanei);
        
    }
    fclose(karanei);


    return 0;
}*/
#include<stdlib.h>
int main(){
    FILE *filepointer;
    filepointer=fopen("Another example.txt","w");
    if(filepointer==NULL){
        printf("Can't open file for writing\n");
        return 1;
    }
    char data[1000];
    printf("Enter data:");
    fgets(data,sizeof(data),stdin);
    fclose(filepointer);
    filepointer=fopen("Another example.txt","r");
    if(filepointer==NULL){
        printf("Error opening file for reading");
        return 1;
    }
    printf("\nData from file:\n");
    while((fgets(data,sizeof(data),filepointer))!=NULL){
        printf("%s",data);
    }
    fclose(filepointer);


    return 0;
