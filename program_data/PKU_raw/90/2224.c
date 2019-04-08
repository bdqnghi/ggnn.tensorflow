//?????
int sum(int a,int b)//????
{
	int x;
	if (a==0||a==1||b==1)//sum(0,b)=sum(1,b)=sum(a,1)=0
	{
		return 1;
	}
	else if (a<b)//??sum(a-b,b)????????????
	{
		return sum(a,b-1);
	}
	else
	{
		x=sum(a,b-1)+sum(a-b,b);
		return x;
	}
}
int main()
{
	int t,m,n,i;
	cin>>t;
	for (i=1;i<=t;i++)
	{
		cin>>m>>n;
		cout<<sum(m,n)<<endl;
	}
	return 0;
}