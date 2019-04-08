int main()
{	int order(int m);
	int n1,n2;
	cin>>n1>>n2;
	order(n1);
	cout<<" ";
	order(n2);
	return 0;
}

int order(int m)
{	int a[1000];
	int i,j,temp;
	for(i=1;i<=m;i++)
		cin>>a[i];
	for(i=1;i<=m-1;i++)
		for(j=1;j<=m-i;j++)
			if(a[j]>a[j+1])
			{temp=a[j];a[j]=a[j+1];a[j+1]=temp;}
	for(i=1;i<=m-1;i++)
		cout<<a[i]<<" ";
	cout<<a[m];
		return 0;
}