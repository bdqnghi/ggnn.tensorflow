// 2_4.cpp : Defines the entry point for the console application.
//


int prime(int i)
{
	int sign = 0;
	for(int j = 2 ; j < i ; j ++)
	{
		if(i % j == 0 && j != i)
		{
			sign = 1;
			break;
		}
	}
	if(sign == 1)
		return 0;
	else
		return 1;
}
int huiwen(int i)
{
	int temp = i;
	int b = 0 ;
	while(temp > 0)
	{
		int a = temp % 10 ;
		b = b * 10 + a ;
		temp = temp / 10 ;
	}
	if(i == b)
		return 1;
	else
		return 0;

}

int main(int argc, char* argv[])
{
	int m,n;
	cin >> m >> n;
	int count = 0;
	for(int i = m ; i <= n ; i ++)
	{
		if(prime(i) && huiwen(i))
		{
			count ++ ;
			if(count == 1)
				cout<<i;
			else
				cout <<","<<i;
		}
	}
	if(count == 0)
		cout<<"no"<<endl;
	return 0;
}
