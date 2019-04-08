
struct person
{
	int knownum;
	int welknownnum;
}p[100000];

int main()
{
	int n=0;
	cin>>n;
	int i=0;
	for( i=0; i<n; i++ )
	{
		p[i].knownum=0;
		p[i].welknownnum=0;
	}
	int j=0;
	while(cin>>i>>j)
	{
		if( i==0 && j==0 )
		{
			break;
		}
		else
		{
			p[i].knownum++;
			p[j].welknownnum++;
		}
	}
	for( i=0; i<n; i++ )
	{
		if( p[i].knownum == 0 && p[i].welknownnum == n-1 )
		{
			cout<<i<<endl;
			break;
		}
	}
	if( i==n )
	{
		cout<<"NOT FOUND"<<endl;
	}
}
