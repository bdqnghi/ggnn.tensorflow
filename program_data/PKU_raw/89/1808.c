main()
{
      int a[20000],b[20000],c[20000]={0},d[20000]={0},t=0,i,n;
      scanf("%d",&n);
      for(i=0;;i++)
      {
          scanf("%d %d",&a[i],&b[i]);
          if(a[i]==0&&b[i]==0)
             break;
      }
      for(i=0;;i++)
      {
           if(a[i]==0&&b[i]==0)
           break;
           else
           {
           c[a[i]]++;
           d[b[i]]++;
           }
      }
      for(i=0;i<n;i++)
      {
          if(c[i]==0&&d[i]==n-1)
           {
                 printf("%d",i);
                 t++;
           }
      }
      if(t==0)
      printf("NOT FOUND\n");
      getchar();
      getchar();
}