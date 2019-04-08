int la,lb;
int a[100]={0},b[100]={0};
void get()
{
	for(int i=0;i<la;i++)
		cin>>a[i];
	for(int i=0;i<lb;i++)
		cin>>b[i];
}
void sort()
{
	int i,j;
	int p=a[0];
	for(i=0;i<la-1;i++)
		for(j=0;j<=la-i-2;j++)
		{
			if(a[j]>a[j+1])
				{p=a[j];
				a[j]=a[j+1];
				a[j+1]=p;
				}
		}
	p=b[0];
	for(i=0;i<lb-1;i++)
			for(j=0;j<=lb-i-2;j++)
			{
				if(b[j]>b[j+1])
					{p=b[j];
					b[j]=b[j+1];
					b[j+1]=p;
					}
			}
}
void link()
{
	int i;
	for(i=la;i<=la+lb-1;i++)
		a[i]=b[i-la];
}
void print()
{
	int i;
	for(i=0;i<la+lb-1;i++)
		cout<<a[i]<<" ";
	cout<<a[la+lb-1];
}
int main()
{
	cin>>la>>lb;
	get();
	sort();
	link();
	print();
	return 0;
}