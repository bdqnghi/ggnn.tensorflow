int main()
{
  int k;
  scanf("%d",&k);
  int i;
  for(i=0;i<k;i++)
  {
	  int n;
	  double c[100];
	  scanf("%d",&n);
	  int j;
	  for(j=0;j<n;j++)
	  {
	    scanf("%lf",&c[j]);
	  }
	  double aver,sum=0;
	  for(j=0;j<n;j++)
	  {
	    sum=sum+c[j];
	  }
	  aver=sum/n;
	  double x[100]={0};
      for(j=0;j<n;j++)
	  {
	    x[j]=(c[j]-aver)*(c[j]-aver);
	  }
	  double SUM=0,AVER;
	  for(j=0;j<n;j++)
	  {
	    SUM=SUM+x[j];
	  }
	  AVER=SUM/n;
      double average;
	  average=sqrt(AVER);
	  printf("%.5f\n",average);
  }
}