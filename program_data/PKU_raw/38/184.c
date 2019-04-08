int main()
{
    double num[10000],sum,s;
    int n,m;
    int i,j,flag=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
                     scanf("%d",&m);
                     for(j=1,sum=0;j<=m;j++)
                     {
                                      scanf("%lf",num+j);
                                      sum+=*(num+j);
                     }
                     sum/=m;
                     for(j=1,s=0;j<=m;j++)
                     {
                                          s+=d(*(num+j)-sum);
                     }
                     s/=m;
                     s=sqrt(s);
                     if(flag==1)
                     printf("\n");
                     flag=1;
                     printf("\n%.5lf",s);
    }
   // getch();
    return 0;
}
    
