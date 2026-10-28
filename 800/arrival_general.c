// Problem: 144A - Arrival of the General
// Rating: 800
// Language: C
// Verdict: Accepted

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int maxIndex=0, minIndex=0;
    int max = a[0];
    int min = a[0];
    int swap;
    for(int i=0; i<n; i++){
        if(a[i] > max){
            max = a[i];
            maxIndex = i;
        }
        if(a[i] <= min){
            min =a[i];
            minIndex = i;
        }
    }
    if(maxIndex > minIndex){
        swap = maxIndex + n - 1 - minIndex - 1;
    }
    else{
        swap = maxIndex + n - 1 - minIndex;
    }
    printf("%d",swap);
    return 0;
}
