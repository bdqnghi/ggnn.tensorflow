int duru(int a[],int l)
{
	int i,j;
	for(i=1;i<=l;i++)
	{
		cin>>a[i];
	}
	return 1;
}
int paixu(int a[],int l)
{
	int i,j,p;
	for(i=1;i<=l-1;i++)
	{
		for(j=1;j<=l-i;j++)
		{
			if(a[j]>a[j+1])
			{
				p=a[j];
				a[j]=a[j+1];
				a[j+1]=p;
			}
		}
	}
	return 1;
}
int hebing(int a[],int b[],int l1,int l2)
{
	int i;
	for(i=l1+1;i<=l1+l2;i++)
		a[i]=b[i-l1];
	return l1+l2;
}
int xianshi(int a[],int l)
{
	for(int i=1;i<l;i++)
		cout<<a[i]<<" ";
	cout<<a[l]<<endl;
	return 1;
}
int main()
{
	int a[100],b[100],l1,l2;
	cin>>l1>>l2;
	duru(a,l1);
	duru(b,l2);
	paixu(a,l1);
	paixu(b,l2);
	l1=hebing(a,b,l1,l2);
	xianshi(a,l1);
	return 0;
}