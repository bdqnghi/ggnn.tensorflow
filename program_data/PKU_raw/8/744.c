int a1[100],a2[100];
void get(int n1,int n2)
{
	for(int i=0;i<n1;i++)
	{
		cin>>a1[i];
	}
	for(int i=0;i<n2;i++)
	{
		cin>>a2[i];
	}
}
void arrange(int n1,int n2)
{
	int temp;
	for(int j=1;j<=n1-1;j++)
	{
		for(int i=0;i<=n1-j-1;i++)
		{
			if (a1[i]>a1[i+1])
			{
				temp=a1[i];
				a1[i]=a1[i+1];
				a1[i+1]=temp;
			}
		}
	}
	for(int j=1;j<=n2-1;j++)
	{
		for(int i=0;i<=n2-j-1;i++)
		{
			if (a2[i]>a2[i+1])
			{
				temp=a2[i];
				a2[i]=a2[i+1];
				a2[i+1]=temp;
			}
		}
	}
}
int combine(int n1,int n2)
{
	int out[100];
	for(int i=0;i<n1;i++)
	{
		out[i]=a1[i];
	}
	for(int i=0;i<n2;i++)
	{
		out[n1+i]=a2[i];
	}
	for(int i=0;i<n1+n2-1;i++)
	{
		cout<<out[i]<<" ";
	}
	cout<<out[n1+n2-1];
}
int main()
{
	int a,b;
	cin>>a>>b;
	get(a,b);
	arrange(a,b);
	combine(a,b);
	return 0;
}
	
