
int plate1[9][9] = {0}; // ??????
int plate[9][9] = {0}; 
void count(int k);

int main ()
{
	int m, n;
	cin >> m >> n;
	plate[4][4] = m;
	count(n);
    return 0;
}
 
void count(int k)
{
	int i, j;
	if (k == 0)
	{
		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 8; j++)
			{
				cout << plate[i][j] << " ";
			}
			cout << plate[i][j] << endl;
		}
		return;
	}
	else 
	{
	    for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 9; j++)
			{
				if (plate[i][j] != 0)
				{
					if (i > 0 && j > 0)
			    	{
		    			plate1[i - 1][j - 1] = plate1[i - 1][j - 1] + plate[i][j];
	    			}
					if (j > 0)
			    	{
		    			plate1[i][j - 1] = plate1[i][j - 1] + plate[i][j];
	    			}
					if (i > 0 && j < 8)
			    	{
		    			plate1[i - 1][j + 1] = plate1[i - 1][j + 1] + plate[i][j];
	    			}
					if (j < 8)
			    	{
		    			plate1[i][j + 1] = plate1[i][j + 1] + plate[i][j];
	    			}
					if (i < 8 && j < 8)
			    	{
		    			plate1[i + 1][j + 1] = plate1[i + 1][j + 1] + plate[i][j];
	    			}
					if (i < 8)
			    	{
		    			plate1[i + 1][j] = plate1[i + 1][j] + plate[i][j];
	    			}
					if (i < 8 && j > 0)
			    	{
		    			plate1[i + 1][j - 1] = plate1[i + 1][j - 1] + plate[i][j];
	    			}
					if (i > 0)
			    	{
		    			plate1[i - 1][j] = plate1[i - 1][j] + plate[i][j];
	    			}
				}
			}       
		}
		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 9; j++)
			{
				plate[i][j] = plate[i][j] * 2 + plate1[i][j];
				plate1[i][j] = 0;
			}
		}
		count(k - 1);
	}
}