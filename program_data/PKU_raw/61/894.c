main()
{
      int b[20]={1,1},m,n,i;
      
      for(i=2;i<20;i++)
      b[i]=b[i-1]+b[i-2];
      scanf("%d",&n);
      
      for(i=0;i<n;i++)
      {
          scanf("%d",&m);
          printf("%d\n",b[m-1]);
      }
      getchar();
      getchar();
}
