int feibo(int a);
int main()
{
	int k,sz[100],i,szresult[100];
	sz[100]=0;
	scanf("%d",&k);
	for(i=0;i<=k-1;i++)
	{
		scanf("%d",&sz[i]);
	}
	for(i=0;i<=k-1;i++)
	{
		szresult[i]=feibo(sz[i]);
	}
	for(i=0;i<=k-1;i++)
	{
		printf("%d\n",szresult[i]);
	}
	return 0;
}
int feibo(int a)
{
	int result,i,result1,result2;
	if(a<=2)
	{
		result=1;
		return result;
	}
	else{
		result1=1;
		result2=1;
		for(i=1;i<=a-2;i++)
		{
			result=result1+result2;
			result1=result2;
			result2=result;
		}
		return result;
	}
}