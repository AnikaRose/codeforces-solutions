// Problem: 50A - Domino Piling
// Rating: 800
// Language: C
// Verdict: Accepted

#include <stdio.h>
int main(){
    int m, n, area;
    scanf("%d %d", &m, &n);
    area= m * n ;
    printf("%d", area/2);
    return 0;
}
