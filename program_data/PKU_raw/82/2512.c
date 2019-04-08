int main()
{
	int n,x,y,i,j,a=0,b[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x>>y;
		if(x>=90&&x<=140&&y>=60&&y<=90) {a=a+1; b[i]=a;}
		else {b[i]=a; a=0;}
	}
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{if(b[i]<b[j]) swap(b[i],b[j]);}
	cout<<b[0]<<endl;
	return 0;
}