

int i,n,m,j,k;
int p,q,r;
int t[99];

int main()
{
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cin>>m;
		r=0;
		for (j=1;j<=90;j++) t[j]=1;
		for (j=1;j<=m;j++)
		{
			cin>>p;
			q=0;k=1;
			do
			{
				q=q+t[k];
				k++;
			}
			while (q!=p);
			t[k]=0;k++;
			t[k]=0;k++;
			t[k]=0;
		}
		for (j=1;j<=60;j++) r=r+t[j];
		cout<<r<<endl;
	}
	return 0;
}
 