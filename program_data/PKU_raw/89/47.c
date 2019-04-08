int main()
{
	int p[10001]={0},q[10001]={0};
	int n,a,b,i;
	cin>>n;
	for(i=0;;i++)
	{
		cin>>a>>b;
		if(a==0 && b==0) break;
		p[b]++;
		q[a]=1;
	}
	for(i=0;i<n;i++)
	{
		if(p[i]==n-1 && q[i]==0)
		{
			cout<<i<<endl;
			break;
		}
	}
	if(i==n) cout<<"NOT FOUND"<<endl;
return 0;
}