#include <stdio.h>
int main(){
    int n;
    char a, b, c;
    int count = 0;

    scanf("%d", &n);
    for(int i=0; i<n; i++){
       scanf(" %c%c%c", &a, &b, &c);

       if( a== '+' && b== '+' && c== 'X'){
            count++;
    }
    if( a== 'X' && b== '+' && c== '+'){
            count++;
    }
    if( a== '-' && b== '-' && c== 'X'){
            count--;
    }
    if( a== 'X' && b== '-' && c== '-'){
            count--;
    }

    }
    printf("%d", count);

    return 0;
}
