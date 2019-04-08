int main()
{
	char a[5000];
	char b[5000];
	cin >> a >> b;
	int n = 1;
	for(int l = 0; a[l] != '\0'; l++)
		if(a[l] == ',')
			n++;
	cout << n << " ";
	char come[2500][4], go[2500][4];
	int i = 0, j = 0, k = 0;
	for( ; i < strlen(a); i++)
	{
		if(a[i] != ',')
		{
			come[j][k] = a[i];
			k++;
		}
		else
		{
			come[j][k] = '\0';
			j++;
			k = 0;
		}
	}
	come[j][k] = '\0';
	i = 0, j = 0, k = 0;
	for( ; i < strlen(b); i++)
	{
		if(b[i] != ',')
		{
			go[j][k] = b[i];
			k++;
		}
		else
		{
			go[j][k] = '\0';
			j++;
			k = 0;
		}
	}
	go[j][k] = '\0';
	int come1[2500];
	int go1[2500];
	for(i = 0; i < n; i++)
	{
		come1[i] = atoi(come[i]);
		go1[i] = atoi(go[i]);
	}
	int max = 0;
	int peo = 0;
	for(int time = 1; time < 1000; time++)
	{
		for(int num = 0; num < n; num++)
		{
			if(come1[num] <= time && time < go1[num])
				peo++;
		}
		if(peo > max)
			max = peo;
		peo = 0;
	}
	cout << max << endl;
}