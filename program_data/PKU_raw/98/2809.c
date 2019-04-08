

int main()
{
	int n;
	char c[41];
	int s=0;
	cin>>n;
	int y=0;
	for(int i=0;i<n;i++)
	{
		
		int f=0;
		cin>>c;
		s+=strlen(c)+1;
		if(s>81)
		{
			cout<<endl;
			s=0;
			s+=strlen(c)+1;
			f=1;
		}
		else
			if(y!=0)
			cout<<" ";
		y=1;
		cout<<c;
	}
	return 0;
}