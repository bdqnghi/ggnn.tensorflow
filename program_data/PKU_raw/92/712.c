int Max(int x,int y)
{
    return x>y?x:y;
} 
int cmp(const void*a,const void*b)
{
    return *(int*)b-*(int*)a;
}
main()
{
      int i,j,n;     
      for(;;)
      {
          scanf("%d",&n);
          if(n==0) break;
          int t[n],q[n],d[n+1][n+1];
          memset(d,0,sizeof(d));
          for(i=0;i<n;i++)
              scanf("%d",&t[i]);
          for(i=0;i<n;i++)
              scanf("%d",&q[i]); 
          qsort(t,n,sizeof(t[0]),cmp);
          qsort(q,n,sizeof(q[0]),cmp);
          for(i=1;i<=n;i++)
              for(j=i;j<=n;j++)
              {
                  if(t[i-1]==q[j-1]) d[i][j]=d[i-1][j-1];
                  else if(t[i-1]>q[j-1]) d[i][j]=d[i-1][j-1]+1;
                  else d[i][j]=d[i-1][j-1]-1;
                  d[i][j]=Max(d[i][j],d[i-1][j]-1);
              } 
          printf("%d\n",d[n][n]*200);
      }
}
               