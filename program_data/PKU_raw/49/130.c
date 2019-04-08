//**********************************
//* ????????               *
//* ??????                   *
//* ???2010-11-24               *
//* ?????????             *
//**********************************
void judge(char n[],int i,int len);
int main()
{
	char n[500],str;
	int i = 0,len = 2;
	cin >> n;
	for(len = 2; len <= strlen(n); len++)
		for(i = 0; i <= strlen(n) - len; i++)
			judge(n,i,len);
	return 0;
}
void judge(char n[],int i,int len)
{
	int j = 0;
	for(j = 0; j < len; j++)
		if(n[i + j] != n[i + len - j - 1])
			return;
	for(j = 0; j < len; j++)
		cout << n[i + j];
	cout << '\n';
	return;
}