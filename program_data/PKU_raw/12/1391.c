//****************************
//**Title:??              **
//**Author:?? 1300012732  **
//**Date?2013.10.30        **
//**File?1.cpp             **
//****************************
int main()
{
	int a[15],n;
	int i;
	cin >> a[0];
	while (a[0] != -1)
	{
	    for (i = 1; ; i++)
		{
		    cin >> a[i];
		    if (a[i] == 0)
			{
				n = i;
			    break;
			}
		}
	    int cnt = 0,j;
	    for (i = 0; i <= n-2; i++)
		    for (j = i + 1; j <= n-1; j++)
			{
			    if (a[i] - 2 * a[j] == 0 || a[j] - 2 * a[i] == 0)
				    cnt++;
			} 
	    cout << cnt << endl;
		for (i = 0; i <= 14; i++)
			a[i] = 0;
		cin >> a[0];
	}
	return 0;
}
