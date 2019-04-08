/*			???????2?N?? 
			?????2010?12?17?
			???????
*/
int main()
{
	int num[100]={1} , i , j , len0 = 1 ,len1 , n ;
	cin >> n ;
	for (i = 0 ; i < n ; i++)
	{
		len1 = len0 ;
		if (num[len1 -1] >= 5)	len0++ ;
		for (j = len1 - 1 ; j >= 0 ; j--)
		{
			if (num[j] < 5)		num[j] = num[j] * 2 ;
			else 
			{
				num[j] = num[j] * 2 - 10 ;
				num[j + 1] ++ ;
			}
		}
	}
	for (i = len0 - 1 ; i >= 0 ; i--)
		cout << num[i] ;
	return 0 ;
}