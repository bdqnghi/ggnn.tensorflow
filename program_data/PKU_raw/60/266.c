main()
{
      int n,m,i,j,k=0;
      scanf("%d",&n);
      for(i=3;i<=n-2;i++)
      {
                      m=sqrt(i+2); 
                      for(j=2;j<=m;j++)
                      {
                                       if(i%j==0||(i+2)%j==0)
                                       break;
                      }
                      if(j>m)
                      {
                             printf("%d %d\n",i,i+2);
                             k++;
                      }
      }
      if(k==0)
      printf("empty");
      getchar();
      getchar();
}