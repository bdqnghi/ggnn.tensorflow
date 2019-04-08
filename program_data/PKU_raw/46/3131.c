/**
 * @file    2.cpp
 * @author  ???
 * @date    2013-11-5
 * @description
 *          ????????? - ????????
 */
int main()
{
	int col, row, a[100][100], state=0, step[4], curstep, flag=1;
	int dir[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
	int pos[2] = {0,0};
	cin >> row >> col;
	for(int i=0; i<row; ++i)
		for(int j=0; j<col; ++j)
			cin >> a[i][j];
	step[0] = col;
	step[1] = row-1;
	step[2] = col-1;
	step[3] = row-2;
	curstep = step[state];
	while(curstep > 0){
		for(int i=0+flag; i<curstep; ++i){
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