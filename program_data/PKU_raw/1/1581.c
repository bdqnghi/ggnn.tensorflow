int Digui(int a,int min)
{
	int i,result=1;
	if(a<min)
	{
		return 0;
	}
	for(i=min;i<a;i++)
	{
		if(a%i==0)
		{
			result+=Digui(a/i,i);
		}
	}
	return(result);
}
int main()
{
	int a[1000],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",Digui(a[i],2));
	}
	return 0;
}


