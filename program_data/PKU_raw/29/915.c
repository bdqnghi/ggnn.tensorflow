int main()
{
	int n,i,j,k;
	int shuzu[1000];
	double sum,a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&(shuzu[i]));
	}
	for(i=0;i<n;i++)
	{
		j=shuzu[i];
		for(k=1;k<=j;k++)
		{
			if(k==1)
			{
				a=1.0*2/1;
				sum=a;
			}
			else 
			{
				a=1+1.0*1/a;
				sum=sum+a;
			}
		}
		printf("%.3lf\n",sum);
	}
		return 0;
	
}