
int main()
{
	int i,k,j,al=1,N,zhong;
	int a[200]={4,2,0,1};
	int b[200]={0};
	
	cin>>N;
	if(N<=10)
	{for(i=1;i<=N;i++)
	al=al*2;
	cout<<al<<endl;
		;return 0;}
	for(i=1;i<=N-10;i++)
	{
		zhong=0;
		for(j=0;j<=199;j++)
		{
			b[j]=(a[j]*2)%10+zhong;
			zhong=(a[j]*2)/10;
		}
		for(j=0;j<=199;j++)
			a[j]=b[j];
	}
	for(i=199;b[i]==0;i--);
	for(j=i;j>=0;j--)
		cout<<b[j];
	cout<<endl;
	return 0;
}








