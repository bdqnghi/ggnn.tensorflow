int main()
{
	int t,i,j,k,flag;
	char a[100000];
	cin>>t;
	for(i=0;i<=t;i++)
	{
		cin.getline(a,100000);
		int len=strlen(a);
		for(j=0;j<len;j++)
		{
			flag=1;
			for(k=0;k<len;k++)
				if(a[j]==a[k]&&k!=j)
				{
					flag=0;
					break;
				}
			if(flag==1)
			{
				cout<<a[j]<<endl;
				break;
			}
			if(flag==0)
				continue;
		
		}
		if(flag==0)
			cout<<"no"<<endl;
	}
	return 0;
}
