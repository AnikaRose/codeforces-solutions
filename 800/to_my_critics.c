#include <stdio.h>
#include <string.h>
int main(){
    int t, a, b, c;
    scanf("%d", &t);
    char arr[t][4];
    for(int i=0; i<t; i++){
        scanf(" %d %d %d", &a, &b, &c);
        if((a+b>=10)||(b+c>=10)||(a+c>=10)){
            strcpy(arr[i], "YES");
        }
        else{
            strcpy(arr[i], "NO");
        }
    }
    for(int i=0; i<t; i++){
           printf("\n%s", arr[i]);
    }
 

    return 0;
}