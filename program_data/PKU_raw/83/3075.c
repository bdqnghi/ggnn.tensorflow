int main()
{
    int n,i,j;
    int a[11]={0};
    int b[11]={0};
    float c[11]={0};
    int d[11]={0,1,2,3,4,5,6,7,8,9,10};
    while(scanf("%d",&n)!=EOF)
    {
        float sum=0;
        int asum=0;
         for(i=1;i<=n;i++)
         {
             scanf("%d",&a[i]);
             asum+=a[i];
         }
         for(i=1;i<=n;i++)
         {
              scanf("%d",&b[i]);
         }
         for(i=1;i<=n;i++)
         {
              if(b[i]>=90&&b[i]<=100) c[i]=4.0;
              else if(b[i]>=85&&b[i]<=89) c[i]=3.7;
              else if(b[i]>=82&&b[i]<=84) c[i]=3.3;
              else if(b[i]>=78&&b[i]<=81) c[i]=3.0;
              else if(b[i]>=75&&b[i]<=77) c[i]=2.7;
              else if(b[i]>=72&&b[i]<=74) c[i]=2.3;
              else if(b[i]>=68&&b[i]<=71) c[i]=2.0;
              else if(b[i]>=64&&b[i]<=67) c[i]=1.5;
              else if(b[i]>=60&&b[i]<=63) c[i]=1.0;
              else c[i]=0;
         }
         for(i=1;i<=n;i++)
         {
              sum+=a[i]*c[i];
         }
         printf("%.2f\n",sum/asum);
         
         
    }
    
    return 0;
}
