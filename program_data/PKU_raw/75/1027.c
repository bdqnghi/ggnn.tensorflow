int main()
{
	int n[1000][2],i=0,j=0,count=0,m[1000]={0},max=0,flag=0,t=0;
	do
	{
		cin>>n[i][0];
		m[n[i][0]]++;
		i++;
		count++;
	}
	while(cin.get()==',');
	i=0;
	do
	{
		cin>>n[i][1];
		m[n[i][1]]=m[n[i][1]]-1;
		i++;
	}
	while(cin.get()==',');
	for(i=0;i<1000;i++)
	{
		if(m[i]!=0)
		{
			if(flag==0)
			{
				t=m[i];
				flag=1;
			}
			else
			{
				m[i]+=t;
				t=m[i];
			}
		}
		else
			continue;
		if(max<m[i])
		{
			max=m[i];
		}
	}
	cout<<count<<' '<<max<<endl;
	return 0;
}





	

