int f(int a)
{
    int i,j=0;
    if (a==2)
    return 0;
    else
    {
        for(i=2;i<a;i++)
        {
                        if (a%i==0)
                        break;
                        j++;
        }
        if (j==a-2)
        return 0;
        else
        return 1;
    }
}
main ()
{
    int a,b,c,i,j,k;
    int g[100];
    for(i=0;i<100;i++)
    {
                      g[i]=0;
    }
    scanf("%d",&a);
    j=0;
    for (b=2;b<=a;b++)
    {
        if (f(b)==0)
        {
                    g[j]=b;
                    j++;
        }
    }
    for(i=0;i<j;i++)
    {
                    c=a-g[i];
                    for (k=i;k<j;k++)
                    {
                        if (c==g[k])
                        printf("%d %d\n",g[i],g[k]);
                    }
    }
}