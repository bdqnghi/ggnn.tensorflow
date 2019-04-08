main()
{
      int n;
      scanf("%d",&n);
      int m=0;
      int b1[100000],c1[100000];
      int b2[n],c2[n];
      int i;
      for(i=0;i<100000;i++)
      {
                     scanf("%d %d",&b1[i],&c1[i]);
                     m++;
                     if(b1[i]==0&&(c1[i]==0))
                     break;
                     
      }
      int d,e;
      for(d=0;d<n;d++)
      {
                       b2[d]=0;
                       for(e=0;e<m-1;e++)
                       {
                                       if(d==b1[e])
                                       b2[d]++;
                       }
      }
      int f,g;
      for(f=0;f<n;f++)
      {
                       c2[f]=0;
                       for(g=0;g<m-1;g++)
                       {
                                       if(f==c1[g])
                                       c2[f]++;
                       }
      }
      int h;
      int count=0;
      for(h=0;h<n;h++)
      {
                       if((b2[h]==0)&&(c2[h]==n-1))
                       {
                                                   printf("%d\n",h);
                       }
                       if((b2[h]!=0)||(c2[h]!=n-1))
                       {
                                                   count++;
                       }
      }
      if(count==n)
      printf("NOT FOUND");
}