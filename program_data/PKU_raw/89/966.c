/************************* 
??????? 
??????
???2011?12?11? 
*************************/ 

int main()
{
	int n, i = 0, j, k = 0; 
	cin >> n; 
 	int a[100000][2];                               // ??a[i][0]??a[i][1]
	int x[n];                               // ??x[i]?? i ???????
	int y[n];								// ??x[i]???? i ?????
	memset(x, 0, sizeof(x));                           
	memset(y, 0, sizeof(y));      // x, y ??    
	           
	for (i = 0; i < 100000; i++)
	{
		for (j = 0; j < 2; j++)
			cin >> a[i][j];
		if ((a[i][0] == 0) && (a[i][1] == 0))
			break;
		k++;
	}  // ??? 0 0 ???? 
	
	for (i = 0; i < k; i++)
	{
		x[a[i][0]]++;                           
		y[a[i][1]]++;                          
	}
	
	int *p = NULL, *q = NULL; 	// p, q ????? x ?y??? 
	q = y;
	i = 0;  						// i ????? 
	for (p = x; ; p++)
	{
		if (i == n)
		{
			cout << "NOT FOUND";	 // ???????“NOT FOUND“???? 
			break;
		}
		         
		if ((*p == 0) && (*q == n - 1))  // ?????? 0 ??? n - 1 ????
		{
			cout << i;                       // ????????? 
			break;                            
		} 
		i++; q++;	
	}	          // ???????          
	return 0;
}