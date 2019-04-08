
int people[500000]={0};
int main()
{
	int n;

	int a,b;

	cin>>n;
	while(cin>>a>>b)
	{
		people[a]=-1;
		if (people[b]>=0)
		{
			people[b]++;
			if (people[b]==n-1)
			{
				cout<<b<<endl;
				return 0;
			}

		}
	}

	cout<<"NOT FOUND"<<endl;

	

}

/****************


/****************/