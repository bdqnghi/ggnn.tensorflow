int main()
{
    int x[1000],y[1000],i,n,t,count1,count=0;
    for(i=0;;i++)
    {
        scanf("%d",&x[i]);
        if(getchar()=='\n')
        {
            n=i+1;
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&y[i]);
        if(i<n-1)
            scanf(",");    //????
    }
    for(i=0;i<n;i++)
       // printf("%d ",y[i]);
    for(t=0;t<1000;t++)
    {
        count1=0;
        for(i=0;i<n;i++)
            if((x[i]<=t)&&(y[i]>t))
            {
                count1++;
               // printf(" i=%d ",i);
            }
        if(count1>count)
            count=count1;
       // printf("%d\n",count1);
    }
    printf("%d %d",n,count);
    return 0;
}