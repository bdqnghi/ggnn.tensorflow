int main()
{
	int f(int k,int m);
	int n;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
	{
		int k;
		scanf("%d",&k);
		printf("%d\n",f(k,2));
	}

	return 0;
}
int  f(int k,int m)
{   
	int i;
	int j=0;
	if(k<=m)
	{
		if(k==m){

		j=1;
		return j;
		}
		else 
		{
			j=0;
			return j;
		}
	}
	else
	{
	for(i=m;i<=k;i++)
	{
		if(k%i==0&&k/i!=1)
			j=j+f(k/i,i);
		if(k%i==0&&k/i==1)
			j=j+1;
	}
	return j;
	}

}