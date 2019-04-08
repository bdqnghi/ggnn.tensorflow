int way(int m,int n)  
{
    if(m==0||n==1)  
        return 1;       
    else if(n>m)
        return way(m,m);
    else	
        return way(m,n-1)+way(m-n,n);
}
int main()
{
    int i,t,m,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&m,&n);
        printf("%d\n",way(m,n));
    }

return 0;
}
