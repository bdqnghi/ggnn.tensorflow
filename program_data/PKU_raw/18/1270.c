
int main()
{
	int m, n, t = 0, b[100][100];
	int i, j, k, min;
	cin >> m;
	for (i = 0; i < m; i++)
	{
    	for (j = 0; j < m; j++)
		{
		    for (k = 0; k < m; k++)
			{
			    cin >> b[j][k];
			}
		}
    	for (n = m; n > 1 ;n--)
		{
        	for (j = 0; j < n; j++)
			{
    		    min = b[j][0];
	    	    for (k = 1; k < n; k++)
				{
	    		    if (min > b[j][k])
					{
				        min = b[j][k];
					}
			}
	    	for (k = 0; k < n; k++)
			{
			    b[j][k]-=min;
			}
		}
    	for (j = 0; j < n; j++)
		{
    		min = b[0][j];
	    	for (k = 0; k < n; k++)
			{
			    if (min > b[k][j])
				{
				    min = b[k][j];
				}
			}
	    	for (k = 0; k < m; k++)
			{
			    b[k][j]-=min;
			}
		}
	    t+=b[1][1];
	    for (j = 1; j < n - 1; j++)
		{
		    b[0][j] = b[0][j + 1];
		    b[j][0] = b[j + 1][0];
	    	for (k = 1; k < n - 1; k++)
			{
			    b[j][k] = b[j + 1][k + 1];
			}
		}
		}
		cout << t << endl;
		t = 0;
	}
	return 0;
}
