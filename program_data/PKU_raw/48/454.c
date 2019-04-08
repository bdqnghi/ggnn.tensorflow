int a[10][10] = {0};
int b[10][10] = {0};
int i , j;
void f(int day);

int main()
{
	int m , n ;
	cin >> m >> n;
	a[5][5] = m;
	f(n);
	for( i = 1 ; i <= 9 ; i++)
		for(j = 1 ; j <= 9 ; j++)
		{
			if(j == 9)
				printf("%d\n",a[i][j]);
			else
				printf("%d ",a[i][j]);
		}
	return 0;
}
void f(int day)
{
	int k,l;
	for(i = 1 ; i <= 9 ; i ++)
		for(j = 1 ; j <= 9 ; j++) 
			b[i][j] = a[i][j];
    if(day > 0)
	{
		for(i = 1 ; i <= 9 ; i ++)
			for(j = 1 ; j <= 9 ; j++)
				if(a[i][j] != 0)
				{
					for(k = i - 1; k <= i + 1; k ++)
						for(l = j - 1; l <= j + 1; l++)
							a[k][l] = a[k][l] + b[i][j]; 
				}
	f(day - 1);
	}
}


	












