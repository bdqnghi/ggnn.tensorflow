int a[100],b[100],m,n;
int c[200];
int shuru()
{
	cin>> m >> n;
	for(int i=0;i<m;i++)
	{
		cin>> a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>> b[i];
	}
	return 0;
}
int paixu()
{
	int i=0,j=0,t=0;
	for(i=0;i<m-1;i++)
	{
		for(j=0;j<m-1-i;j++)
		{
			if(a[j]>a[j+1]) {t=a[j];a[j]=a[j+1];a[j+1]=t;}
		}
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(b[j]>b[j+1]) {t=b[j];b[j]=b[j+1];b[j+1]=t;}
		}
	}
	return 0;
}
int hebing()
{
	for(int i=0;i<m;i++)
	{
		c[i]=a[i];
	}
	for(int i=m;i<m+n;i++)
	{
		c[i]=b[i-m];
	}
	return 0;
}
int shuchu()
{
	cout<< c[0];
	for(int i=1;i<m+n;i++)
	{
		cout<<" "<< c[i];
	}
	return 0;
}

int main()
{
	shuru();
	paixu();
	hebing();
	shuchu();
	return 0;
}
