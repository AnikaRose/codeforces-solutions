// Problem: 59A - Word
// Rating: 800
// Language: C
// Verdict: Accepted


#include <stdio.h>
#include <ctype.h>

int main(){
    char a[100];
    int upper=0;
    int lower=0;
    scanf("%s", a);
    for(int i=0; a[i] != '\0'; i++){
        if(isupper(a[i])){
            upper++;
        }
        else{
            lower++;
        }
    }
    if(upper > lower){
        for(int i=0; a[i] != '\0'; i++){
            a[i] = toupper(a[i]);
        }  
    }
    else{
        for(int i=0; a[i] != '\0'; i++){
              a[i] = tolower(a[i]);
        }  
    }
    printf("%s", a);
    
    return 0;
}
