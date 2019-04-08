int main ()
{
	unsigned long sum = 1;
	int  num[1000] = {0};
	int n, i, k = 0, j;
	cin >> n;
	num[0] = 1;
	if (n == 0)
		cout << 1;
	else
	{
	    for (i = 0; i < n; i++)
		{
		    k = 0;
		    while (num[k] != 0 || num[k + 1] != 0 || num[k + 2] != 0 || num[k + 3] != 0)
			{
			    num[k] *= 2;
			    k++;
			}
		    for (j = 0; j < k; j++)
			{
			    if (num[j] >= 10)
				{
					num[j + 1] += num[j] / 10;
				    num[j] = num[j] % 10;
				}
			}
		}
	
	k = 40;
	while (num[k] == 0) k--;
	for (;k >= 0; k--)
		cout << num[k];
	}
	return 0;
}