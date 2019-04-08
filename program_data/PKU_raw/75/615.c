//********************************
//*????????   **
//*????? 1300012845 **
//*???2013.10.30  **
//********************************
int main()//???
{
	int x[1000]={0};
	int y[1000]={0};
	int num=0,i,t,tmax=0,Nmax=0;
	int N[1000]={0};
	char p=0;
	do
	{
		cin >> x[num];
		num++;
		p=cin.get();
	}
	while (p!='\n');
	num=0;
	do
	{
		cin >> y[num];
		num++;
		p=cin.get();
	}
	while (p!='\n');
	for (i=0; i<=num; i++)
	{
		if ( y[i] > tmax )
			tmax = y[i];
	}
	for (t=0; t<=tmax; t++)
	{
		for (i=0; i<=num; i++)
		{
			if ( t< y[i] && t>= x[i] )
				N[t]++;
		}
	}
	for ( t=0; t<=tmax; t++ )
	{
		if (N[t] > Nmax )
			Nmax = N[t];
	}
	cout << num << " " << Nmax << endl;
	return 0;
}
