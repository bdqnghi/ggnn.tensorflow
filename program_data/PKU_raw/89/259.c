int know[100000]={0};
int be_known[100000]={0};
int main()
{
	int n;
	scanf("%d",&n);
	while(1)
	{
		int temp1=0,temp2=0;
		scanf("%d%d",&temp1,&temp2);
		if((temp1==0)&&(temp2==0)) break;
		else
		{
			know[temp1]++;
			be_known[temp2]++;
		}
	}
	int flag =-1;
	for(int i=0;i<n;i++)
	{
		if((know[i]!=n-1)&&(be_known[i]==n-1))
		{
			flag=i;
			break;
		}
	}
	if(flag!= -1)
	{
		printf("%d",flag);
	}
	else
	{
		printf("NOT FOUND");
	}
	return 0;
}