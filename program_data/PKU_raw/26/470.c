int main ()
{
	char a[101] = {'\0'};
	cin.getline(a, 101);
	int len = strlen(a);
	for(int i = 0; i < len; i ++)
	if((a[i] != ' ') || ((a[i] == ' ') && (a[i+1] != ' ')))//?????????????????????
		cout << a[i];
	return 0;
}