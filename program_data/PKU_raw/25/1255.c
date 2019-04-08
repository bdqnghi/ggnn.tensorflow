//**************************
//*?????2?N??  **
//*?????? 1200012888 **
//*???2013.11.15**
//**************************
int main()
{
	int n;
	cin >> n;
	int buf[Max_Size] = {1};
	while(n)
	{
		for(int i = 0;i < Max_Size ; i++)
		{
			buf[i] = 2 * buf[i] ;
		}
		for(int i = 0 ; i < Max_Size ; i++)
		{
			buf[i + 1] = buf[i] / 10 + buf[i + 1];
			buf[i] = buf[i] % 10;
		}
		n --;
	}
	int flag = 0;
	for (int i = Max_Size - 1 ; i >= 0 ; i--)
	{
		if(flag)
		{
			cout << buf[i];
		}
		else if(buf[i] != 0)
		{
			cout << buf[i];
			flag = 1;
		}
	}
	return 0;
}