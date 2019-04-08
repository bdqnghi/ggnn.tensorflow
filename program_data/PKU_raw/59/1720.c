int main()
{
	int n, m, flag[110][110] = {0}, patient=0;
	char condition[110][110];
	int i, j, l, h, g, p, q;
	cin >> n;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			cin >> condition[i][j];
			if(condition[i][j]=='@')
			{
				flag[i][j] = 1;
				patient++;
			}
		}
	}
	cin >> m;
	for(l=2; l<=m; l++)
	{
		for(p=1; p<=n; p++)
		{
			for(q=1; q<=n; q++)
			{
				if((condition[p][q]=='.') && (condition[p+1][q]=='@' || condition[p-1][q]=='@' || condition[p][q+1]=='@' || condition[p][q-1]=='@'))
					flag[p][q]=1;
			}
		}
		patient = 0;
		for(h=1; h<=n; h++)
		{
			for(g=1; g<=n; g++)
			{
				if(flag[h][g]==1)
				{
					patient++;
					condition[h][g] = '@';
				}
			}
		}
	}
	cout << patient << endl;
	return 0;
}