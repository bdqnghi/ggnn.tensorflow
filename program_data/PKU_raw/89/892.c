int main()
{
	int man[2][1000000]={0},a,b,n,flag=0,*p,*q;
	p=man[0];
	q=man[1];
	cin>>n;
	while(cin>>a)
	{
		cin>>b;
		if(a==0&&b==0)
			break;
		man[0][a]++;
		man[1][b]++;
	}
	for (int i=0;i<n;i++)
	{
		if(*p==0&&*q==n-1)
		{
			cout<<i<<endl;
			flag=1;
		}
		p++;
		q++;
	}
	if (flag==0)
		cout<<"NOT FOUND"<<endl;
	return 0;
}