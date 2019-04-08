int main()
{
    int n=0,k=0,max=0;
    cin>>n;
    double x[200],y[200],dis[2000];
    for(int i=0;i<n;i++)
       cin>>x[i]>>y[i];
    for(int i=0;i<n-1;i++)
       for(int j=i+1;j<n;j++)
          dis[k++]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
    for(k=0;k<n*(n-1)/2;k++)
       if(dis[max]<dis[k])   max=k;
    printf("%.4lf\n",dis[max]);

    return 0;
}
    
