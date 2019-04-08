int yuesefu(int n,int m)
{
	int n1,m1,i,j;
	n1=n,m1=m;
	int a[300]={0};
	for(i=0;i<n1;i++)
	a[i]=i+1;
	i=0;
	while(n1!=0)
	{
	i=i+m1-1;
	for(j=i%n1;j<n1-1;j++)
	a[j]=a[j+1];
	i=i%n1;
	n1--;
	}
	return a[0];
}
main()
{
      int n,m,k,s=0,b[30],zhi;
      for(k=0;k<30;k++)
      {
      scanf("%d%d",&n,&m);
      if(n==0&&m==0)
      break;
      else
      {b[k]=yuesefu(n,m);
      s++;}
      }
      for(k=0;k<s;k++)
      {
      printf("%d\n",b[k]);
      }
      getchar();
      getchar();
}
