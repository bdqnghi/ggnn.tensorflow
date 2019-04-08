
int main()
{
	double male[50], female[50], height, tep;
    int n, i, j, m = 0, f = 0;
	char ch[7];

	cin >> n;
	for (i = 0; i < n ; i++)
	{
		 cin.get();
	     cin.getline(ch, 7, ' ');//?????????????cin?getline??????height??????????cin??
		 cin >> height;
		 if (ch[0] == 'm')
			 male[m++] = height;
		 else
			 female[f++] = height;
	}
	for (i = 0; i < m - 1; i++)
		for (j = 0; j < m - 1 - i; j++)
		{
          	if(male[j] > male[j + 1])
			{
			     tep = male[j];
				 male[j] = male[j + 1];
				 male[j + 1] = tep;
			}
		}
	for (i = 0; i < f - 1; i++)
	    for (j = i + 1; j < f; j++)
		{
		    if (female[i] < female[j])
			{
			    tep = female[i];
				female[i] = female[j];
				female[j] = tep;
			}
		}
	cout << fixed << setprecision(2);
	cout << male[0];
	for (i = 1; i < m; i++)
		cout << " " << male[i];
	for (i = 0; i < f; i++)
        cout << " " << female[i];
	
	    return 0;
}
