float f(int n)
{
    float s;
    if(n==1)
    {
        return s=1.000;
    }

    if(n==2)
    {
        return s=2.000;
    }
    if(n!=1 && n!=2)
    {
        return s=f(n-1)+f(n-2);
    }
}
main()
{
    int x,y,i,j,k;
    float sum;
    {
        scanf("%d",&x);
        for(i=0;i<x;i++)
        {
            scanf("%d",&y);
            sum=0;
            k=1;
            for(j=0;j<y;j++)
            {
                sum=sum+f(k+1)/f(k);
                k++;
            }
            printf("%.3f\n",sum);
        }
    }
}
