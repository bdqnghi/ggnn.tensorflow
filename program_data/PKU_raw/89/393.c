main()
{
      int n,i,k,l;
      int d=1;
      int a[100000];
      int b[100000];
      int c[100000];
      scanf("%d",&n);
      for(i=0;i<n;i++)
      c[i]=0; 
      for(i=1;;i++)
      {
      scanf("%d %d",&a[i],&b[i]);
      if(a[i]==0&&b[i]==0)
      break;
      l=a[i];
      k=b[i];
      c[l]=-1;
      if(c[k]>=0)
      c[k]=c[k]+1;
      }
      for(i=0;i<n;i++)
      {
      if(c[i]==n-1)
      {
                 printf("%d\n",i);
                 d=0;
                break;
                }
      }
      if(d==1)
      printf("NOT FOUND\n");
      }
