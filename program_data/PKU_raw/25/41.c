int main()
{
	int n, i, j, a[35] = {0};
	a[1] = 1;
	cin >> n;
	if(n == 0) cout << a[1] <<endl;
	else
	{
		for(i = 1;i <= n;i++)
		{
			int flag[35] = {0};
			for(j = 1;  ;j++)
			{
				if(a[j]*2 <= 8)  
				{
					a[j] = a[j]*2 + flag[j-1];
					if(a[j+1] == 0 && a[j+2] ==0 &&a[j+3] == 0) break;
				}
				else if(a[j]*2 >= 10) 
				{
					a[j] = a[j]*2 - 10 + flag[j-1]; 
					flag[j] = 1;
					if(a[j+1] == 0 && a[j+2] == 0 && a[j+3] == 0) 
					{
						flag[j] = 0;
						a[j+1] = 1;
						break;
					}
				}	
			}
		}
		if(a[j+1] == 1) cout << a[j+1];
		for(i = j;i >= 1;i--)
			cout << a[i];
		cout << endl;
	}
	return 0;
}
