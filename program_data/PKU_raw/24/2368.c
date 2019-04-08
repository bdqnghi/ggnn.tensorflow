
int main()
{
	char a[20000];
	char b[200][100];
	int c[200];
	cin.get(a,20000);
	
	int i = 0;
	int j = 0;
	int k = 0;
	while(a[i] != '\0')
	{
		if(a[i] == ' ' || a[i] == ',')
		{
			j++;
			k = 0;
		}
		else
			b[j][k++] = a[i];
		i++;
	}
	
	int max = strlen(b[0]); int maxpis = 0;
	int min = strlen(b[0]); int minpis = 0;
	for(i = 0 ; i < 200 ; i++ )
	{
		c[i] = strlen(b[i]);
		if(c[i] > max)
		{
			maxpis = i;
			max = c[i];
		}
		if(c[i] < min && c[i] > 0)
		{
			minpis = i;
			min = c[i];
		}
	}
	
	cout<<b[maxpis]<<endl;
	cout<<b[minpis]<<endl;

	return 0;
}
