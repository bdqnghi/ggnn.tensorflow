
int main()
{
	int n;
	scanf("%d",&n);
	int geshu[128],fenzi[512],fenmu[512];
	double a[512];
	fenzi[0]=2,fenmu[0]=1;
	a[0]=(double)fenzi[0]/fenmu[0];
	fenzi[1]=3,fenmu[1]=2;
	a[1]=(double)fenzi[1]/fenmu[1];
	double sum=a[0];
	double sum1=a[0]+a[1];
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&geshu[i]);
			if(geshu[i]==1)
			{
				printf("%.3lf\n",sum);
				continue;
			}
			else if(geshu[i]==2)
			{
				sum+=a[1];
				printf("%.3lf\n",sum);
				continue;
			}
		for(j=2;j<geshu[i];j++)
		{
			
				a[j]=(double)(fenzi[j-2]+fenzi[j-1])/(fenmu[j-2]+fenmu[j-1]);
				fenzi[j]=fenzi[j-2]+fenzi[j-1];
				fenmu[j]=fenmu[j-2]+fenmu[j-1];
				sum1+=a[j];
		
		}
		if(j>=geshu[i])
		{
			printf("%.3lf\n",sum1);
			sum1=a[0]+a[1];
		}
	}
	return 0;
}
