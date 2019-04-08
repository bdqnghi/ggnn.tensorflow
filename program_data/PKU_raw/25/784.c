/*************************
 ***??:??? 1200012776
 ***????:??2?N??
 ***??:2012?12?5?
 *************************/
int length(int ch[])	//??length????????????
{
	int i;
	for (i = 199; i >= 0; i--)
	{
		if (ch[i] != 0)
		break;
	}
	return  (i + 1);
}
void multi(int ch[], int a)	//?????????,??multi,ch1(??)???ch1 * a
{
	int i, max = length(ch), t;
	int ji[200] = {0};
	for (i = 0; i <= max + 3; i++)
	{
		ji[i] = ch[i] * a;
		ji[i + 1] += ch[i] * a;
	}
	for (i = 0; i <= max + 3; i++)	//????ji??????
	{
		t = ji[i];
		ji[i] = ji[i] % 10;
		ji[i + 1] += t / 10;
	}
	for (i = 0; i <= max + 5; i++)	//??????????ch
	{
		ch[i] = ji[i];
	}
}
void pow(int p, int j, int chpow[])	//??a, b????,?chpow[]??(????)
{
	int i;
	if (j == 0)
	{
		chpow[0] = 1;
	}
	else
	{
		chpow[0] = 1;
		for (i = 1; i <= j; i++)
		{
			multi(chpow, p);
		}
	}
}
int main()
{
	int i, chpow[200] = {0}, end;
	cin >> i;
	pow(2, i, chpow);
	end = length(chpow);
	for (i = end - 1; i > -1; i--)
	{
		cout << chpow[i];
	}
	cout << endl;
	return 0;
}
	