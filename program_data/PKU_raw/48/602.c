int a[10][10];
void does(int,int,int);
int main()
{   
	memset(a,0,sizeof(a) );
	a[5][5]=1;
	int n,m;
	int i,j;
	cin >> m >> n;

	does(5,5,n);

	for(i=1;i<=9;i++)
		for(j=1;j<=9;j++)
		{
			if(j<9)
			cout << m*a[i][j] << ' ';
			else
				cout << m*a[i][j] << endl;
		}

	return 0;
}

void does (int i,int j,int n )
{
	if( n>0 )
	{
		int b;
		a[i][j]++;
		a[i+1][j]++;
		a[i-1][j]++;
		a[i][j+1]++;
		a[i][j-1]++;
		a[i-1][j-1]++;
		a[i-1][j+1]++;
		a[i+1][j-1]++;
		a[i+1][j+1]++;
		    
		    does(i,j,n-1);
			does(i,j,n-1);
			does(i,j+1,n-1);
			does(i,j-1,n-1);
			does(i+1,j,n-1);
			does(i-1,j,n-1);
			does(i-1,j-1,n-1);
			does(i-1,j+1,n-1);
			does(i+1,j-1,n-1);
			does(i+1,j+1,n-1);

		
		
	}
}