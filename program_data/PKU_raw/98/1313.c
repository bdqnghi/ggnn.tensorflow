int main()
{
	char danci[300][40];
	int n,i=0,j=0,k=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>danci[i];
	for(i=j;i<n;i++)
	{
		int a=0;
		for(j=i;j<n;j++)
		{
			a=a+strlen(danci[j])+1;
			if(a>81)
				break;
		}
		if(a<=81)
			for(int h=i;h<n;h++)
			{
				if(h==i)
					cout<<danci[h];
				else
					cout<<" "<<danci[h];
			}
		else
		{
			for(int h=i;h<j;h++)
			{
				if(h==i)
					cout<<danci[h];
				else
					cout<<" "<<danci[h];
			}
			cout<<endl;
		}
		i=j-1;

	}
	return 0;



}