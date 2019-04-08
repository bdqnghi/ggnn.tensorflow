int main()
{
	int i=0,j=0,k=0,shuzu[100][100],hang=0,lie=0,zu=0,sum=0;
	scanf("%d",&zu);
	for(i=0;i<zu;i++)
	{
		scanf("%d%d",&hang,&lie);
		sum=0;
		for(j=0;j<hang;j++)
		{
			for(k=0;k<lie;k++)
			{
				scanf("%d",&shuzu[j][k]);
			}
		}
		for(k=0;k<lie;k++)
		{
			sum=sum+shuzu[0][k];
		}
		if(hang>1)
		{
			for(k=0;k<lie;k++)
			{
				sum=sum+shuzu[hang-1][k];
			}
		}
		if(hang>2)
		{
			for(k=1;k<hang-1;k++)
			{
				sum=sum+shuzu[k][0];
			}
		}
		if(lie>1&&hang>2)
		{
			for(k=1;k<hang-1;k++)
			{
				sum=sum+shuzu[k][lie-1];
			}
		}
		printf("%d\n",sum);
	
	}
	return 0;
}





