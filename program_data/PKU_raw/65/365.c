main()
{
      int i,j,k,n,sa=0,sb=0,a,b;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
                      scanf("%d %d",&a,&b);
                      if(a-b==-1 || a-b==2)sa++;
                      else if(a==b) {}
                      else sb++;
      }
      if(sa>sb)printf("A\n");
      else if(sa==sb)printf("Tie\n");
      else printf("B\n");
}