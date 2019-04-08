main()
{
    int n;
    double x[100],y[100];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lf %lf",&x[i],&y[i]);
    }
    double max=0;
    for(int j=1;j<=n;j++)
        for(int k=j+1;k<=n;k++)
            {
                if( (  (x[j]-x[k])*(x[j]-x[k])+(y[j]-y[k])*(y[j]-y[k]) )>=max   )
                max=(  (x[j]-x[k])*(x[j]-x[k])+(y[j]-y[k])*(y[j]-y[k]) );
            }
    printf("%.4lf",sqrt(max));

}
