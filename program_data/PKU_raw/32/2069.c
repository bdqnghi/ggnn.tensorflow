int main()
{
	int n, m; // ????????n?????n
	const int MAX_LEN = 100;

	cin >> n;
	cin.get();  // ????n????
	for(m = 0 ; m < n ; m++)
	{   
		int a[MAX_LEN + 1], b[MAX_LEN]; 
		
	    char str1[MAX_LEN + 1], str2[MAX_LEN + 1]; // ????????????
        
		cin.getline(str1,MAX_LEN + 1); //???????
	    cin.getline(str2,MAX_LEN + 1);
        
		
	    int len1 = strlen(str1), len2 = strlen(str2); // ????????

		memset(a,0,sizeof(a)); // ??????
		memset(b,0,sizeof(b));


	    int i, j = 0;
	    for(i = len1 - 1 ; i >= 0 ; i--)  // ??????????????
		    a[j++] = str1[i] - '0';
	    j = 0;
	    for(i = len2 - 1 ; i >= 0 ; i--)
		    b[j++] = str2[i] - '0';

	    for(i = 0 ; i < MAX_LEN ; i++) // ????
		{
		    a[i] -= b[i];

		    if(a[i] < 0)
			{
			    a[i] += 10;
			    a[i + 1]--;
			}
		}
		
		i = MAX_LEN;  // ??????????
		while(a[i] == 0)
		{
			i--;
		}
		for(; i >= 0 ; i--) // ????????
			cout << a[i];
		cout << endl;

		cin.get();  
	}

	return 0;
}