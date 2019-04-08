
int a[20010];

void main()
{
	int n,i,tmp,k,ii=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&tmp);
		int j;
		int flag = 0;
		for(j=0;j<i;j++)
		{
			if(a[j]==tmp)
			{
				flag = 1;
			}
		}
		if(flag == 0)
		{
			a[ii] = tmp;
			ii++;
			//printf("%d\n",tmp);
		}
		
	}
	for(k=0;k<ii-1;k++)
	{
		printf("%d ",a[k]);
	}
	printf("%d",a[ii-1]);
	
}
