
int main(int argc, char* argv[])
{
	double a[100],b[100],sum=0;
	int m,n;
	a[0]=2;
	a[1]=3;
	b[0]=1;
	b[1]=2;
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		scanf("%d",&n);
		if(n==1)
		{
			sum=2.000;
		}
		else if(n==2)
		{
			sum=3.500;
		}
		else
		{
			sum=3.500;
			for(int q=2;q<n;q++)
			{
				a[q]=a[q-1]+a[q-2];
				b[q]=b[q-1]+b[q-2];
				sum+=a[q]/b[q];
			}
		}
		printf("%.3lf\n",sum);
	}
        


	return 0;
}
