void swap(int *p,int *q)//???????
{
	int *temp=p;
	p=q;
	q=temp;
	return;
}
int main()
{
	int m,n,a[100],temper=0;//????
	cin>>n>>m;//??
	for(int i=0;i<n;i++)
		cin>>a[i];
	int s=m;
	while(m>0)//??????
	{
		swap(a[n-m],temper);
		for(int j=n-m;j>s-m;j--)
			swap(a[j],a[j-1]);
		swap(a[s-m],temper);
		m--;
	}
	for(int i=0;i<n-1;i++)//??
		cout<<a[i]<<" ";
	cout<<a[n-1]<<endl;
	return 0;
}
