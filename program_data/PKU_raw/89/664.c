// ******************************
// *** ??????.cpp       ***
// *** ID:1000012895          ***
// *** ???                 ***
// *** 2010/12/11             ***
// ******************************
int main()
{
	int know[11101], cnt = 0;
	int n, i, p1, p2;
	cin >> n;
	for(i = 0; i < n; i++)
			know[i] = 0;
	while(true)
	{
		cin >> p1 >> p2;
		if(p1 == 0 && p2 == 0)
			break;
		know[p2]++;
		know[p1] = -1;
	}
	for(i = 0; i < n; i++)
		if(know[i] == n - 1)
		{
			cout << i;
			cnt++;
		}
	if(cnt == 0)
		cout << "NOT FOUND";
	return 0;
}
		