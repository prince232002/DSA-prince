int main(){
int n=6;
    int f[10];
    if(n<=1) return n;
    else{
        if(f[n-2]==-1) f[n-2]=mfib(n-2); 
        if(f[n-1]==-1) f[n-1]=mfib(n-1); 
     return f[n-2]+f[n-1];
    }
}
}