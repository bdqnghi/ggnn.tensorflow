int main()
{
	int n,i,j,t;
	int a[100],b[100];
	cin>>n; 
	for(i=0;i<100;i++)
	{
		a[i]=0;
		b[i]=0;
	}
	a[0]=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<99;j++)
		{
			b[j+1]=(a[j]*2)/10;
			a[j]=(a[j]*2)%10+b[j];
			b[j]=0;
		}
	}
	for(i=99;i>=0;i--)
	{
		if(a[i]!=0)
		{
			t=i;
			break;
		}
	}
	for(i=t;i>=0;i--)
	{
		cout<<a[i];
	} 
	return 0;
}