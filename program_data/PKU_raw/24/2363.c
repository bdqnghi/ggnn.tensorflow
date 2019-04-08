int main()
{
	char a[200];
	cin.getline(a, 200);
	int len = strlen(a);
	int i = 0, min = 20, max = 0, mini, maxi, l = 0;
	for(i = 0; i <= len; i++)
	{
		if(a[i] != ' ' && a[i] != ',' && a[i] != '\0')
			l++;
		else if(a[i-1] != ' ' && a[i-1] != ',' && a[i-1] != '\0')
		{
			if(min > l)
			{
				min = l;
				mini = i;
			}
			if(max < l)
			{
				max = l;
				maxi = i;
			}
			l = 0;
		}
	}
	for(i = maxi - max; i < maxi; i++)
		cout << a[i];
	cout << endl;
	for(i = mini - min; i < mini; i++)
		cout << a[i];
	cout << endl;
	return 0;
}