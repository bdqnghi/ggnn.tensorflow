int compare(void const *p,void const *q)
{
     if (*(double*)p>*(double*)q)
     return 1;
     else
     return -1;
}
 main()
{
    int n,i,j,k;
    double a[40];
    double b[40];
    double d[40];
    char c[40][4];
    k=0;
    j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %lf",&c[i],&d[i]);
        if(c[i][0]=='m')
        {
        a[j]=d[i];
        j++;
        }
        else
        {
         b[k]=d[i];
         k++;
        }
    }
    qsort(a,j,sizeof(double),compare);
    qsort(b,k,sizeof(double),compare);
    printf("%0.2lf",a[0]);
    for(i=1;i<j;i++)
    {
     printf(" %0.2lf",a[i]);
    }
    for(i=k-1;i>-1;i--)
    {
     printf(" %0.2lf",b[i]);
    }
}
