void Sort(int b[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(b[j]>b[j+1])
			{
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
}
int chouqu(int a[],int b[],int n)
{
	int count=0,i;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==1)
		{
			b[count]=a[i];
			count++;
		}
	}
	return count;
}
int main()
{
	int a[501],n,i,b[501];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	n=chouqu(a,b,n);
	Sort(b,n);
	cout<<b[0];
	for(i=1;i<n;i++)
	{
		cout<<","<<b[i];
	}
	cout<<endl;
	return 0;
}