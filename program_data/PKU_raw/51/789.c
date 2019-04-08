int main()
{
	int n,x,i,j,again,max;
	char a[501];
	scanf("%d",&n);
	scanf("%s",a);
	x=strlen(a);
	int sum=x+1-n;
	int number[sum];
	char temp[x+1-n][n+1];
	for(i=0;i<x+1-n;i++)
	{
		for(j=0;j<n;j++)
		{
			temp[i][j]=a[i+j];
		}
		temp[i][n]='\0';
	}
	for(i=0;i<sum;i++)
		number[i]=0;
	number[0]=1;
	for(i=1;i<sum;i++)
	{
		again=0;
		for(j=0;j<i;j++)
		{
			if(strcmp(temp[i],temp[j])==0)
			{
				number[j]++;
				again=1;
				break;
			}
		}
		if(again==0)
			number[i]++;
	}
	max=number[0];
	for(i=1;i<sum;i++)
	{
		if(number[i]>max)
			max=number[i];
	}
	if(max!=1)
	{
		printf("%d\n",max);
		for(i=0;i<sum;i++)
		{
			if(number[i]==max)
				printf("%s\n",temp[i]);
		}
	}
	else
		printf("NO\n");
	return 0;
}
