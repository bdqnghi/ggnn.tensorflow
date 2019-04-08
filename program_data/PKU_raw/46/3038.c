//********************************
//*???????????   **
//*?????? 1300012713 **
//*???2013.11.01  **
//********************************
int main() 
{ 
	int row, col, a[100][100];
	int time = 0;
	cin >> row >> col;
	for(int x = 1; x <= row; x++) 
	{
		for(int y = 1; y <= col; y++)
		{
			cin >> a[x-1][y-1];
		}
	}
	for(int i = 0;time< row*col;i++)
	{
		for(int j = i; j <= col-i-1 && time < row*col; j++)
		{   cout << a[i][j];
		    if(time < row*col-1) cout << "\n";
			time++;}
		for(int k = i + 1; k <= row-i-1 && time < row*col; k++)
		{   cout << a[k][col-i-1];
		    if(time < row*col-1) cout << "\n";
			time++;}
		for(int l = col-i-2; l>=i && time < row*col; l--)
		{   cout << a[row-i-1][l];
		    if(time < row*col-1) cout << "\n";
			time++;}
		for(int m = row-i-2; m>i && time < row*col; m--)
		{   cout << a[m][i];
		    if(time < row*col-1) cout << "\n";
			time++;} 
	}
	return 0;
}

