//***************************
//*?????? 1300012809 **
//*???2013-12-13        **
//*???n-gram????    **
//***************************
int main()
{
	int n, i, j, k, changdu, max1 = 0;                          //????
	int jishu[550] = {0};                                       
	char *p = NULL;                                             //????
	char c[550], bz[550][550];
	cin >> n;                                                   //???????
	cin.get();                                                  //????
	cin.getline(c, 550);                                        //?????
    changdu = strlen(c);                                        //???????
	for (i = 0; i < 550; i++)
		jishu[i] ++;                                            //???????1
	for (i = 0; i <= changdu - n; i++)
		for (j = 0.; j <= n - 1; j++)
			bz[i][j] = c[i + j];                                //????????bz???
	for (i = 0; i <= changdu - n; i++)
		for (j = n; j <= 449; j++)
			bz[i][j] = 0;                                       //?????????“\0”
	for (i = 0; i <= changdu - n; i++)
	{
		for (j = i + 1; j <= changdu - n; j++)
		{
			if (strcmp(bz[i], bz[j]) == 0)
			{
				jishu[i]++;                                     //?????????????
			}
		}
		if (jishu[i] > max1)
			max1 = jishu[i];                                    //???????
	}
	p = bz[0];
	if (max1 > 1) 
	{
		cout << max1 << endl;                                   //?????
		for (i = 0; i<= changdu - n; i++)
		{
			if (jishu[i] == max1)
			{
				for (j = 0; j < n; j++)
					cout << *(p + j);                           //??????
				cout << endl;
			}
			p = bz[i + 1];                                      //????????
		}
	}
	else
		cout << "NO" << endl;                                   //??????????NO
		

	return 0;
}