
int main()
{
	char org[270] = {0}, sub[100] = {0}, rep[100] = {0}, temp[100] = {0};
	cin >> org >> sub >> rep;
	int i, j, l1 = strlen(org), l = strlen(sub), flag = 0;
	for (i = 0; i < l1; i++)
	{
		for (j = i; j < i+l; j++)
		{
			temp[j - i] = org[j];
		}
		if (strcmp(temp, sub) == 0) {
			flag = 1;
			break;
		}
	}
	if (flag){
		for (int k = 0; k < i; k++) cout << org[k];
		cout << rep;
		cout << org + j << endl;
	}
	else cout << org << endl;
	return 0;
}
