// Problem: 158A - Next Round
// Rating: 800
// Language: C
// Verdict: Accepted

#include <stdio.h>
int main(){
    int n, k;
    int count = 0;
    scanf("%d %d", &n, &k);
    int a[n];
    for(int i=0; i<n; i++){
        scanf(" %d", &a[i]);
    }
    for(int i=0; i<n; i++){
        if( a[i] > 0 && a[i] >= a[k-1] ){
            count++;
        }
        
    }
    printf("%d", count);
    return 0;
}
