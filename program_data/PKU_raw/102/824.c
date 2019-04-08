int main()
{
	int n, i, j = 0, k = 0, r, s, u, v;  // n????
	double height, girl_height[40], boy_height[40], temp;
	char gender[6];
	cin >> n;
	for (i = 0; i < n; i++)  // ??????j??????k?????
	{
		cin >> gender >> height;
		if (gender[0] == 'm')   
		{
			boy_height[j] = height;   
			j++;
		}
		else
		{
			girl_height[k] = height;
			k++;
		}
	}
	for (r = 0; r < j - 1; r++)
	{
		for (u = r + 1; u < j; u++)
		{
			if (boy_height[r] > boy_height[u])
			{
				temp = boy_height[r];
				boy_height[r] = boy_height[u];
				boy_height[u] = temp;
			}
		}
	}
	for (s = 0; s < k - 1; s++)
	{
		for (v = s + 1; v < k; v++)
		{
			if (girl_height[s] < girl_height[v])
			{
				temp = girl_height[s];
				girl_height[s] = girl_height[v];
				girl_height[v] = temp;
			}
		}
	}
	for (r = 0; r < j; r++)
	{
		cout << fixed << setprecision(2)<< boy_height[r] << " ";
	}
	for (r = 0; r < k - 1; r++)
	{
		cout << fixed << setprecision(2) << girl_height[r] << " ";
	}
	cout << girl_height[k - 1];
	return 0;
}

