int main()
{
	char N[101];
	cin.getline(N, 101);
	int l = strlen(N);
	int quo[101], num[101], i, j = 0, r = 0;
	for(i = 0; i < l; i++)
		num[i] = N[i] - '0';
	for(i = 0; i < l; i++)
	{
		quo[i] = (r * 10 + num[i]) / 13;
		r = (r * 10 + num[i]) % 13;
	}
	int t = 0, temp;
	while(quo[t] == 0) 
	{
		t++;
		temp = t;
	}
	if(temp == l) cout << "0";
	else
	{
		for(; t < l; t++) cout << quo[t];
		
	}
	cout << endl;
	cout << r << endl;
	return 0;
}