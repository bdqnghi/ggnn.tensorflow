int main()
{
    int k,i,j,n;
    double h,a,H,A,N;
    double x[100],s[100];
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        h=0;
        H=0;
        scanf("%lf",&N);
        n=N;
        for(j=0;j<n;j++)
        {
            scanf("%lf",&x[j]);
            h=h+x[j];
        }
        a=h/N;
        for(j=0;j<n;j++)
        {
            H=H+((x[j]-a)*(x[j]-a));
        }
        A=H/N;
        s[i]=sqrt(A);
    }
    for(i=0;i<k;i++)
    {
        printf("%.5f\n",s[i]);
    }
    return 0;
}