int main()
{
	char a[101];
	int *p = NULL;
	int  i = 0, j = 0, yushu = 0, shang[101] = {0}, flag = 0;
	cin.getline(a,101);
	for(i = 0 ; a[i] != '\0' ; i++)
	{
		shang[j] = (yushu * 10 + (a[i] - '0')) / 13;
		yushu = (yushu * 10 + (a[i] - '0')) % 13;
		j++;
	}
	shang[j + 1] = 14;
	for(i = 0 ; shang[i] != 14; i++)
	{
		if(shang[i] != 0)
		{
			flag = 1;
			p = &shang[i];
			break;
		}
	}
	if(flag == 0)
	{
		cout << "0" << endl;
		cout << a << endl;
	}
	do
	{
		cout << *p;
		p++;
		i++;
	}while(shang[i + 1] != 14);
	cout << endl;
	cout << yushu << endl;
	return 0;
}
