

int Matrix[100][100];

int a[100]={0};

int b[100]={0};

int N=0;

void f(int n)
{
	memset(a,0,sizeof(a));
	for(int i=0;i<n;i++)
		{
			a[i]=Matrix[i][0];
			for(int k=1;k<n;k++)
				if(a[i]>Matrix[i][k])
					a[i]=Matrix[i][k];
		}
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				Matrix[i][j]-=a[i];
}
void g(int n)
{
	memset(b,0,sizeof(b));
	for(int i=0;i<n;i++)
		{
			b[i]=Matrix[0][i];
			for(int k=1;k<n;k++)
				if(b[i]>Matrix[k][i])
					b[i]=Matrix[k][i];
		}
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			Matrix[j][i]-=b[i];
}
int h(int n)
{
	int k=0;
	f(n);
	g(n);
	k=Matrix[1][1];
	if(n==2)
		return k;
	for(int i=1;i<n-1;i++)
	{
		Matrix[0][i]=Matrix[0][i+1];
		Matrix[i][0]=Matrix[i+1][0];
		for(int j=1;j<n-1;j++)
			Matrix[i][j]=Matrix[i+1][j+1];
	}
	return k+h(n-1);
}
int main()
{
	scanf("%d",&N);
	for(int j=0;j<N;j++)
	{
		for(int i=0;i<N;i++)
			for(int j=0;j<N;j++)
				scanf("%d",&Matrix[i][j]);
		printf("%d\n",h(N));
	}
	return 0;
}