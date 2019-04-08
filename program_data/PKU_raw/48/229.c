int a[9][9];
int b[9][9];

int main()
{
	int m, n;
	cin >> m >> n;
	memset(a,0,sizeof(a));
	a[4][4]=m;
	int i, x, y;
	for (i = 0; i !=n;i++)
	{
		memset(b,0,sizeof(b));
		for (x=1;x!=8;x++)
			for(y=1;y!=8;y++)
			{
				b[x][y]+=2*a[x][y];
				b[x-1][y-1]+=a[x][y];b[x-1][y]+=a[x][y];b[x-1][y+1]+=a[x][y];b[x][y-1]+=a[x][y];b[x][y+1]+=a[x][y];b[x+1][y-1]+=a[x][y];b[x+1][y]+=a[x][y];b[x+1][y+1]+=a[x][y];
			}
		memcpy(a,b,sizeof(a));
	}
	for(x=0;x!=9;x++)
	{
		for(y=0;y!=9;y++)
		{
			if(y==0)
				cout << a[x][y];
			else
				cout << ' ' << a[x][y];
		}
		cout << endl;
	}
	return 0;
}

