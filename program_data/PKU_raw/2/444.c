//****************************************
//*???????                       **
//*?????? 1100012763              **
//*???2011.11.14                     **
//****************************************
int main() 
{
	int n , number , i , j , k , t , len , max;
	int map[26][1000] = {0};
	char name[27];

	cin >> n;
	for (i = 0; i <= 25; i++)
		map[i][0] = 0;
	for (i = 1; i <= n; i++)
	{
		cin >> number >> name;
        len = strlen(name);
		for (j = 0; j <= len - 1; j++)
		{
			k = name[j] - 'A';
            map[k][0]++;
			t = map[k][0];
			map[k][t] = number;
		}
	}
	max = 0;
	for (i = 0; i <= 25; i++)
	{
		if (map[i][0] > max)
		{
			max = map[i][0];
			k = i;
		}
	}
	cout << (char)(65 + k) << endl;
	cout << map[k][0];
	for (i = 1; i <= map[k][0]; i++)
		cout << endl << map[k][i];
	
	return 0;
}