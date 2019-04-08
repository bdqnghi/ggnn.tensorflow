
int mao(double * a,int n)
{
    double tmp=0;
    for (int i=0;i<n;i++)
    {
        for (int j=1;j<n;j++)
        {
            if (a[j]<a[j-1]){ tmp=a[j];a[j]=a[j-1]; a[j-1]=tmp;}
        }
    }
    return 0;
}
int mao1(double * a,int n)
{
    double tmp=0;
    for (int i=0;i<n;i++)
    {
        for (int j=1;j<n;j++)
        {
            if (a[j]>a[j-1]){ tmp=a[j];a[j]=a[j-1]; a[j-1]=tmp;}
        }
    }
    return 0;
}
int main()
{
    double m[40],f[40],r;
    int n,i;
    int ml=0,fl=0;
    char type[10];
    cin>>n;
    for (i=0;i<n;i++)
    {
        scanf("%s%lf",type,&r);
        if (type[0]=='m') m[ml++]=r;
        else f[fl++]=r;
    }
    mao(m,ml);
    mao1(f,fl);
    for (i=0;i<ml;i++)
    printf("%.2lf ",m[i]);
    printf("%.2lf",f[0]);
    for (i=1;i<fl;i++)
    printf(" %.2lf",f[i]);
    cout<<endl;

    return 0;
}
    
