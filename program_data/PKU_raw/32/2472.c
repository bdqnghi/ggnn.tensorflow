int main()
{
 	int n, i, j, k, t1[1000] = {0}, t2[1000] = {0}, x[1000], l1, l2;
 	char c1[1000], c2[1000];
 	cin >> n;
 	k = n;
 	while (k != 0)
	{	
		cin.get();
		cin.getline(c1,1000);
		cin.getline(c2,1000);
	 	l1 = strlen(c1);
	 	l2 = strlen(c2);
	 	for (i = 0; i < 1000; i++)
	 		t2[i] = t1[i] = 0;
	 	for (i = 0; i < l1; i++)
	 		t1[i] = c1[l1 - 1 - i] - '0';
	 	for (i = 0; i < l2; i++)
	 		t2[i] = c2[l2 - 1 - i] - '0';
	 	for (i = 0; i < l1; i++)
	 	{
			x[i] = t1[i] - t2[i];
	 		if (x[i] < 	0)
	 		{
				x[i] += 10;
	 			t1[i + 1]--;
			}
		}
		for (i = l1 - 1; i >= 0; i--)
	 		if(x[i] != 0) break;
		for (j = i; j >= 0; j--)
	 		cout << x[j];
	 	cout << '\n';
		k--;
	}	 	
  	
 	
	
	return 0;
}
	
