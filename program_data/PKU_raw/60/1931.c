main()
{
      int n,s;
      int i,j;
      scanf("%d",&n);
      int *a=(int*)malloc(((n+1)/2)*sizeof(int));
      for (i=0;i<(n+1)/2;i++)
      a[i]=1;
      for (i=1;i<(n+1)/2;i++)
      {
          for(j=2;j<(2*i+1)/2;j++)
          {
              if((2*i+1)%j==0)
              {
                  a[i]=0;
                  break;
              }
          }
      }
      s=0;
      for(i=2;i<(n+1)/2;i++)
      {
          if((a[i-1]==1)&&(a[i]==1))
          {
              s=1;
              printf("%d %d\n",2*i-1,2*i+1);
          }
      }
      if(s==0) printf("empty");
      free(a);
}