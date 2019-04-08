int main()
{
	int n,i,j,k,m,b,c,d,e,f,x;
	cin >> n;             
	int a[1000000];
	for(i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	cin >> x;      
	k = 0;
	for(j = 1;j <= n,k < 1;j++)
	{
		if(a[j] != x)
		{
			cout<< a[j];
			k++;
		}
	}
	for(m = j;m <= n;m++)
		if(a[m] != x)
			cout << " " <<a[m];
	return 0;
}