main()
{
  int n,m,k,i,t,c=0;
  scanf("%d",&n);
  for(m=1;m<=n-2;m=m+2)
  {
    k=sqrt(m);
    for(i=2;i<k+1;i=i+1){if(m%i==0)break;}
    if(i>=k+1)
    {
      t=sqrt(m+2);
      for(i=2;i<t+1;i++){if((m+2)%i==0)break;}
      if(i>=t+1&&m!=1)
      {printf("%d %d\n",m,m+2);c++;}
    }
  }
  if(c==0)printf("empty");
}
