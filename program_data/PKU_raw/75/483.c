
int a[1000];
int b[1000];


int main()
{
	int n;
	char ch;
	//??
	int al=0;
	while(cin>>n)
	{
		a[al++]=n;
		cin.get(ch);
		if(ch=='\n')
			break;
	}
	//??
	int bl=0;
	while(cin>>n)
	{
		b[bl++]=n;
		cin.get(ch);
		if(ch=='\n')
			break;
	}
	//??
	int len=bl;
	//
	int max=0;
	for(int i=0; i < 999; i++)
	{
		int cnt=0;
		for(int j=0; j < len; j++)
		{
			if(i >= a[j] && i < b[j])
				cnt++;
		}
		if(cnt > max)
			max=cnt;
	}
	cout<<len<<" "<<max<<endl;

	return 0;
}