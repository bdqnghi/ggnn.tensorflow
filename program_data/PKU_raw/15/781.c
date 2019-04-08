
int main()
{
	int n[1000][1000]={0};
	int a;
	scanf("%d",&a);
	int i,j;
	int zuoi=0,zuoj=0,youi=0,youj=0,jump1=0,jump2=0;
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			scanf("%d",&n[i][j]);
		}
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			if(n[i][j]==0)
			{
				zuoi=i;
				zuoj=j;
				jump2=1;
				break;
			}
		}
		if(jump2==1)
			break;
	}
	for(i=a-1;i>=0;i--)
	{
		for(j=a-1;j>=0;j--)
		{
			if(n[i][j]==0)
			{
				youi=i;
				youj=j;
				jump1=1;
				break;
			}
		}
		if(jump1==1)
			break;
	}
	int num;
	if(youi==zuoi||youj==zuoj)
	{
		num=0;
	}
	else
	{
		num=(youi-zuoi-1)*(youj-zuoj-1);
	}
	printf("%d",num);
	return 0;
}
