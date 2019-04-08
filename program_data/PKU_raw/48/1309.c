int main()
{
	int i, j, a[9][9], m, n, p, q, u, t[9][9];
	for(i=0; i<9; i++)
	{
		for(j=0; j<9; j++)
			a[i][j]=0;
	}
	scanf("%d %d", &m, &n);
	a[4][4]=m;
	for(u=0; u<n; u++)
	{
		for(i=4-u; i<=4+u; i++)
		{
			for(j=4-u; j<=4+u; j++)
			{
				t[i][j]=a[i][j];
			}
		}
		for(i=4-u; i<=4+u; i++)
		{
			for(j=4-u; j<=4+u; j++)
			{
				for(p=i-1; p<=i+1; p++)
					{
						for(q=j-1;q<=j+1; q++)
							a[p][q]=a[p][q]+t[i][j];
					}
			}
		}
				
			
		

	}
	for(i=0; i<9; i++)
	{
		for(j=0; j<8; j++)
			printf("%d ", a[i][j]);
		if(j=8)
			printf("%d\n", a[i][j]);
	}

	return 0;
}
