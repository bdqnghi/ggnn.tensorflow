int main()
{
	int a[42] = {0}, N, i, j, k;  //?????????0
	cin >> N;
	a[41] = 1;  //??????????2 
	if (N == 0)
	{
		cout << "1" << endl;
		return 0;
	}
	for (k = 1; k <= N; k++)  //????N??2
	{
	    for (i = 41; i >= 0; i--)  //??????2
	    	a[i] = a[i] * 2;
	    for (j = 41; j >= 0; j--)  //?????
		    if (a[j] >= 10)
			{
			    a[j-1] += a[j] / 10;
			    a[j] = a[j] % 10;  //??
			}
	}
	i = 0;  //?i???
  	while(a[i]==0)  //???????0??
		    i++;
	for (; i <= 41; i++)  //????
	     cout << a[i];
	cout << endl;
	return 0;
}



