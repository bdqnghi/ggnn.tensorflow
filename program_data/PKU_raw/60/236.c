int find(int x)
{
    int i,BL=1;
    for (i=2;i<=sqrt(x);i++)
    {
        if (x%i==0)
            BL=0;
    }
    return BL;
}
main()
{
    int n,a=0,b=0,i,BL,c=0;
    scanf("%d",&n);
    for (i=3;i<=n;i+=2)
    {
        BL=0;
        if (find(i))
        {
            if (a<b)
                a=i;
            else
                b=i;
            BL=1;
        }
        if (a-b==2 && BL)
        {
            printf("%d %d\n",b,a);
            c=1;    
        }
        else
        {
            if (b-a==2 && BL)
            {
                printf("%d %d\n",a,b);
                c=1;
            }
        }
    }
    if (c==0)
        printf("empty\n");
}