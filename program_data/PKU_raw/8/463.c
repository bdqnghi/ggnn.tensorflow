int m=0,n=0;                            //??????m,n,???????????,??int?????????,???????????

void Get_In ( int a[10000], int b[10000])                     //????????,?????????????
{
	int i=0,j=0;
	for (i=0;i<m;i++)
		cin>>a[i];
	for (j=0;j<n;j++)
		cin>>b[j];
}

void Ranking ( int a[10000] , int l )
{
	int i=0,j=0,temp=0;
	for (i=0;i<(l-1);i++)
	{
		for (j=(i+1);j<l;j++)
		{
			if (a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}

void Combine ( int a[10000],int b[10000])
{
	int i=0;
	for (i=0;i<n;i++)
	{
		a[m+i]=b[i];
	}
}

void Turn_Out (int a[10000])
{
	int i=0;
	for (i=0;i<(m+n);i++)
	{
		if (i<(m+n-1))
			cout<<a[i]<<" ";
		else if (i==(m+n-1))
			cout<<a[i]<<endl;
	}
}

int main()
{
	int a[10000],b[10000];
	cin>>m>>n;
	Get_In(a,b);
	Ranking(a,m);
	Ranking(b,n);
	Combine(a,b);
	Turn_Out(a);
	return 0;
}
