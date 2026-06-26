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