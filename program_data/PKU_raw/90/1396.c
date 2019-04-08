int mustput(int m,int n)
{
    int put(int m,int n);
    int c,d=m-n;
    if(n==1)
    {
            c=1;
    }
    else
    {
        c=put(d,n);
    }
    return c;
}
int min(int m,int n)
{
    if(m>=n)
    {
        return n;
    }
    else
    {
        return m;
    }
}
int put(int m,int n)
{

    int c=0;
    int i;
    if(m==0)
    {
        c=1;
    }
    for(i=1;i<=min(m,n);i++)
    {
        c=c+mustput(m,i);
    }
    return c;
}
int main()
{
     int m,n,l;
     scanf("%d",&l);
     for(int i=1;i<=l;i++)
     {
         scanf("%d %d",&m,&n);
         printf("%d\n",put(m,n));
     }

}