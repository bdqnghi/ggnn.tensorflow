int main()
{
	int tu[100][100]={0};
	int i,n,k,count=0,m=0,first=0,l=0,h=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(k=0;k<n;k++)
		{
			cin>>tu[i][k];
			if(tu[i][k]==0&&first==0)
			{
				l++;
			}
		}
		if(l>0)
		{
			first=1;
		}
	}
	for(i=0;i<n;i++)
	{
		for(k=0;k<n;k++)
		{
			if(tu[i][k]==0)
			{
				count++;
			}
		}
	}
	h=(count-2*l)/2;
	m=(l-2)*h;
	cout<<m<<endl;
    return 0;
}