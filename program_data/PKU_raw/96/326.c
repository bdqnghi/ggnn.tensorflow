/*?????13
  ??????
  ???1100012802*/
int main()
{
	char a[100];
	int q[100] = {0},b[100] = {0},i,j;
	cin.getline(a,100);
	for(i = 0;a[i] != '\0';i++)
	{
		q[i] = a[i] - '0';
	}
	for(i = 0;a[i + 1] != '\0';i++)
	{
		q[i + 1] = 10 * q[i] + q[i + 1];
		b[i] = q[i + 1] / 13;
		q[i + 1] = q[i + 1] % 13;
	}
	if(i == 0)
		cout << 0;
	else if(i == 1 || b[0] != 0)
		cout << b[0];
	for(j = 1;j <= i - 1;j++)
		cout << b[j];
	cout << endl << q[i];
	return 0;
}