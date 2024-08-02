#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int *score,*p;
    int size;
    printf("How many scores?:");
    scanf("%d",&size);
    
    score=(int*) malloc(size*sizeof(int));
    if(score==NULL){
        printf("No space available");
        exit(1);
    }
    printf("The address of the first byte is %p",(void*)score);
    printf("\n Input the scores:");
    for(p=score;p<score;p++){
        scanf("%i",p);
    }
    for(p=score;p<score+size;p++){
        printf("%i is stored in address %p\n",*p,(void*)p);
    }
    
    free(score);




    return 0;
}