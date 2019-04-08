int f(int a,int n)
{
	if (n==1) return a;               //????
	else return f(a,n-1)/2;
}
int main()
{
	int a,b,i,j,t=1;
	cin>>a>>b;
	for (i=1;f(a,i)>=1;i++)
		for (j=1;f(b,j)>=1;j++)          //???????????
			if (f(a,i)==f(b,j))
			{
				t=(f(a,i)>t? f(a,i):t);         //????????????
				break;
			}
	cout << t <<endl;
	return 0;
}
