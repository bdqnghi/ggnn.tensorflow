
void main()
{
	int n;
	int i,j,a[100][100];
	int min,k;
	scanf("%d",&n);
	int tn,sum;
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{	for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		sum=0;tn=n;
		while(tn>1)
		{
			//guiling
			for(i=0;i<tn;i++)
			{	min=a[i][0];
				for(j=0;j<tn;j++)
				{
					if(min>a[i][j]) min=a[i][j];
				}
				for(j=0;j<tn;j++)
				{
					a[i][j]-=min;
				}
			}
			for(i=0;i<tn;i++)
				{	min=a[0][i];
				for(j=0;j<tn;j++)
				{
					if(min>a[j][i]) min=a[j][i];
				}
				for(j=0;j<tn;j++)
				{
					a[j][i]-=min;
				}
			}
		
		
			//xiaoxu
			sum+=a[1][1];
			for(i=1;i<tn-1;i++)
			{
				for(j=0;j<tn;j++)
					a[i][j]=a[i+1][j];
			}
			for(i=1;i<tn-1;i++)
			{
				for(j=0;j<tn;j++)
					a[j][i]=a[j][i+1];
			}
			tn--;
		}
		printf("%d\n",sum);
	}
}
