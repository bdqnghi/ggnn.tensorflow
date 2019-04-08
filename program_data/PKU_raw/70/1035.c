int main()
{
    int n;
    scanf("%d",&n);
    double *x;
    x=(double *)malloc(n*sizeof(double));
    double *y;
    y=(double *)malloc(n*sizeof(double));
    for(int i=0;i<n;i++)
    {
        scanf("%lf %lf",&x[i],&y[i]);    
    }
    double dis=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]))>dis)
            {
                dis=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
            }    
        }        
    }
    printf("%.4f\n",dis);
    free(x);
    free(y);
    return 0;
}