main()
{
      int i,j;
      int N=0;
      int n[100]={0},m[100]={0},x[100]={0};;
      for (i=0;;i++)
      {
          scanf ("%d %d",&n[i],&m[i]);
          N=N+1;
          if (n[i]==0) break;
      }
      for (i=0;i<=N-2;i++)
      {
          for (j=1;j<=n[i]-1;j++)
          {
              x[i]=(x[i]+m[i])%(j+1);
          }
          printf ("%d\n",x[i]+1);
      }
}
