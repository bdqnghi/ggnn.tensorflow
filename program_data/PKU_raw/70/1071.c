int main()
{
    int n,i,j;
    scanf("%d",&n);
    double *p;double* q;double *r;
    r=(double*)malloc((n*(n-1)/2)*sizeof(double));
    p=(double*)malloc((n)*sizeof(double));
    q=(double*)malloc((n)*sizeof(double));
    for(i=0;i<n;i++)
    {
        scanf("%lf %lf",p+i,q+i);
    }
    int s;s=-1;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            s=s+1;
            r[s]=sqrt((p[i]-p[j])*(p[i]-p[j])+(q[i]-q[j])*(q[i]-q[j]));
        }
    }
    for(i=1;i<n*(n-1)/2;i++)
    {
        if(r[i]>r[0])
        r[0]=r[i];
    }
    printf("%0.4f\n",r[0]);
    return 0;
}
