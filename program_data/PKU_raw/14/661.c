main()
{
      int i,j,k,m=0,n,e,f,g,h;
      int *a,*b,*c;
      scanf("%d",&n);
      a=(int*)malloc(n*sizeof(int));
      b=(int*)malloc(n*sizeof(int));
      c=(int*)malloc(n*sizeof(int));
      for(i=0;i<n;i++)
      scanf("%d %d %d",&a[i],&b[i],&c[i]);
      for(i=0;i<n;i++)
      a[i]=b[i]+c[i];
      for(i=0;i<n;i++)
      b[i]=a[i];
      for(i=0;i<n;i++)
      {
                      if(a[i]>m)
                      m=a[i];
                      }
      for(i=0;i<n;i++)
      {
                      if(b[i]==m)
                      break;
                      }
      printf("%d %d\n",i+1,m);
      b[i]=0;
      a[i]=0;
      m=0;
      for(i=0;i<n;i++)
      {
                      if(b[i]>m)
                      m=b[i];
                      }
      for(i=0;i<n;i++)
      {
                      if(a[i]==m)
                      break;
                      }
      printf("%d %d\n",i+1,m);
      a[i]=0;
      b[i]=0;
      m=0;
      for(i=0;i<n;i++)
      {
                      if(b[i]>m)
                      m=b[i];
                      }
      for(i=0;i<n;i++)
      {
                      if(a[i]==m)
                      break;
                      }
      
      printf("%d %d\n",i+1,m);
     free(a);
     a=0;
     free(b);
     b=0;
     free(c);
     c=0;
     
}
