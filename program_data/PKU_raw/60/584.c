int pure(int a)
{
    int i,m=0,x;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        break;
        m++;
        }
    if(m==a-2)
    x=1;
    else
    x=0;
    return(x);
    }
main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=2;i<=n-2;i++)
    {
        if(pure(i)+pure(i+2)==2)
        {
            printf("%d %d\n",i,i+2);
            c++;
            }
        }
    if(c==0)
    printf("empty");
    }
