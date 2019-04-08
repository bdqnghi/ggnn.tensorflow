int a[102], b[102], c[202], m, n;

void shuru()
{
	int  i;
	cin>>m>>n;
	for(i=0; i<m; i++)
		cin>>a[i];
	for(i=0; i<n; i++)
		cin>>b[i];
}
void paixu()
{
	int i, j, t;



	for (i=0;i<m;i++)
	{
		for (j=m-1;j>i;j--)
		{
			if (a[j]<a[j-1])
			{
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
		}
	}

	for(i=0; i<n; i++)
		for(j=n-1; j>i; j--)
		{
			if(b[j]<b[j-1])
			{
				int t=b[j];
				b[j]=b[j-1];
				b[j-1]=t;
			}
		}
}
void hebing()
{
	int i=0, j=0;

	for(i=0; i<m; i++)
		c[i]=a[i];

	for(i=0; i<n; i++)
		c[m+i]=b[i];
}
void xianshi()
{
	int i=0;
	cout<<a[0];
	for(i=1; i<n+m; i++)
		cout<<' '<<c[i];
}

int main()
{
	shuru();
	paixu();
	hebing();
	xianshi();
	return 0;

}


