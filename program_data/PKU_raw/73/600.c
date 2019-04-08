//********************************
//*???????               **
//*?????? 1300012965      **
//*???2013.11.1              **
//********************************
int main ()
{
	int a[6][6] = {{0}}, max[6] = {0}, min[6] = {1000000,1000000,1000000,1000000,1000000,1000000};
	int n, m, count = 0;
	for(int i = 1; i <= 5; i++)
		for(int j = 1; j <= 5; j++)
			cin >> a[i][j];
	for(int i = 1; i <= 5; i++)
		for(int j = 1; j <= 5; j++)
			{if(a[i][j] > max[i])
			max[i] = a[i][j];}
	for(int j = 1; j <= 5; j++)
		for(int i = 1; i <= 5; i++)
			{if(a[i][j] < min[j])
			min[j] = a[i][j];}
	for(int i = 1; i <= 5; i++)
		for(int j = 1; j <= 5; j++)
			if(max[i] == min[j])
			{
				cout << i << " " << j << " " << max[i] << endl;
			    count = 1;
		    }
	if (count == 0)
		cout << "not found" << endl;






	
	
	
	return 0;
}