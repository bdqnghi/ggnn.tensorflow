int main()
{
    int n,x[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    scanf("%d",&x[i]);
                    int j;
                    double y[1000],a=0.0,ave=0.0,s;
                    for(j=0;j<x[i];j++)
                    {
                                       scanf("%lf",&y[j]);
                                       a+=y[j];
                    }
                    a=a/x[i];
                    for(j=0;j<x[i];j++)
                    {
                                       ave+=(y[j]-a)*(y[j]-a);
                    }
                    s=sqrt(ave/x[i]);
                    printf("%.5lf\n",s);
    }                                                                                                                                                                                                  
    return 0;
}