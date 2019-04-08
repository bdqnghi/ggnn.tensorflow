/* title :????*
* author : ???*
* time : 2011.11.9 */


int a[100][2];
char c[100];
char b;
int n;

void combine(char c[], int i)
{
	int m, j, k;
	m = strlen(c);
	for(j = 0; j < m; j++)
	{
		if(c[j] != b && c[j] != ' ')
		{
			c[j] = ' ';
			a[i][1] = j;
			for(k = j - 1; k >= 0; k--)
			{
				if(c[k] == b)
				{
					a[i][0] = k;
					c[k] = ' ';
					break;
				}
			}
			break;
		}
	}
	if(i < n / 2 - 1)
		combine(c, i + 1);
}
	

int main()
{
	int j, k, t;
	cin >> c;
	n = strlen(c);
	b = c[0];
	combine(c, 0);
	for(j = 0; j < n / 2 - 1; j++)
	{
		for(k = 0; k < n / 2 - j - 1; k++)
		{
			if(a[k][1] > a[k + 1][1])
			{
				t = a[k + 1][1];
				a[k + 1][1] = a[k][1];
				a[k][1] = t;
				t = a[k + 1][0];
				a[k + 1][0] = a[k][0];
				a[k][0] = t;
			}
		}
	}
	for(j = 0; j < n / 2; j++)
	{
		cout << a[j][0] << " " << a[j][1] << endl;
	}
	return 0;
}
		





