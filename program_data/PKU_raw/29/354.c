int main()
{
    float a[1000];
    float b[1000];
    int n,m,j,i;
    float sum;
    a[1]=1;a[2]=2;
    scanf("%d",&m);
    for(j=1;j<=m;j++)
    {sum=0;
    scanf("%d",&n);
    
    for(i=3;i<=n+1;i++)
    a[i]=a[i-1]+a[i-2];
    for(i=1;i<=n;i++)
    {
                sum=sum+a[i+1]/a[i];     }
               printf("%.3f\n",sum) ;
               }
              getchar();getchar(); }
