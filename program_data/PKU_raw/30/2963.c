
main()
{
      int i,j,sum=0,x;
      scanf("%d",&x);
      for(i=0;i<=x;i++)
      {
      sum=sum+i*i;
      }
      //printf("%d\n",sum);
      for(j=0;j<=9;j++)
      {
      if((j+70)<=x&&j!=7&&j!=0)
      sum=sum-(j+70)*(j+70);
      if((7+10*j)<x&&j!=7&&j!=0)
      sum=sum-(7+10*j)*(7+10*j);
      }
      for(i=1;7*i<=x;i++)
      sum=sum-49*i*i;
      printf("%d\n",sum);
      getchar();
      getchar();
}
