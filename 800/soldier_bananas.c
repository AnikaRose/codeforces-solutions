// Problem: 546A - Soldier and Bananas
// Rating: 800
// Language: C
// Verdict: Accepted

#include <stdio.h>
int main(){
    int k, n, w, t=0, b=0;
    scanf("%d %d %d", &k, &n, &w);
    for(int i=1; i<=w; i++){
        t = t + i*k ;
    }
    b= t-n;
    if(b>0){
        printf("%d", b);
    }
    else{
        printf("%d", 0);
    }
    return 0;
}
