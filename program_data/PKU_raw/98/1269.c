int main()
{
	char a[1000][40];
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;)
	{
		cout << a[i];
		int la=strlen(a[i]);
		int lc=la;
		for(j=1;j+i<n;j++)
		{
			int lb=strlen(a[i+j]);
			lc+=lb;
			if(lc<80)
			{
				cout <<" "<<a[i+j];
				lc++;
			}
			else
			{
				cout <<endl;
				break;
			}
		}
		i+=j;
	}
	return 0;
}