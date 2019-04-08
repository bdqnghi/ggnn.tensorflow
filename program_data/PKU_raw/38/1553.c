int main()
{
  int k,i,j,n;
  double x[100000],sum=0,aver = 0,SUM=0,AVER = 0,S = 0;
  scanf("%d",&k);
  for(i=1;i<=k;i++)
  {
     scanf("%d",&n);
     for(j=0;j<n;j++)
     {
	   scanf( "%lf", x + j );
       sum+=x[j];
      }
     aver=sum/n;
     for(j=0;j<n;j++)
     {
       SUM+=(x[j]-aver)*(x[j]-aver);
      }
     AVER=SUM/n;
     S=sqrt(AVER);
     printf("%.5lf\n",S);

	 sum = 0;
	 SUM = 0;
	 
  }
  return 0;
}
