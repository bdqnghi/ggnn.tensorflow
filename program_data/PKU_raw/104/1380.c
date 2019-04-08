int point(int num)
{
	if(num==1)
	{
		return 1;
	}
	else
	{
		if(num%2==0)
		{
			return num/2;
		}
		else
		{
			return (num-1)/2;
		}
	}
}
int main()
{
	int point(int num);
	int x,y;
	scanf("%d %d",&x,&y);
	int X[11]={x},Y[11]={y},i,j;
	for(i=1;i<11;i++)
	{
		X[i]=point(X[i-1]);
		Y[i]=point(Y[i-1]);
	}
	for(i=0;i<11;i++)
	{
		int signal=0;
		for(j=0;j<11;j++)
		{
			if(X[i]==Y[j])
			{
				printf("%d\n",X[i]);
				signal=1;
				break;
			}
		}
		if(signal==1)
		{
			break;
		}
	}
	return 0;
}
