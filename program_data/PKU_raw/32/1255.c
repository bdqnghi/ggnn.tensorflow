/*************************
??cpp4
?????
???
2013/11/14
**************************/
int main()
{
	int m, n, i, j, k , c[102]={0}, d[102]={0}, e[102]={0} ,l1, l2;
	char a[102], b[102];
	cin >> n;
	cin.get();
	for (i=1; i<=n; i++)
	{
		memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        memset(c, 0, sizeof(c));
        memset(d, 0, sizeof(d));
		memset(e, 0, sizeof(e));
		cin.getline(a,100);
		cin.getline(b,100);
		cin.get();
		l1 = strlen (a);
		l2 = strlen (b);
		for (j = l1-1, k=0; j>=0, k<= l1-1; j--, k++)
			c[k] = a[j] - '0';
		for (j = l2-1, k=0; j>=0, k<= l2-1 ; j--, k++)
			d[k] = b[j] -'0';
		for (j=0; j<=101; j++)
		{
			if (c[j]<d[j])
			{
				e[j]= c[j]+10-d[j];
				c[j+1]--;
			}
			else
				e[j] = c[j]-d[j];
		}
		for(j=101; e[j]== 0 ; j--)
			m=j;
		for (k=m-1; k>=0; k--)
			cout << e[k];
		cout << endl;
	}
	return 0;
}