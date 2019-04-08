void Q(char a[])
{
	char c;
	c = a[0];
	int pos[100];
	int i = 0, num = 0;
	do
	{
		if (a[i] == c)
		{
			num++;
			pos[num] = i;
		}
		else
		{
			cout << pos[num] << " " << i << endl;
			num--;
		}
		i++;
	}while (i <= strlen(a) - 1);
}
int main()
{
	char children[100];
	cin >> children;
	Q(children);
	return 0;
}