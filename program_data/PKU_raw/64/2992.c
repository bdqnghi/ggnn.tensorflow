struct dist
{
       int x;
       int y;
       int z;
};
main()
{
      struct dist a[11];
      int n;
      scanf("%d",&n);
      int i,j,k;
      for(i=0;i<n;i++)
      {
      scanf("%d %d %d",&a[i].x,&a[i].y,&a[i].z);
      }
      float d[10][10];
      for(i=1;i<=n-1;i++)
      {
      for(j=0;j<i;j++)
      {
                      d[i][j]=sqrt((a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)*(a[i].y-a[j].y)+(a[i].z-a[j].z)*(a[i].z-a[j].z));
      }
      }
      float t;
      int fx1,fx2,fy1,fy2,fz1,fz2,i0,j0;
      k=n*(n-1)/2;
      while(k!=0)
      {t=0.0;
      for(i=0;i<n;i++)
      {
      for(j=0;j<i;j++)
      {
                      if(d[i][j]>t)
                     { t=d[i][j];i0=i;j0=j;
                       fx1=a[j].x;fy1=a[j].y;fz1=a[j].z;fx2=a[i].x;fy2=a[i].y;fz2=a[i].z;}
                      }
                      }
                      d[i0][j0]=0;
                      printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",fx1,fy1,fz1,fx2,fy2,fz2,t);
                      k--;
                      }
                      getchar();
                      getchar();
}