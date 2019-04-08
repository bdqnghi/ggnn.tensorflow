int i,j,n1,n2,a1[100],a2[100];
void scan()
{
	cin>>n1>>n2;
	for(i=0;i<n1;i++)
		cin>>a1[i];
	for(j=0;j<n2;j++)
		cin>>a2[j];
}
void adjust()
{
	int p;
	for(i=0;i<n1;i++)
	{
		for(j=i+1;j<n1;j++)
		{
			if(a1[i]>a1[j])
			{
				p=a1[i];
				a1[i]=a1[j];
				a1[j]=p;
			}
		}
	}
	for(i=0;i<n2;i++)
	{
		for(j=i+1;j<n2;j++)
		{
			if(a2[i]>a2[j])
			{
				p=a2[i];
				a2[i]=a2[j];
				a2[j]=p;
			}
		}
	}
}
void combine()
{
	for(i=n1;i<n1+n2;i++)
	{
		a1[i]=a2[i-n1];
	}
}
void print()
{
	for(i=0;i<n1+n2-1;i++)
		cout<<a1[i]<<" ";
	cout<<a1[n1+n2-1]<<endl;
}
int main()
{
	scan();
	adjust();
	combine();
	print();
	return 0;
}