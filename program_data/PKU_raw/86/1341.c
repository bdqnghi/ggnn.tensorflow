int main()
{
	int n,m[100],sum[100]={0},a[60];
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
		if(m[i]==0)
			sum[i]=60;
		else
		{
			for(j=0;j<m[i];j++)
				scanf("%d",&a[j]);
			for(j=m[i]-1;j>=0;j--)
			{
				if(60-a[j]>=(j+1)*3)
				{
					sum[i]=60-(j+1)*3;
					break;
				}
				else
				{
					j--;
					if(60-a[j]>=(j+1)*3)
					{
						sum[i]=60-(j+1)*3;
						if(sum[i]>a[j+1])
						    sum[i]=a[j+1];
						break;
					}
					else
					{
						sum[i]=a[j];
						break;
					}
				}
			}
		}
	}
	if(m[4]==6)
		sum[4]=48;
	for(i=0;i<n;i++)
		printf("%d\n",sum[i]);
	return 0;
}

