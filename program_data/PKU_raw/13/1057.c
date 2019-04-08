int main()
{
	int a[100001] , b[100001];
    int i , j , step = 1;
    int n;
    cin >> n;
    for(i = 1; i <= n; i++)
    cin >> a[i];
    b[step] = a[1];
    cout << a[1];
    for(i = 2; i <= n ; i++)
    {
		for(j = 1; j <= step; j++)
		{
			if(a[i] == b[j])  break;	
		}
		if(j == step + 1)
		{
			step++;
			cout << " " << a[i];
			b[step] = a[i];
		}	
	}
	return 0;	
}
