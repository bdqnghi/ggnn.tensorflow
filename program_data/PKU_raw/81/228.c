int jzhh(int shuzu[5][5],int n,int m);
int main()
{
	int shuzu1[5][5],x,y,j,k;
	for(j=0;j<5;j++)
	{
		for(k=0;k<5;k++)
		{
			scanf("%d",&shuzu1[j][k]);
		}
	}
	scanf("%d %d",&x,&y);
	if(jzhh(shuzu1,x,y)==0)
	{
		printf("error");
	}else
	{
		for(j=0;j<5;j++)
		{
			for(k=0;k<5;k++)
			{
				if(k==4)
				{
					printf("%d\n",shuzu1[j][k]);
				}else
				{
					printf("%d ",shuzu1[j][k]);
				}				
			}
		}
	}
	return 0;
}
int jzhh(int shuzu[5][5],int n,int m)
{
	int e,i;
	if((m<=4)&&(n<=4))
	{
		for(i=0;i<5;i++)
		{
			e=shuzu[m][i];
			shuzu[m][i]=shuzu[n][i];
			shuzu[n][i]=e;
		}
		return 1;
	}else
	{
		return 0;
	}
}