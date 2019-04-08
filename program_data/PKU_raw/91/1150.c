//2013.12.8
//zwb

int main ()
{
	char a[110] = {'\0'}, b[110] = {'\0'};
	cin.getline(a,110);
	for(int i = 0; i < strlen(a); i++)
	{
		if(i != strlen(a) - 1)
			b[i] = a[i] + a[i+1];
		else
			b[i] = a[i] + a[0];
	}
	cout << b << endl;
	return 0;
}
