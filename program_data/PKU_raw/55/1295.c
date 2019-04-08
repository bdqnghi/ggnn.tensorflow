/*???????
  ??????
  ???1100012802*/

void trans(int num,int b)
{
	int m;
	char l;
	if(num != 0)
	{
		m = num % b;
		if(m >= 10)
			l = 'A' + m - 10;
		else
			l = m + '0';
		num = num / b;
		trans(num,b);
		cout << l;
	}
}

void shuzhi(char m[],int a,int b)
{
	int i = 0,temp,num = 0;//i?????
	while(m[i] != ' ')
	{
		if(m[i] >= 'a' && m[i] <= 'z')
			temp = m[i] - 'a' + 10;
		else if(m[i] >= 'A' && m[i] <= 'Z')
			temp = m[i] - 'A' + 10;
		else
			temp = m[i] - '0';
		num = num * a + temp;
		i++;
	}
	if(num == 0)
		cout << 0;
	else
		trans(num,b);
}

int main()
{
	char a[20];
	int z1,z2,i = -1;
	cin >> z1;
	cin.get();
	do
	{
		i++;
		a[i] = cin.get();
	}while(a[i] != ' ');
	cin >> z2;
	shuzhi(a,z1,z2);
	return 0;
}

