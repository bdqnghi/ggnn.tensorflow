// ?????? ?? 1000062708
int main()
{
	char a[100000], *p;
	int i, f = 0;
	cin.getline(a,100000);
	for(p = a;*p != '\0';p++)
	{
		if(*p != ' ')
		{
			cout << *p;
			f = 0;
		}
		else if(f == 0)
		{
			cout << ' ' ;
			f = 1;
		}
	}
	return 0;
}