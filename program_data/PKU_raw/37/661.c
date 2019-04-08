//**************************************
//????????????????     *
//??????                         *
//???2011.11.3                      *
//**************************************
int main()
{
	int t, i, j, k, num = 0, flag = 0;
	char a[10][100000];
    cin >> t;
	for (i = 0; i < t; i++)
		cin >> a[i];
	for (i = 0; i < t; i++)
	{   
		flag = 0;
		for (j = 0; a[i][j] != '\0' ; j++)
		{   
			
			for (k = j+1; a[i][k] != '\0' ; k++)
			{   
				
				if(a[i][k] == a[i][j])
				{   
					num = 1;
					a[i][k] = ' ';
				}
				
			}
			if ((num == 0) && (a[i][j] != ' '))
			{
				cout << a[i][j] << endl;
				flag = 1;
				break;
            }
			num = 0;
		}
		if (flag == 0)
			cout << "no" << endl;
	}
	return 0;
}