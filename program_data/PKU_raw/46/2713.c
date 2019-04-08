int mat[102][102];
int unvis[102][102];

int main()
{
	int n,r,c,i,j,d;
	int dir[4][2] ={{0,1},{1,0},{0,-1},{-1,0}};
	scanf("%d%d",&r,&c);
	for(i = 0;i < r ;i ++)
		for(j = 0; j < c; j++)
		{
			scanf("%d",&mat[i][j]);
			unvis[i][j] = 1;
		}
	n = r * c;
	r = 0;
	c = 0;
	d = 0;
	while(n)
	{
		unvis[r][c] = 0;
		printf("%d\n",mat[r][c]);
		i = r + dir[d][0];
		j = c + dir[d][1];
		if(i >=0 && j>=0 && unvis[i][j])
		{
			r = i;
			c = j;
		}
		else
		{
			d = (d + 1) % 4;
			r = r + dir[d][0];
			c = c + dir[d][1];
		}
		n--;
	}
	
	return 0;
}