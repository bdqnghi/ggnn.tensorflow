int main()
{
	int n,i,j;
	char a[50][33];
	cin >> n;
	cin.ignore ();
	for(i=0 ; i< n ; i++)
		cin >> a[i];
	for(i=0 ; i< n ; i++)
	{
		j = strlen(a[i]);
		if(a[i][j-2] == 'e')
		{
			if(a[i][j-1] == 'r')
				a[i][j-2] = '\0';
		}
		if(a[i][j-2] == 'l')
		{
			if(a[i][j-1] == 'y')
				a[i][j-2] = '\0';
		}
		if(a[i][j-3] == 'i')
		{
			if(a[i][j-2] == 'n' &&
				a[i][j-1] == 'g')
				a[i][j-3] = '\0';
		}
		cout<<a[i]<<endl;
	}
	return 0;
}