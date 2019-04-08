int fpg(int M,int N,int x);
int main()
{
    int t;
    scanf("%d",&t);
    int M,N,K;
    for(int i=0;i<t;i++)
    {
        scanf("%d%d",&M,&N);
        K=fpg(M,N,0);
        printf("%d\n",K);    
    }
    return 0;
}
int fpg(int M,int N,int x)
{
    int K=0;
    if(N==0&&M==0)
    {
       return 1;     
    }
    if (N==0) return 0;
    if(M<0)
    {
       return 0;    
    }
    for(int i=x;i<=M;i++)
    {
        K=K+fpg(M-i,N-1,i);    
    }
    return K;
}
