int f(int m,int n){
    int i;
    int k=0;
    for(i=2;i<=n;i++)
    k=((m%i)+k)%i;
    return k;
}
int main(){
    int m,n;
    m=1;
    n=1;
    while((m>0)&&(n>0)){
    scanf("%d%d",&m,&n);
    if((m>0)&&(n>0)){
        printf("%d\n",f(n,m)+1);
    }
    }
    return 0;
}


