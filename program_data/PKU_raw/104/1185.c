int main()
{
    int x,y;
    int p;
    int a[10];
    int b[10];
    int i=0,j=0,k,m;
    scanf("%d%d",&x,&y);
    do
    {
    if (x>y)
    {
        x=x/2;
    }
    else
    if (y>x)
    {
        y=y/2;
    }
    if(x==y)
        {
            printf("%d",x);
        }
    }
    while(x!=y);

    return 0;
}