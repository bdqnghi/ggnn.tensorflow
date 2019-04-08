
int num;

int wrh(int n,int r,int b[200],int y,int a)
{
	int i;
    for( i = y;i <= a/2;i ++ )
	{
		if ( r % i == 0)
		{
			b[n] = i;
			int now = 1,j;
			for ( j = 1;j <= n;j ++ )
				now = now * b[j];
			if ( now == a)
			{
				num ++;
				break;
			}
			if ( now > a) break;
			else 
				wrh(n + 1,r / i,b,i,a);
		}
	}
	return 0;
}

int main()
{
	
    int s,a,b[200];
	cin >> s;
	while (s > 0)
	{
		num = 0;
        cin >> a;
		wrh(1,a,b,2,a);
		cout << num + 1<<endl;
		s --;
	}
	return 0;
}
