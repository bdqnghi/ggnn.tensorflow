int feibo(int a)
{
	if(a==1)return 1;
	if(a==2)return 1;
	if(a!=1&&a!=2)return feibo(a-1)+feibo(a-2);
}
int main()
{
	int n,i,a,number[100]={0};
	number[1]=1;
	number[2]=1;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		cin>> a;
		cout<<feibo(a)<<endl;
	}
	return 0;
}