//********************************
//*????????  **
//*?????? 1300012946 **
//*???2013.10.31  **
//********************************
int main()
{
	int x[1001]={0},y[1001]={0},a[1001]={0},j,i,k,most=0;
	char ch;
	for (i=0 ;  ; i++)
	{
		cin>>x[i];
		ch=cin.get();
		if (ch!=',')
			break;
	}
	for (i=0 ;  ; i++)
	{
		cin>>y[i];
		ch=cin.get();
		if (ch!=',')
			break;
	}
	for (j=0 ; j<=i ; j++)
	{
		for (k=x[j] ; k<y[j] ; k++)
		a[k]++;
	}
	for (j=0 ; j<1000; j++)
		most=most>a[j]?most:a[j];
	cout<<i+1<<" "<<most;
	return 0;
}