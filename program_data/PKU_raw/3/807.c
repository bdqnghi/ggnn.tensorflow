int main()
{
	int n,k,i,j,tag=0,num[1000];
	cin>>n>>k;
	for(i=0;i<n;i++)
		cin>>num[i];
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(num[i]+num[j]==k)
			{
				tag=1;
				break;
			}
		}
		if(tag)
		{
			cout<<"yes";
			break;
		}
	}
	if(tag==0) cout<<"no";
	return 0;
}