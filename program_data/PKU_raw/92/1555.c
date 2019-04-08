int compare(const void*elem1,const void*elem2)
{
    return(*(int*)elem1-*(int*)elem2);
}
main()
{
    int n,max,sum,i,j;
    int a[2000],b[1000];
    for(;;)
    {
        sum=0;
        scanf("%d",&n);
        if(n==0)
        break;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        scanf("%d",&b[i]);
        qsort(a,n,sizeof(int),compare);
        qsort(b,n,sizeof(int),compare);
        for(i=0;i<n;i++)
        a[i+n]=a[i];
        max=-n;
        for(i=0;i<n;i++)
        {
            sum=0;
            for(j=0;j<n;j++)
            {
                if(a[i+j]<b[j])
                sum--;
                else if(a[i+j]>b[j])
                sum++;
            }
            if(sum>=max)
            max=sum;
        }
        max=max*200;
        printf("%d\n",max);
    }
}
