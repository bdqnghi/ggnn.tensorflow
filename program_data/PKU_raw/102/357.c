main()
{
    int n,h=0,i=0,j=0,k=0;
    scanf("%d",&n);
    char x[n][10];
    float a[n],m[n],f[n];
    float t;
    do
    {
        scanf("%s %f",&x[i],&a[i]);
        i=i+1;
    }
    while(i<n);
    i=0;
    do
    {
        if(x[i][0]=='m')
        {
            m[j]=a[i];
            j=j+1;
        }
        else
        {
            f[k]=a[i];
            k=k+1;
        }
        i=i+1;
    }
    while(i<n);
    for(h=0;h<j-1;h++)
    {
        for(i=0;i<j-1-h;i++)
        {
            if(m[i]>m[i+1])
            {
                t=m[i];
                m[i]=m[i+1];
                m[i+1]=t;
            }
        }
    }
    for(h=0;h<k-1;h++)
    {
        for(i=0;i<k-1-h;i++)
        {
            if(f[i]<f[i+1])
            {
                t=f[i];
                f[i]=f[i+1];
                f[i+1]=t;
            }
        }
    }
    printf("%.2f",m[0]);
    if(j>1)
    {
        i=1;
        do
        {
        printf(" %.2f",m[i]);
        i=i+1;
        }
        while(i<j);
    }
    i=0;
    do
    {
        printf(" %.2f",f[i]);
        i=i+1;
    }
    while(i<k);
}




