# Fibonacci-series-code-project-in-c-language
I solved this problem using C language. This was a tough one for a beginner like me, but solved it finally.


#include <stdio.h>
int series(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return series(n-1) + series(n-2) ;
        
    }
    
}
int main()
{
    int a,i;
    printf("enter the value of n\n");
    scanf("%d",&a);

    printf("the series till n is\n");
    for(i=0;i<a;i++){
        printf("%d",series(i));
        printf("\n");
    }
    


return 0;
}
