int input(int n)//???????
{
	cin>>n;
	return n;
}
void paixu(int a[],int n)//???????
{
	int i,j,p;
	for(i=0;i<=n-2;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				p=a[i];
				a[i]=a[j];
				a[j]=p;
			}
		}
	}
}
void add(int a[],int b[],int n1,int n2)//???????
{
	int i;
	for(i=0;i<n1;i++)
		cout<<a[i]<<" ";
	for(i=0;i<n2-1;i++)
		cout<<b[i]<<" ";
	cout<<b[n2-1]<<endl;
}
int main()//???
{
	int a[100],b[100],n1,n2,i;
	cin>>n1>>n2;
	for(i=0;i<n1;i++)
		a[i]=input(a[i]);
	for(i=0;i<n2;i++)
		b[i]=input(b[i]);
	paixu(a,n1);
	paixu(b,n2);
	add(a,b,n1,n2);
	return 0;
}
