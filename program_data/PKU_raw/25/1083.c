int a[1000]={0};
long sum=1;
void mi(int);
int main()
{
	int n,i,j=1;
	a[0]=4;a[1]=2;a[2]=0;a[3]=1;
	cin>>n;
	if(n==0)cout<<1<<endl;
	else if(n<=10)
	{
		for(i=0;i<n;i++)
			j*=2;
		cout<<j<<endl;
	}
	else mi(n-10);
	return 0;
}
void mi(int n)
{
	int i,j,len=0;
	if(n==0)
	{
		for(i=999;i>=0;i--)
		{
			if(a[i]!=0)
				break;
		}
		for(j=i;j>=0;j--)
			cout<<a[j];
	}
	else 
	{
		for(len=999;len>=0;len--)
			if(a[len]!=0)break;
		for(i=0;i<=len;i++)
			a[i]*=2;
		for(i=0;i<=len;i++)                                       //????????????????
			if(a[i]>9)
			{
				a[i+1]++;
				a[i]-=10;
			}
		mi(n-1);
	}
}