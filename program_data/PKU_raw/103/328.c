int main()
{
	char a[1000], temp;
	int i, n, alen, count = 0;
	cin.getline(a, 1000);
	alen = strlen(a);
	for(i = 0 ; i < alen ; i++)
	{
		if(a[i] >= 97 && a[i] <= 122)
		{
			a[i] -= 32;
		}
	}
	temp = a[0];
	for(i = 0 ; i < alen ; i++)
	{
		do
		{
			if(a[i] == temp)
			{
				count++;
			}
			if(a[i] != temp)
			{
				cout << "(" << temp << "," << count << ")";
				temp = a[i];
				count = 1;
			}
			i++;
		}while(a[i] != '\0');
		cout << "(" << temp << "," << count << ")";
	}
	return 0;

}
