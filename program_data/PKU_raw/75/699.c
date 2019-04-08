///********************************
//*????????  **
//*?????? 1300012745 **
//*???2013.10.31  **
//********************************
int main()
{
	int a[1000]={0}, n=1, i, x, y, k, max;
	char ex;
	cin >> x;
	for (i=x; i<1000; i++)
		a[i]+=1;
	while ((ex=cin.get())==',')
	{
		cin>>x;
		n++;
		for (i=x;i<1000;i++)
			a[i]++;
	}
	cin >>y;
	for (i=y;i<=999;i++)
		a[i]--;
	for (k=1;k<=n-1;k++)
	{
		cin >> ex >> y;
		for (i=y;i<=999;i++)
			a[i]--;
	}
	max=a[0];
	for (i=1;i<=999;i++)
		if(a[i]>max)
			max=a[i];
	cout<<n<<" "<<max;
	cin.get();cin.get();
	return 0;
}




	
