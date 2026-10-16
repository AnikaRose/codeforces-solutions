// Problem: 791A - Bear and Big Brother
// Rating: 800
// Language: C
// Verdict: Accepted

#include<stdio.h>
int main(){
    int a, b, year=0;
    scanf("%d %d", &a, &b);
    while( a <= b){
        a = 3*a ;
        b = 2*b;
        year++;
    }
    
    printf("%d", year);
    return 0;
}
