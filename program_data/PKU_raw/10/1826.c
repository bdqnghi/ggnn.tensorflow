int main()
{
	int length[500]={0},a[500];												//????
	int temp=0;
	int n;
	cin>>n;
	int i=0,j=0;
	for(i=1;i<=n;i++)
		cin>>a[i];
	length[1]=1;
	for(i=2;i<=n;i++)														//?????????
	{
		temp=0;
		for(j=1;j<i;j++)
		{
			if(a[i]<=a[j])
			{
				if(temp<length[j])
					temp=length[j];
			}
		}
		length[i]=temp+1;
	}
	int max=0;
	for(i=1;i<=n;i++)														//?????
		if(max<length[i])
			max=length[i];
	cout<<max<<endl;
	return 0;
}