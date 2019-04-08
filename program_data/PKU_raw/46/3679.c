int main()
{
	/* Read data */
	int col, row, a[100][100];
	cin >> row >> col;
	for(int i=0; i<row; ++i)
		for(int j=0; j<col; ++j)
			cin >> a[i][j];
	/* Const direction */ 
	const int dir[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
	/* Parameter Initialization */
	/* State records current direction index, step records step size for 4 directions, curstep is current step size, pos records current position */
	int state=0, step[4] = {col, row-1, col-1, row-2}, curstep=step[state], pos[2] = {0,0}, flag=1;
	/* Main Solver */
	while(curstep > 0)
	{
		for(int i=0+flag; i<curstep; ++i)
		{
			cout << a[pos[0]][pos[1]] << endl;
			pos[0] += dir[state][0];
			pos[1] += dir[state][1]; 
		}
		step[state] = step[state]-2;
		state = (state+1)%4;
		curstep = step[state];
		flag = 0;
	}
	cout << a[pos[0]][pos[1]] << endl;
	return 0;
}