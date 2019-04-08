int main()
{
	int n, i, cnt;
	char a[999][41];
	cin >> n;
	for(i = 1; i <= n; i++)
	{cin >> a[i];}
	i = 1;
	cnt = 0;
	do
	{
		cnt += strlen(*(a + i));
		if(cnt <= 80)
		{
			cout << *(a + i); 
			if(cnt + strlen(*(a + i + 1)) + 1 <= 80 && i != n)
			{
				cout << " ";	
			}
                        cnt++;		
			i++;
		}
		else
		{
			cout << endl;
			cnt = 0;
		}
	}while(i <= n); 
	return 0;
}