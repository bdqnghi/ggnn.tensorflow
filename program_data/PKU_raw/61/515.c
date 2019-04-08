
int main()
{
	int n,F[25];
	int i;
	for(i=1;i<=20;i++)
	{
		if(i==1 || i==2)
			F[i] = 1;
		else
			F[i] = F[i-1]+F[i-2];
	}
	cin>>n;
	while(n>0)
	{
		n--;
		int a;
		cin>>a;
		cout<<F[a]<<endl;
	}
	return 0;
}