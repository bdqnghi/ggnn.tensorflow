int main()
{
	int x,y,i;
	int a[20],b[20];
	cin>>x>>y;
	for(i=0;i<x;i++)
	{cin>>a[i];}
	for(i=0;i<y;i++)
	{cin>>b[i];}//??????
	sort(a,a+x);//?a????
	sort(b,b+y);//?b????
	cout<<a[0];
	for(i=1;i<x;i++)
	{cout<<" "<<a[i];}
	for(i=0;i<y;i++)
	{cout<<" "<<b[i];}//???????
	return 0;
}