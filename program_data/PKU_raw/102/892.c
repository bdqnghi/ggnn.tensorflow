//*************************************************
//***???????***
//***??????***
//***???2012.12.24***
//*************************************************
int main ()
{
	int n,x = 0,y = 0,i,j,temp;
	char a[7];
	double male[40],female[40];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a;
		if (strcmp(a,"male") == 0)
		{
			cin >> male[x++];
		}
		else if (strcmp(a,"female") == 0)
		{
			cin >> female[y++];
		}
	}
	temp = 0;
	for (i = 0; i < x; i++)
	{
		if (male[i] < male[temp])
			temp = i;
	}
	cout << fixed << setprecision(2) << male[temp];
	male[temp] = 0;
	for (i = 0; i < x - 1; i++)
	{
		for (j = 0; j < x; j++)
		{
			if (male[j] > 1)
			{
				temp = j;
				break;
			}
		}
		for (;j < x; j++)
		{
			if (male[j] > 1 && male[j] < male[temp])
				temp = j;
		}
		cout << " " << male[temp];
		male[temp] = 0;
	}
	for (i = 0; i < y; i++)
	{
		temp = 0;
		for (j = 0; j < y; j++)
		{
			if (female[j] > female[temp])
			{
				temp = j;
			}
		}
		cout << " " << female[temp];
		female[temp] = 0;
	}
	return 0;
}