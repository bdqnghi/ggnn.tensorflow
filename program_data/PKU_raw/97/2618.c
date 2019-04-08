int main()
{
	int a[6]={100,50,20,10,5,1};
	int b[6];
	int n,i;
	cin >> n,i;
    b[0]=n/100;
	for (i=1;i<=5;i++)
	{
		n = n-b[i-1]*a[i-1] ;
	    b[i] = n/a[i];
	}
	for (i=0;i<=5;i++)
		cout << b[i]<<endl;
	return 0;
}