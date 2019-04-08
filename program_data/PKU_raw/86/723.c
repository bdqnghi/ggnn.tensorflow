
int main()
{
	int population,m;
	int num[10];
	int i,j;
	int time=0,duandian=1,sum=0;
	scanf("%d",&population);

	for(i=0;i<population;i++)
	{
		scanf("%d",&m);
		if(m==0)
		{
			printf("60\n");
			continue;
		}
		for(j=0;j<m;j++)
		{
			scanf("%d",&num[j]);
		}
		time=num[m-1]+3*m;
		if(time<=60)
		{
			sum=60-3*m;
		}
		else
		{
			time=num[0]+3;
			for(j=1;j<m;j++)
			{
				time=time-num[j-1]+num[j];
				if(time>60)
				{
					sum=60-3*duandian;
					break;
				}
				time+=3;
				if(time>=60)
				{
					sum=time-3-3*duandian;
					break;
				}
				duandian++;
			}
		}
		printf("%d\n",sum);
		sum=0;
		time=0;
		duandian=1;
	}
	return 0;
}