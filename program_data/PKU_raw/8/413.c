int input(int[],int);
int sort(int[],int);
void combine(int[],int[],int,int);
void output(int[],int,int);
int main()
{
	int n1,n2;
	cin>>n1>>n2;
	int a[100],b[100];
	input(a,n1);
	input(b,n2);
	sort(a,n1);
	sort(b,n2);
	combine(a,b,n1,n2);
	return 0;
	
}
int input(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	return a[i];
}
int sort(int a[],int n)
{
	int i,j,p;
	for(i=1;i<n;i++)
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				p=a[j];
				a[j]=a[j+1];
				a[j+1]=p;
			}	
		}
	return a[j];
}
void combine(int a[],int b[],int n1,int n2)
{
	int c[200];
	int i;
	for(i=0;i<n1;i++)
		c[i]=a[i];
	for(i=n1;i<n2+n1;i++)
		c[i]=b[i-n1];
	output(c,n1,n2);
}
void output(int c[],int n1,int n2)
{
	int i;
	for(i=0;i<n1+n2-1;i++)
		cout<<c[i]<<" ";
	cout<<c[n1+n2-1]<<endl;
	
}