void f(int x[1001],int i,int n)
{
     int k;int j;
     k=x[n-1];
     for(j=n-1;j>i;j--) x[j]=x[j-1];
     x[i]=k;
}
main()
{
   int n,i,k,l,prize,t,j,m,c,w,s; 
   scanf("%d",&n);
   for(;n!=0;)
   {
      int p=0;int w=0;int s=0;c=0;int h=0;int d=0;
      int a[1001]={0};
      int b[1001]={0};
      for(i=0;i<=n-1;i++) scanf("%d",&a[i]);
      for(i=0;i<=n-1;i++) scanf("%d",&b[i]);
      for(l=n-2;l>=0;l--)
      {
         for(i=0;i<=l;i++)
         {
            if(a[i]<a[i+1]) {t=a[i];a[i]=a[i+1];a[i+1]=t;}
            if(b[i]<b[i+1]) {t=b[i];b[i]=b[i+1];b[i+1]=t;}
         }
      }
      for(i=0;i<=n-1;i++)
      {
         if(a[i]>b[i])  {w++;}
         else if(a[i]<b[i]) {f(a,i,n);s++;}
              else
              {
                for(j=i+1;j<=n-1;j++)
                {
                  if((a[j]<=b[j])&&(a[j]!=a[i]))  {f(a,i,n);s++;break;}
                }
              }
      }
      prize=(w-s)*200;
      printf("%d\n",prize);      
      scanf("%d",&n);
   }
   getchar();
   getchar();
} 
