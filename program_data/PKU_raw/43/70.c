
int F(int n){
    int m,i,j,s=1;
    m=sqrt(n);
    for(i=2;i<=m;i++){
        for(j=m;j<=n;j++){
            if(n==i*j){
                s=0;
                return 1;
                break;
            }
        }
    }
    if(s==1) return 2;
}

int main()
{
    int t,k,p;
    scanf("%d",&t);
    for(k=3;k<=t/2;k++){
        if(F(k)==2){
            p=t-k;
            if(F(p)==2){
                printf("%d %d\n",k,p);
            }
        }
    }
    return 0;
}