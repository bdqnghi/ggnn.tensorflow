//????  ???  12858

int main()
{
	int i,j,c,dirx,diry,x,y,row,col,step;        //dirx,diry????   x,y?????   step????????  
	int a[101][101],b[101][101];     //a??????,b??????????
	cin >> row >> col;
	for (i = 1;i <= row; i++)
		for (j = 1;j <= col; j++)
		{
			cin >> a[i][j];
			b[i][j] = 1;
		}
	x = 1;y = 0;dirx = 0;diry = 1;    //??????????
	step = 0;
	while (step < (col * row))
	{
		while (b[x + dirx][y + diry] == 1)           //?????
		{
			x += dirx;y += diry;
			b[x][y] = 0;
			step++;
			cout << a[x][y] << endl;
		}
		if ((dirx == 1) && (diry == 0))            //???????
		{
			dirx = 0;diry = -1;
		}
		else 
			if ((dirx == 0) && (diry == 1))
			{
				dirx = 1;diry = 0;
			}
			else
				if ((dirx == -1) && (diry == 0))
				{
					dirx = 0;diry = 1;
				}
				else if ((dirx == 0) && (diry == -1))
				{
					dirx = -1;diry = 0;
				}	
	}
    return 0;
}

		
