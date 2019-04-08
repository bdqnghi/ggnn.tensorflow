int main ()
{
	int n,a,b,g=0,i;
	int c[100000]={0},d[10000]={0};
	int *p=c,*q=d;
	cin>>n;
	for(;;)
	{
		cin>>a>>b;
		if(a==0&&b==0)
			break;
		else
		{
			c[b]++;
			d[a]=-1;
		}
	}
	for(i=0;i<n;i++)
		if(c[i]==n-1&&d[i]==0)
		{
			cout<<i;
			g=1;
			break;
		}
	if(g==0)
		cout<<"NOT FOUND"<<endl;
	return 0;
}