int f(int x){
    int a,c;
    if(x<10)
        return x;
    c=10;
    while(c<=x)
        c=c*10;
    c=c/10;
    a=x%10;
    a=f(x/10)+a*c;
    return a;
}
int main(){
    int n,i,sig,ans;
    for(i=0;i<6;i++){
        scanf("%d",&n);
        if(n>=0)
            sig=0;
        else{
            n=-n;
            sig=1;
        }
        ans=f(n);
        if(sig==1)
            ans=-ans;
        printf("%d\n",ans);
    }
    return 0;
}
