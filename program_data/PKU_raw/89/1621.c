int a[1000000];
int main()
{
	int n;
	int x,y;
	cin>>n;
	while(1)
	{
		cin>>x>>y;
		if(x==0 && y==0)break;
		a[x]=-1;
		if(a[y]>=0)a[y]++;
	}
	int flag=false;
	for(int i=0;i<n;i++)if(a[i]==n-1){cout<<i<<endl;flag=true;break;}
	if(flag==false)cout<<"NOT FOUND"<<endl;
	return 0;
}