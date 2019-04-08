main()
{
    int a[20000],n=0,i=0,j=0,c=0;
    
    for (i=0;i<20000;i++) a[i]=0;

    scanf("%d\n",&n);
    scanf("%d",&a[0]);
    for (i=1;i<n;i++)
       scanf(" %d",&a[i]);
       
    printf("%d",a[0]);

    for (i=1;i<n;i++)
    {
        c=0;
        for (j=0;j<i;j++)
        if (a[j]==a[i])  c=1;
        if (c==0) printf(" %d",a[i]);
    }  
}
