int f(int m,int n,int l)
{
    int c=0;
    if(n>1)
    {
        int i;
        for(i=0;i<=l;i++)
        if(m-i>=0)
        c=c+f(m-i,n-1,i);
    }
    else if(m<=l)
    c=1;
    else
    c=0;
    return c;
}
int main()
{
    int m[21];
    int n[21];
    int p,w,t;
    scanf("%d",&t);
    for(w=1;w<=t;w++)
    scanf("%d %d",&m[w-1],&n[w-1]);
    for(w=1;w<=t;w++)
    {
        p=f(m[w-1],n[w-1],m[w-1]);
        printf("%d\n",p);
    }
    return 0;
}