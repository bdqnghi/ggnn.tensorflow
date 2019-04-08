int main()
{
	int a[1000], b[1000], sum=0, c[2000],max;
	char ch;
	for(int i=0;;i++)
	{
		cin >> a[i];
		sum++;
		ch=cin.get();
		if(ch=='\n')
			break;
		
	}
	for(int i=0;i<2000;i++)
		c[i]=0;
	for(int j=0;j<sum;j++)
	{
		cin >> b[j];
		ch = cin.get();
		for(int k=a[j];k<b[j];k++)
			c[k]++;
	}
	
	max=c[0];
	for ( int i = 0; i < 2000; i++ )

		if ( max < c[i] )

			max = c[i];
	





	cout << sum << " " << max << endl;

	return 0;
}