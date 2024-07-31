#include <stdio.h>

int main(){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    int result = x / y;
    int s = x%y;
    printf("%d,%d",result,s);
    return 0;
}