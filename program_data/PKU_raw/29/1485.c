main()
{
      int n,m,i,k;
      float sum=0;
      float a[NUM]={0},b[NUM]={0};
      b[1]=1;
      b[2]=2;
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
             scanf("%d",&m);
             for(k=3;k<=m+1;k++)
             b[k]=b[k-1]+b[k-2];
             for(k=1;k<=m;k++)
             a[k]=b[k+1]/b[k];
             for(k=1;k<=m;k++)
             sum=sum+a[k];
             printf("%.3f\n",sum);
             sum=0;
      }          
      getchar();
      getchar();
      getchar();
      getchar();
} 
