// Problem: 617A - Elephant
// Rating: 800
// Language: C
// Verdict: Accepted

#include <stdio.h>
int main(){
    int x, step=0;
    scanf("%d", &x);
    while(x!=0){
        if(x>=5){
        x = x - 5;
        step++;
        }
        else if(x>=4){
            x = x - 4;
            step++;
        }
        else if(x>=3){
            x = x - 3;
            step++;
        }
        else if(x>=2){
            x = x - 2;
            step++;
        }
        else{
            x = x - 1;
            step++;
        }
        
    }
    
    printf("%d", step);
    
    return 0;
}
