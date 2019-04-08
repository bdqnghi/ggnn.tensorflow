/**
 * @file    1.cpp              
 * @author  ??? 1100013230               
 * @date    2011-12-7     
 * @descrption        
 *          ??????:??????
*/
int main()
{
	int flag1[10000] = {0}, flag2[10000] = {0}, a, b, n, flag = 0, i;
	cin >> n;                             // n????
	cin >> a >> b;
	while (a != 0 || b != 0)              // ?????0 0?????
	{
		flag1[a]++;                       // a??????1
		flag2[b]++;                       // ??a????1
		cin >> a >> b;
	}
	for (i = 0; i < n; i++) 
		if (*(flag1 + i) == 0 && *(flag2 + i) == n - 1)  // ?i??????0???i????n - 1??i?????
		{
			cout << i;                                   // ??i
			flag = 1;                                    // flag???????????
		}
	if (!flag)                                           // ?????????"NOT FOUND" 
		cout << "NOT FOUND" ;
	return 0;
}