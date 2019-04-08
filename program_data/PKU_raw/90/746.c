int f(int a,int b)
{
    int i,n=0;
    if (a==0||b==1)
    return (1);
    else if (a<b)
    f(a,a);
    else
    {
        n=f(a-b,b)+f(a,b-1);
    }
}
int main()
{
    int i,n,j=0,*p,*q,a,b;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",f(a,b));
    }
}
