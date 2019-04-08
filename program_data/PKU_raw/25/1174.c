int main()
{
	int N,i,j,t;
	int a[100]={0};
	cin>>N;
	a[0]=1;
	t=0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<100;j++)
		{
			a[j]=a[j]*2;
			a[j]=a[j]+t;
			t=0;
			if(a[j]>9)
			{
				a[j]=a[j]-10;
				t=1;
			}
		}
	}
	for(i=99;i>=0;i--)
	{
		if(a[i]>0)
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