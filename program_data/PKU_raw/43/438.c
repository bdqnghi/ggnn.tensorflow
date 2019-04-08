int main (  )
{
	int j,i,n,m;
	cin>>n;
	int sushu[9999];
	for(j=2;j<=n;j++)
	{
		for(i=2;i<=j;i++)
		{
			if(j%i==0)break;
		}
		if(i==j)sushu[j]=j;
	}
	for(m=2;m<=n/2;m++)
	{
		for(j=0;j<=n;j++)
		{
			if(m==sushu[j])for(i=0;i<=n;i++)
			{
				if((n-m)==sushu[i])
					cout<<sushu[j]<<" "<<sushu[i]<<endl;
			}
		}
	}
	return 0;
}
