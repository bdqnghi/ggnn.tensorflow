//********************************
//*???2.cpp   **
//*?????? 1200012768 **
//*???2013.1.3  **
//*???????  **
//********************************
int main()
{
	int n, i, j, count = 0, len1, len2;
	cin >> n;
	char w1[41], w2[41], w3[41];
	cin >> w1;
	len1 = strlen(w1);
	if (n == 1)
		cout << w1;
	else if (n == 2)
	{
		cin >> w2;
		cout << w1 << " " << w2; 
	}
else
{
	for (i = 2;i < n; i++)
	{
		cin >> w2;
		len2 = strlen(w2);
		count += len1 + 1 + len2;
		if (count <= 80)
		{
			cout << w1 << " ";
			count -= len2;
		}
		else
		{
			cout << w1 << endl;
			count = 0;
		}
		strcpy(w1, w2);
		len1 = strlen(w1);
	}
	cin >> w2;
	len2 = strlen(w2);
	count += len1 + 1 + len2;
	if (count <= 80)
		cout << w1 << " " << w2;
	else
		cout << w1 << endl << w2;
}
	return 0;
}
