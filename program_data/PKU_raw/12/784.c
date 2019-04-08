int main()
{
	int m,i,j,k,key,num;
	key=0;
	int count[100];
	int a[100][156];
	int result[100];
	for(i=0;i<100;i++)
	{
		for(j=0;j<16;j++)
		{
			scanf("%d",&m);
			if(m==0)
			{
				break;
			}
			else if(m==-1)
			{
				key=1;
				break;
			}
			else
			{
				a[i][j]=m;
				count[i]=j;
			}
		}
		if(key==1)
		{
			break;
		}
		num=i;
	}
	for(i=0;i<=num;i++)
		result[i]=0;
	for(i=0;i<=num;i++)
	{
		for(j=0;j<=count[i];j++)
		{
			for(k=0;k<=count[i];k++)
			{
				if(a[i][j]==a[i][k]*2)
				    result[i]=result[i]+1;
			}
		}
	}
	for(i=0;i<=num;i++)
	{
		printf("%d\n",result[i]);
	}
	return 0;
}