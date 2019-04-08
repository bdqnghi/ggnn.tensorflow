int main(int argc, char* argv[])
{
	int n,m;
	int i,j;
	double a,b,c,t,summ=0;
	int count[100]={0};
	double sum[100]={0.00};
	double x[100][100];
	double result[100];
	int number[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		number[i]=m;
		for(j=0;j<m;j++)
		{
			scanf("%lf",&x[i][j]);
			sum[i]=sum[i]+x[i][j];
			count[i]=count[i]+1;
		}
	}
	for(i=0;i<n;i++)
	{
	
		summ=0;
		a=(double)sum[i]/count[i];
		
		for(j=0;j<number[i];j++)
		{
			b=x[i][j]-a;
			c=pow(b,2);
			summ=summ+c;
		}
		t=(double)summ/count[i];
		result[i]=sqrt(t);
	}
	for(i=0;i<n;i++)
	{
		printf("%.5lf\n",result[i]);
	}

	return 0;
}
