int main()
{
	char a[1000];
	int n = 1, i, j;
	cin >> a;
	for (i = 0; a[i] != '\0'; i++)
	{
		if ((a[i] - 'a') == (a[i+1] - 'a') ||(a[i] - 'a') == (a[i+1] - 'A')||(a[i] - 'A') == (a[i+1] - 'a')||(a[i] - 'A') == (a[i+1] - 'A'))
			n++;
		else 
		{
			if((a[i] >= 'a') && (a[i] <= 'z'))
			cout << "("<< (char)(a[i] - 'a'+'A')<< "," << n << ")";
			else 
				cout << "("<< a[i]<< "," << n << ")";
			n = 1;
		}
	}
	return 0;
}