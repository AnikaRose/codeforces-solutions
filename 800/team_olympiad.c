// Problem: 490A - Team Olympiad
// Rating: 800
// Language: C
// Verdict: Accepted

#include <stdio.h>
int main(){
    int n;
    int pc = 0, mc = 0, sc = 0;
    int a[5000];
    int p[5000];
    int m[5000];
    int s[5000];
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        if(a[i]==1){
            p[pc]= i+1;
            pc++;
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]==2){
            m[mc]= i+1;
            mc++;
    }
    }
    for(int i=0; i<n; i++){
        if(a[i]==3){
            s[sc]= i+1;
            sc++;
        }
    }
    
int w;
if (pc < mc && pc < sc) {
    w = pc;
}
else if (mc < sc) {
    w = mc;
}
else {
    w = sc;
}
    
    printf("%d\n", w);

    for(int i=0; i<w; i++){
        printf("%d %d %d\n", p[i], m[i], s[i]);
    }
    

    return 0;
}
