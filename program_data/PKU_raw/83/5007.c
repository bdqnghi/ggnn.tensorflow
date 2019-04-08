int main()
{
    int n,a[10],b[10],i;
    float GPA,c[10],sum_a,sum_b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
                     if(a[i]<60)
                     c[i]=0;
                     else if(a[i]<=63)
                     c[i]=1.0;
                     else if(a[i]<=67)
                     c[i]=1.5;
                     else if(a[i]<=71)
                     c[i]=2.0;
                     else if(a[i]<=74)
                     c[i]=2.3;
                     else if(a[i]<=77)
                     c[i]=2.7;
                     else if(a[i]<=81)
                     c[i]=3.0;
                     else if(a[i]<=84)
                     c[i]=3.3;
                     else if(a[i]<=89)
                     c[i]=3.7;
                     else
                     c[i]=4.0;
                     c[i]=c[i]*b[i];
                     }
                     for(i=1,sum_a=0,sum_b=0;i<=n;i++)
                     {
                                                      sum_a+=c[i];
                                                      sum_b+=b[i];
                                                      }
                                                      GPA=sum_a/sum_b;
                                                      printf("%.2f",GPA);
                                                      return 0;
                                                      }