int main()
{
    int n;
    scanf("%d", &n);
    int i;
    int x[100];
    int sum=0;
    for(i=0;i<n;i++)
    {
                    scanf("%d", &x[i]);
                    sum=sum+x[i];
    }
    float aver;
    aver=(float)sum/n;
    float y[100];
    for(i=0;i<n;i++)
    {
                    y[i]=fabs(x[i]-aver);
    }
    float max=y[0];
    for(i=1;i<n;i++)
    {
                    if(y[i]-max>0)
                    {
                                  max=y[i];
                    }
    }
    int z[100];
    int m=0;
    for(i=0;i<n;i++)
    {
                    if(fabs(y[i]-max)<pow(10,-9))
                    {
                               z[m]=x[i];
                               m++;
                    }
    }
    int o,w;
    for(i=1;i<m;i++)
    {
                     for(o=0;o<m-i;o++)
                     {
                                       if(x[o]>x[o+1])
                                       {
                                                      w=z[o];
                                                      z[o]=z[o+1];
                                                      z[o+1]=w;
                                       }
                     }
    }
    
    printf("%d", z[0]);
    for(i=1;i<m;i++)
    {
                    printf(",%d", z[i]);
    }
  
    return 0;
}               
