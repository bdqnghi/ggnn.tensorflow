
int main()
{
    int k,n[100],i,j;
    double x[100][100],a[100],s[100],s1;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&n[i]);
        for(j=0;j<n[i];j++)
            scanf("%lf",&x[i][j]);
    }
    for(i=0;i<k;i++)
    {
        a[i]=0;
        s[i]=0;
        for(j=0;j<n[i];j++)
            a[i]=a[i]+x[i][j];
        a[i]=a[i]/n[i];
        for(j=0;j<n[i];j++)
            s[i]=s[i]+(a[i]-x[i][j])*(a[i]-x[i][j]);
        s[i]=s[i]/n[i];
        s[i]=sqrt(s[i]);
        printf("%.5f\n",s[i]);
    }
    return(0);
}
