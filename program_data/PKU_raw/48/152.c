void fanzhi(int x,int y,int n);//??????????????
int a[9][9];
int add[9][9];

int main()
{
	
	int i,j=0;
	//???
	for (i=0;i<9;i++)
		for (j=0;j<9;j++)
			a[i][j]=0;
	
	for (i=0;i<9;i++)
		for (j=0;j<9;j++)
			add[i][j]=0;

	int m=0,n=0;
	cin>>m>>n;
	a[4][4]=m;
	int k=0;

	for (k=1;k<=n;k++)
	{
	for (i=0;i<9;i++)
		for (j=0;j<9;j++)
			add[i][j]=0;

		for (i=0;i<9;i++)
			for (j=0;j<9;j++)
				fanzhi(i,j,a[i][j]);//??????????

		for (i=0;i<9;i++)
			for (j=0;j<9;j++)
				a[i][j]=add[i][j];
	}


	for (i=0;i<9;i++)
		for (j=0;j<9;j++)
		{
			cout<<a[i][j];
			if (j!=8)
				cout<<" ";
			else if (i!=8)
				cout<<endl;
		}




	return 0;
}

void fanzhi(int x,int y,int n)
{
	add[x-1][y]+=n;
	add[x+1][y]+=n;
	add[x][y-1]+=n;
	add[x][y+1]+=n;
	add[x][y]+=n*2;
	add[x-1][y-1]+=n;
	add[x-1][y+1]+=n;
	add[x+1][y-1]+=n;
	add[x+1][y+1]+=n;

}