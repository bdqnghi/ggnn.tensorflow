int main()
{
	int a[5][5], max = 0, min = 9999999, i = 0,k = 0;
	for(i = 0; i < 5; i++)
		for(k = 0; k < 5; k++)
			cin>>a[i][k];
	for(i = 0; i < 5; i++)
		for(k = 0; k < 5; k++)
			{
				int n= 0;
				for(int q = 0; q < 5; q++)
				{
					if(a[i][k] >= a[i][q])
						n++;
					if(a[i][k] <= a[q][k])
						n++;
					if(n == 10)
						{
							cout << i + 1 << " " << k + 1 << " " << a[i][k] << endl;
							return 0;
						}
				}
			}
	cout << "not found" << endl;
	return 0;
}