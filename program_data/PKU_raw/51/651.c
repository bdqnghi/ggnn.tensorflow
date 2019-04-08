//*******************************
//*???n-gram????        **
//*?????? 1300012965     **
//*???20131211              **
//*******************************
int main()
{
	char a[501];
	int f[501] = {0}, g[501] = {0};
	int i, j, n, m, nlen, co = 0, count = 0, t, t1;
	char *p, *q; 
	for(int x=0; x<=500; x++)
		g[x] = x;//???????
	cin >> n >> a;
	nlen = strlen(a);//????
	for(i=0; i<=nlen-n; i++)
	{
		count = 0;
		p = &a[i];
		for(j=i; j<=nlen-n; j++)
		{
			co = 0;
			q = &a[j];
			for(int k=0; k<=n-1; k++)
			{
				if(*(p+k) == *(q+k))
					co++;//?????
			}
			if(co == n)//????????
				count++;//???1
		}
		f[i] = count;
	}
	for(int x=0; x<=nlen-n-1; x++)
		for(int y=0; y<=nlen-n-x-1; y++)
		{
			if(f[y] < f[y+1])
			{
				t = f[y];
				f[y] = f[y+1];
				f[y+1] = t;//??
				t1 = g[y];
				g[y] = g[y+1];
				g[y+1] = t1;//?????????
			}
		}
	if(f[0] == 1)
		cout << "NO" << endl;//?????1???NO
	else
	{
		cout << f[0] << endl;
		for(int y=0; y<=n-1; y++)
			cout << a[g[0]++];
		cout << endl;
		for(int s=1; s<=nlen-n; s++)
		{
			if(f[s] == f[0])
			{	
				for(int y=0; y<=n-1; y++)
					cout << a[g[s]++];
				cout << endl;
			}
			else
				break;
		}
	}
	return 0;
}