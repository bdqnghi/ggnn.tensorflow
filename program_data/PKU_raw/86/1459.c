int main()
{
	int n,sum,t;
	int m[20];
	int a[20][20];
	int i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
		for(j=0;j<m[i];j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		sum=0;
		t=0;
		for(j=0;j<m[i];j++)
		{
			if(j==0)
			{
				if(t+a[i][j]-sum<=60)
				{
					t=t+a[i][j]-sum;
					sum=a[i][j];
				}
				else if(t+a[i][j]-sum>60)
				{
					sum=60;
					t=60;
					break;
				}
			}
			else
			{
				if(t+3+a[i][j]-sum<=60)
				{
					t=t+3+a[i][j]-sum;
					sum=a[i][j];
				}
				else if(t+3<=60&&t+3+a[i][j]-sum>60)
				{
					sum=sum+60-(t+3);
					t=60;
					break;
				}
				else if(t+3>60)
				{
					t=60;
					break;
				}
			}
		}
		if(j==0)
		{
			sum=60;
		}
		else if(t+3<60)
		{
			sum=sum+60-(t+3);
		}
		printf("%d\n",sum);
	}
	return 0;
}