main()
{
      int i,j,k,n;
      scanf("%d",&n);
      int*p=(int*)malloc(n*sizeof(int));
      int*q=(int*)malloc(n*sizeof(int));
      double*r=(double*)malloc(n*sizeof(double));
      for(i=0;i<n;i++)
      {
         scanf("%d %d",&p[i],&q[i]);
         r[i]=(double)q[i]/p[i];
      }
      for(i=1;i<n;i++)
      {
         if(r[i]-r[0]>0.05)  printf("better\n");
         else if(r[0]-r[i]>0.05) printf("worse\n");
         else printf("same\n");
      }
}
