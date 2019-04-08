/**
* @file 1000012853_3
* @author 1000012853 ??
* @date 2010.10.30
* @desc ???????
*/
int main()
{
	int k, n, num, a[100000];                             //????
	cin >> n;
	for ( int i = 0; i < n; i ++)                        //????
	{
		cin >> a[i];
	}
	cin >> k;                                            //???????
	int count = 0;
	for ( int s = 0; s < n; s ++)                    
	{
		if ( a[s] == k)                                  //????????????
		{   count ++;
			for (int j = s; j < n; j ++)
			{
				a[j] = a[j+1];
			}
			s --;                                        //?????????
		}
	}
	num = n - count; 
	cout << a[0];                                        //??????????????
	for ( int l = 1; l < num; l ++)                      //????
	{
		cout <<' '<< a[l];
	}
	return 0;
}                                                        //?????