int answer(int a , int b)
{
	if(a==b)
	{
		return a;
	}
	else if(a>b)
	{
		return answer(a/2,b);
	}
	else
	{
		return answer(a,b/2);
	}
}
int main()
{
	int x,y;
	cin>>x>>y;
	cout<<answer(x,y)<<endl;
	return 0;
}