main()
{
      int n,*p,i,j,a,b;
      scanf("%d",&n);
      p=(int *)malloc(n*sizeof(int));
      for(i=0;i<n;i++) p[i]=0;
      scanf("%d%d",&a,&b);
      while(a!=0 || b!=0)
      {
            p[b]++;
            scanf("%d%d",&a,&b);
      }
      for(i=0;i<n;i++) if(p[i]==n-1) {printf("%d",i);break;}
      if(i==n) printf("NOT FOUND");
}
