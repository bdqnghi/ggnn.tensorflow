int main()
{
	char s[300], a[256], b[256];
	int n, m, p, i, j, k;
	cin.getline(s, 256);
	cin.getline(a, 256);
	cin.getline (b, 256);
	n = strlen(s);
	m = strlen(a);
	p = strlen(b);
	for(i = 0 ; i < n; i++)
	{
		if(s[i] == a[0])
		{
			for(j = 1; j < m; j++)
				if(a[j] != s[j + i])
					break;
			if(j == m)
			{
				if(m == p)
				{
					for(j = 0; j < m; j++)
						s[i + j] = b[j];
				}
				else
				{
					if(p < m)
					{
						for(j = 0; j < p; j++)
							s[i + j] = b[j];
						for(j = i + p;; j++)
						{
							s[j] = s[j + m - p];
							if(s[j] == '\0') break;
						}
					}
					else
					{
						for(j = 0;; j++)
						{
						    if(n - j == i + m - 1)
								break;
							s[n + p - m - j] = s[n - j];
						}
						for(k = 0; k < p; k++)
							s[i + k] = b[k];
					}
				}
				break;
			}
		}
	}
	cout << s << endl;
	return 0;
}





