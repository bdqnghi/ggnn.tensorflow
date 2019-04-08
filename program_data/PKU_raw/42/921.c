//* ????????*
//* author:??? *
//* time : 10.19  *
 


int main()
{
	int a[100000] = {0};
	int n, k, i, j, m, h, g, t, num = 0, count = 0;
	cin >> n;
    for(i = 0; i <= n - 1; i++)
	{
		cin >> a[i];
	}
	cin >> k;
	for(j = 0; j <= n - 1; j++)
	{
		if(a[j] == k)
		{
			count++;
		}
	}
	t = n;
	do
	{
	    for(g = 0; g <= t - num - 1; g++)
		{
		    if(a[g] == k)
			{
			    num++;
			    for(h = g; h < t - num; h++)
				{
				    a[h] = a[h + 1];
				}
			}
		
		}
	}while(num < count);
	for(m = 0; m <= (n - count - 2); m++)
	{
		cout << a[m] << " ";
	}
	cout << a[n - count - 1] << endl;
	return 0;
}

