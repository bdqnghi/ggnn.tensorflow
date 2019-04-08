/*??????*/
int main()
{
	int n;
	int num[100];
	cin>>n;//?????????n
	int i,j;
	int t;
	for(i=0;i<n;i++)//????num
	{
		cin>>num[i];
	}
	for(i=0,j=n-1;i<=(n-1)/2;i++,j--)//??????
	{
		t=num[i];
		num[i]=num[j];
		num[j]=t;
	}
	for(i=0;i<n-1;i++)
	{
		cout<<num[i]<<" ";//??????
	}
	cout<<num[n-1]<<endl;
	return 0;
}