int main()
{
    int n;
    scanf("%d", &n);
    int total;
    total=n*(n-1)/2;
    int i;
    double a[100],b[100];
    for(i=1;i<=n;i++)
    scanf("%lf%lf", &a[i], &b[i]);
    double distance[2000];
    int k=1,j;
    for(i=1;i<=n-1;i++)
    {
                       for(j=i+1;j<=n;j++)
                       {
                                          distance[k]=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
                                          k++;
                       }
    }   
    double max=distance[1];
    for(i=1;i<=k;i++)
    {
                    if(max<distance[i])
                    {
                                       max=distance[i];
                    }
    }
    printf("%.4lf", max);
    return 0;
}    
