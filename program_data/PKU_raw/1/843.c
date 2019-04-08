int fenjie(int ,int );
int main()
{
	int i,n,t,r,num;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>num;
		r=fenjie(num,2);
		cout<<r<<endl;
	}
	return 0;
}
int fenjie(int num,int min)
{
	int i,j,k,r=0;
	for(i=min;i<=num;i++)
	{
		if(num%i==0)
		{
			r=r+fenjie(num/i,i);
		}
		if(i==num) r++;
	}
	return r;
}