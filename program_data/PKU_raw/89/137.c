

int main()
{
	int n,relation[10000]={0},i,ans=-1;
	cin>>n;
	int a , b;
	while(cin>>a>>b)
	{
		if(a==0 && b==0) break;
		relation[a]++;
		relation[b]++;
	}
	for(i=0;i<n;i++)
	{
		if(relation[i]==n-1) ans=i;
	}
	if(ans==-1) cout<<"NOT FOUND"<<endl;
	else cout<<ans<<endl;
	return 0;
}