int f(int m,int n,int j)
{
    int i,s=0;
    if(n==1)
    {
        return m>=j;
    }
    for(i=j;i<m;i++)
    {
        s+=f(m-i,n-1,i);
    }
    return s;
}

int main()
{
    int m,n,l;
    scanf("%d\n",&l);
    while(l--)
    {
        scanf("%d %d",&m,&n);
        printf("%d\n",f(m,n,0));
    }
    return 0;
}

