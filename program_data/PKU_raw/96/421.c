//****************************************
//*?????13                    **
//*?????? 1100012920              **
//*???2011.11.2                     **
//****************************************
int main()
{
	char num[100], ans[100];
	int n, i, flag = 1, a = 0; 
	cin.get(num, 100);
	n = strlen(num);
	for (i = 0; i < n; i++)
	{
		ans[i] = (a * 10 + (num[i] - '0')) / 13;
		a = (a * 10 + (num[i] - '0')) % 13;
	}
	for (i = 0; i < n; i++)
	{
		if (n != 2)
		{
		   if (n != 1 && flag == 1 && (ans[i] - '0' + 48) == 0)
		    	continue;
		   else if ((ans[i] - '0' + 48) != 0 || flag != 1 || n == 1)
		   {
		    	flag = 0;
			    cout << ans[i] - '0' + 48;
		   }
		}
	}
    if (n == 2)
	{
	   if ( (ans[0] - '0' + 48) != 0)
		   cout << ans[0] - '0' + 48;
	   cout << ans[1] - '0' +48;
	}
	cout << endl << a;
	return 0;
}
