int b[9][9];			//????
int a[9][9];			//???
void f()				//??
{
	int i,j;
	for(i=0;i<9;i++)
		for(j=0;j<9;j++)
			if(a[i][j]!=0)
			{
				b[i][j]+=2*a[i][j];
				b[i-1][j-1]+=a[i][j];
				b[i-1][j]+=a[i][j];
				b[i-1][j+1]+=a[i][j];
				b[i][j-1]+=a[i][j];
				b[i][j+1]+=a[i][j];
				b[i+1][j-1]+=a[i][j];
				b[i+1][j]+=a[i][j];
				b[i+1][j+1]+=a[i][j];//??????
				a[i][j]=0;	//??????
			}
	for(i=0;i<9;i++)
		for(j=0;j<9;j++)
			a[i][j]+=b[i][j];
}

int main()
{
	int m,n;
	int i,j;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	cin>>m>>n;
	a[4][4]=m;
	for(i=0;i<n;i++)	//n???????
	{
		f();
		memset(b,0,sizeof(b));
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<8;j++)
			cout<<a[i][j]<<" ";
		cout<<a[i][8]<<endl;
	}
	return 0;
}
