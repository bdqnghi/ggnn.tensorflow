
int main()
{
	int k;
	cin>>k;
	int h[50];
	int i,j;
	for(i=0;i<k;i++) cin>>h[i];
	int num[50],max;
	num[0]=1;
	for(i=1;i<k;i++)
	{
		max=0;
		for(j=0;j<i;j++)
		{
			if(h[j]>=h[i]&&num[j]>max) max=num[j];
		}
		num[i]=max+1;
	}
	max=0;
	for(i=1;i<k;i++)
	{
		if(num[i]>max) max=num[i];
	}
	cout<<max<<endl;
	return 0;
}