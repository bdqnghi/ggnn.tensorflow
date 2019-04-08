int a[100],b[100];
int n_a,n_b;
void input();
void sort();
void output();
int main()
{
	input();
	sort();
	output();
	return 0;
}
void input()
{
	int i;
	cin>>n_a>>n_b;
	for(i=0;i<n_a;i++)
		cin>>a[i];
	for(i=0;i<n_b;i++)
		cin>>b[i];
}
void sort()
{
	int i,j,t;
	for(i=0;i<n_a-1;i++)
	{
		for(j=i+1;j<n_a;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];a[i]=a[j];a[j]=t;
			}
		}
	}
	for(i=0;i<n_b-1;i++)
	{
		for(j=i+1;j<n_b;j++)
		{
			if(b[i]>b[j])
			{
				t=b[i];b[i]=b[j];b[j]=t;
			}
		}
	}
}
void output()
{
	int i;
	for(i=0;i<n_a;i++)
		cout<<a[i]<<" ";
	for(i=0;i<n_b;i++)
	{
		cout<<b[i];
		if(i<n_b-1)
			cout<<" ";
	}
}
	
