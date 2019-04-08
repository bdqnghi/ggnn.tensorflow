int reverse(int num)
{
      int a,h,i,j,k,o=0,s=1,t=10,NUM=0,n[N];
      if(num<0)
      {
           num=0-num;
           o=1;
      }
      for(h=2;h<=N+2;h++)
      {
           s=s*10;
           if(num/s==0)
           break;
      }
      for(i=0;i<N;i++)
      {
           a=num%t;
           num=num/t;
           n[i]=a;
      }
      t=1;
      for(j=2;j<h;j++)
      {
           t=t*10;
      }
      for(k=0;k<N;k++)
      {
           NUM=NUM+t*n[k];
           t=t/10;
      }
      if(o==1)
      NUM=0-NUM;
      return NUM;
}
main()
{
      int num,i;
      for(i=1;i<=6;i++)
      {
           scanf("%d",&num);
           printf("%d\n",reverse(num));
      }
}