struct student
{
       int i;
       int j; 
       int k;
       }; 
main()
{
      int n;
      scanf("%d",&n);
      struct student c[n+10];
      int m1=1,m2=1,m3=1;
      for(int m=1;m<=n;m++)
     { scanf("%d %d %d",&c[m].i,&c[m].j,&c[m].k);
      if((c[m].j+c[m].k)>(c[m1].j+c[m1].k))
      {m3=m2;m2=m1;m1=m;}
      else if((c[m].j+c[m].k)>(c[m2].j+c[m2].k))
     { m3=m2;m2=m;}
      else if((c[m].j+c[m].k)>(c[m3].j+c[m3].k))
      m3=m;}
      printf("%d %d\n",c[m1].i,c[m1].j+c[m1].k);
      printf("%d %d\n",c[m2].i,c[m2].j+c[m2].k);
      printf("%d %d\n",c[m3].i,c[m3].j+c[m3].k);
      getchar();getchar();getchar();}
