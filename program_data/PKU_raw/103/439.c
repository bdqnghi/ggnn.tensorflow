int main()
{
    char a[1000] ,yasuoc[1000];
    int yasuoi[1000] ;
	cin >> a ;
	int i = 1 , temp = 1 ,sum =0;
	while (i < strlen(a))
	{
		if (a[i] == a[i-1] || a[i] -  a[i-1] == 32 || a[i]-a[i-1] == -32)
		{
			temp++ ;
			i++;
		}
		else
		{
			if (a[i - 1] - 'a' >= 0)
				yasuoc[sum] = a[i - 1] - 32;
			else
				yasuoc[sum] = a[i - 1] ;
			yasuoi[sum++] = temp ;
			temp = 1 ;
			i++;
		}
	}
	if (a[i - 1] - 'a' >= 0)
		yasuoc[sum] = a[i - 1] - 32;
	else
		yasuoc[sum] = a[i-1] ;
	yasuoi[sum++] = temp ;
	for (i = 0 ; i<sum ; i++)
		cout << "(" << yasuoc[i] << ","<<yasuoi[i] <<")" ;
	return 0 ;
}