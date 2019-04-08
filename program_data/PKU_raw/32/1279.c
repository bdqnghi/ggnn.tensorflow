//***************************
//*????????        **
//*????? 1300012921   **
//*???2013.11.18        **
//*************************** 
int main()

{
	char a[101], b[101];
	int i, j, k, n, len1, len2;
	int c[103], d[103], e[103];
	cin >> n;
	cin.get();
	
	for(k = 1; k <= n; k++)
	{
		memset(c,0,sizeof(c));
		memset(d,0,sizeof(d));
		memset(e,0,sizeof(e));		
		cin.getline(a,101);
		cin.getline(b,101);
		len1 = strlen(a);
		len2 = strlen(b);
		
		for(i = len1 - 1; i >= 0; i--)
			c[len1-i] = a[i] - '0';
		
		for(i = len2 - 1; i >= 0; i--)
			d[len2-i] = b[i] - '0';
		
		for(i = 1; i <= 101; i++)
		{
			if(c[i] >= d[i])
				e[i] = c[i] - d[i];
			else
			{
				e[i] = c[i] - d[i] + 10;
				c[i+1] = c[i+1] - 1;
			}
		}
		
		for(j = 101; j >= 1; j--)//???? 
		{
			if(e[j] != 0)
			{
				for(i = j; i >= 1; i--)
					cout << e[i];
				break;
			}
		}
		cout << endl;
		cin.get();
	}
	return 0;
}