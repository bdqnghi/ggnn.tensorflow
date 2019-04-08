int main()
{
    int n;
    scanf("%d",&n);
    double x[1000],y[1000];
    double dt,dtmax=0;
    for(int m=0;m<n;m++)
    {
        scanf("%lf%lf",&x[m],&y[m]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            dt=sqrt(pow(x[j]-x[i],2)+pow(y[j]-y[i],2));
            if(dtmax<dt)
            {
                dtmax=dt;
            }
        }
    }
    printf("%.4lf\n",dtmax);
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    return 0;
}
    
