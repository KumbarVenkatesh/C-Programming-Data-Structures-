#include<stdio.h>
int sum(int n){
    if(n==0)
        return 0;
    return sum(n-1)+n;
}
int Isum(int n){
    int s,i;
    for(i-1;i<=n;i++){
    s=s+i;
    }
    return s;
}
int main(){
    int r=sum(5);
    printf("%d\n", r);

    return 0;
}
