#include<stdio.h>
int fib(int n){
int t0=0,t1=1,s=0;
if(n<=1){
return n;
}
else {
for(int i=2;i<=n;i++){
s = t0+t1;
t0=t1;
t1 = s;
}
}
return s;
}

int Ifib(int n){
if(n<=1) return n;
return Ifib(n-1)+Ifib(n-2);
}

int Rfib(int n){
    int F[n];
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-1]==-1){
            F[n-1]=Rfib(n-1);
        }
        if(F[n-2] == -1){
            F[n-2]=Rfib(n-2);
        }
        F[n]=Rfib(n-1)+Rfib(n-2);
        return F[n];
        }
    }
    
int main(){
int r=Rfib(10);
printf("%d ",r);

return 0;
}
