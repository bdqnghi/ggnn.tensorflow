int main ()
{
	char a[1000][41] = {'\0'};                       //???????
	int i = 0, j = 0, n = 0;
	cin >> n;
	for(i = 0; i < n; i ++)
		cin >> *(a+i);                               //????
	int sum = 0;
	for(i = 0; i < n; i ++)
	{
		if(sum == 0)                                 //?????????
		{
			cout << *(a + i);
			sum = sum + strlen(*(a + i));
		}
		else if (sum == 80)                          //??????80???
		{
			cout << endl;
			sum = 0;
			i --;
		}
		else if (sum + strlen(*(a + i))  >= 80)      //?????????????80
		{
			cout << endl ;
			sum = 0;
			i --;
		}
		else                                         //?????
		{
			cout << ' ' << *(a + i);
			sum = sum + strlen(*(a + i)) + 1;
		}
	}

	return 0;
}