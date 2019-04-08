int main()
{
	int n;
	int rope[Number_children][Number];
	int i,j,sum,time,tmp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<Number;j++)
			rope[i][j]=0;
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&rope[i][0]);
		for(j=1;j<1+rope[i][0];j++)
			scanf("%d",&rope[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=1,sum=0,time=0,tmp=1;(time<=60)&&(j<=rope[i][0]);j++)
		{
			if((rope[i][1]==0)||(rope[i][1]>=60))
			{
				printf("%d\n",60);
				tmp=0;
				break;
			}
			sum=rope[i][j];
			time=rope[i][j]+3*j;
		}
		if(tmp==0)
			continue;
		else
		{
		if(time<60)
		{
			sum=sum+60-time;
			printf("%d\n",sum);
			continue;
		}
		if(time>63)
		{
		sum=60-(j-2)*3;
		printf("%d\n",sum);
		continue;
		}
		sum=60-(j-2)*3-(3-(time-60));
		printf("%d\n",sum);
		}
	}
	return 0;
}
