int main ()
{
	char str[101];
	int l, i, num[100],sh[100],r, j;
	cin.getline(str,101);
	l = strlen(str);
	for(i = 0; i<l;i++)
		num[i] = str[i] - '0';
	r = num[0]; sh[0] = 0;
	for(i = 1; i < l;i++)
	{
		sh[i] = (r*10 + num[i])/13;
		r = (r*10 + num[i])%13;
		
	}if(l == 1) cout << "0" << endl;
	else if(l == 2) cout << sh[1] << endl;
	else
	{	i = 0;
	while(sh[i] == 0)i++;


	for(j = i; j < l;j ++)
	cout << sh[j];

	cout << endl;
	}
cout << r;
return 0;
}



