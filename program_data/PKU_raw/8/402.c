int m,n;
int i,j,k;
int q[10000],p[10000];

void a()
{
	cin >>m >>n;
	for (i=0;i<m;i++)
	{
		cin >>p[i];
	}
	for (i=0;i<n;i++)
	{
		cin >>q[i];
	}
}
void b(int x[],int y[])
{
	for (i=1;i<m;i++)
	{
		for (j=0;j<m-i;j++)
		//cout <<x[j] <<x[j+1];
		if (x[j]>x[j+1])
		{
			k=x[j+1];
			x[j+1]=x[j];
			x[j]=k;
		}
	}
	for (i=1;i<n;i++)
	{
		for (j=0;j<n-i;j++)
		//cout <<x[j] <<x[j+1];
		if (y[j]>y[j+1])
		{
			k=y[j+1];
			y[j+1]=y[j];
			y[j]=k;
		}
	}
	for (i=0;i<m;i++)
	{
		cout <<x[i] <<' ';
	}
	for (i=0;i<n-1;i++)
	{
		cout <<y[i] <<' ';
	}
	cout <<y[n-1] <<endl;
}

int main ()
{
	a();
	b(p,q);
	return (0);
}
