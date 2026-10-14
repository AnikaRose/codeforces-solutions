// Problem: 4A - Watermelon
// Rating: 800
// Language: C
// Verdict: Accepted

#include<stdio.h>
int main(){
    int w;
    scanf("%d", &w);
    if(w>2 && w%2 == 0){
        printf("\nYES");
    }
    else{
        printf("\nNO");
    }

    return 0;
}
