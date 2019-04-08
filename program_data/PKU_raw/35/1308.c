
int main() 
{
	int line,row; 
	int maxLine[8]={0},minRow[8]={0}; 
	int num[8][8]; 
	char c; 
	cin >> line >> c >> row; 
	int i , j;
	for (i = 0; i != line;i++) 
		for (j = 0; j!= row; j++)  cin >> num[i][j]; 
	for (i = 0; i != line;i++)
	{
		int maxl = -32767; 
		for (j = 0; j!= row; j++) 
			if (maxl < num[i][j]) 
			{
				maxl = num[i][j]; 
				maxLine[i] = j; 
			}
	}
	for (j = 0; j!= row; j++) 
	{
		int minr = 32767; 
		for (i= 0; i!=line; i++) 
			if (minr > num[i][j]) 
			{
				minr = num[i][j]; 
				minRow[j] = i; 
			}
	}
	int ansline = -1, ansrow = -1; 
	for (i = 0; i!=line; i++) 
		if (minRow[maxLine[i]] == i)
		{
			ansline = i; 
			ansrow = maxLine[i]; 
		}
	if (ansline != -1) cout << ansline << "+" << ansrow; 
		else cout<< "No"; 
	
	return 0; 
}