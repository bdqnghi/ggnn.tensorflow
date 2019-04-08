main()
{
   int m,n;
   int M,N;
   scanf("%d %d",&m,&n);
   M=m+2;
   N=n+2;
   int a[M][N];
   for(int i=0;i<=N-1;i++)
   a[0][i]=0;
   for(int i=0;i<=M-1;i++)
   a[i][0]=0;
   for(int i=0;i<=N-1;i++)
   a[M-1][i]=0;
   for(int i=0;i<=M-1;i++)
   a[i][N-1]=0;
   for(int i=1;i<=M-2;i++)
   {
        for(int j=1;j<=N-2;j++)
        scanf("%d",&a[i][j]);
   }
   for(int i=1;i<=M-2;i++)
   {
        for(int j=1;j<=N-2;j++)
        {
          if((a[i][j]>=a[i][j+1])&&(a[i][j]>=a[i][j-1])&&(a[i][j]>=a[i+1][j])&&(a[i][j]>=a[i-1][j]))
          printf("%d %d\n",i-1,j-1);
        
        
        }
   }
   getchar();getchar();getchar();getchar();
}
