//****************************************
//*???????????                       
//*?????? 1100012789      
//*???2011.11.25                       
//****************************************

int Multi(int x, int y, int day);
int n;
int main()
{
	int day, i, j;
	cin >> n >> day;
	for (i = 1; i < 10; i++) // ?????
	{
		cout << Multi(i, 1, day);
		for (j = 2; j < 10; j++)
			cout << " " << Multi(i, j, day);
		cout << endl;
	}
	return 0;
}
int Multi(int x, int y, int day)
{
	if (day == 0)
		if (x == 5 && y == 5)
			return n;
		else return 0;
	return (Multi(x, y, day - 1) * 2 + Multi(x - 1, y - 1, day - 1) + Multi(x - 1, y, day - 1) 
		+ Multi(x - 1, y + 1, day - 1) + Multi(x, y - 1, day - 1) + Multi(x, y + 1, day - 1) +
		Multi(x + 1, y - 1, day - 1) + Multi(x + 1, y, day - 1) + Multi(x + 1, y + 1, day - 1));
	

}
