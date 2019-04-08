

int main()
{   int a;
    scanf("%d",&a);
	int i,j,k;
	int geshu[100];
	double shu[100];
	double sum,ave,sss,ans[100];
	for(i=0;i<a;i++)
	{   sum=0.0;
	    ave=0.0;
		sss=0.0;
		scanf("%d",&geshu[i]);
		for(j=0;j<geshu[i];j++)
		{
			scanf("%lf",&shu[j]);
			sum=sum+shu[j];
		}
		ave=sum/geshu[i];
		for(k=0;k<geshu[i];k++)
		{
			sss=sss+(shu[k]-ave)*(shu[k]-ave);
		}
		ans[i]=(sqrt(sss/geshu[i]));

	}
	for(i=0;i<a;i++)
	{
		printf("%.5lf\n",ans[i]);
	}



	return 0;
}