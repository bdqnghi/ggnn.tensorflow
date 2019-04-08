main()
{
    int n,m=0,min,sum=0;
    int i,j,k,q;
    scanf("%d",&n);
    int **a=(int **)calloc(n,sizeof(int *));
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            a[i]=(int *)calloc(n,sizeof(int));
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
                if(a[i][j]>m)
                m=a[i][j];
            }
        }
        min=m;
        for(q=0;q<n-1;q++)
        {
        for(i=0;i<n-q;i++)
        {
            for(j=0;j<n-q;j++)
            {
                if(a[i][j]<min)
                min=a[i][j];
            }
            for(j=0;j<n-q;j++)
            {
                a[i][j]=a[i][j]-min;
            }
            min=m;
        }
        for(j=0;j<n-q;j++)
        {
            for(i=0;i<n-q;i++)
            {
                if(a[i][j]<min)
                min=a[i][j];
            }
            for(i=0;i<n-q;i++)
            {
                a[i][j]=a[i][j]-min;
            }
            min=m;
        }
        sum=a[1][1]+sum;
        for(i=0;i<n-q;i++)
        {
            for(j=1;j<n-q-1;j++)
            {
                a[i][j]=a[i][j+1];
            }
        }
        for(i=1;i<n-q-1;i++)
        {
            for(j=0;j<n-q;j++)
            a[i][j]=a[i+1][j];
        }
        }
        printf("%d\n",sum);
        sum=0;

    }

} 

