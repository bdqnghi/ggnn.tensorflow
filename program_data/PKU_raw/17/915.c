int main()
{
	char line[101] ={0}, label[101]={0};
	int pos[101] = {0}, left, right, l, i, j, n;
    cin >> n;
	for (j = 0; j < n; j++)
	{
		cin >> line;
		left = 0;
		right = 0;
		l = strlen(line);
		for (i = 0; i < 101; i++)
			label[i] = ' ';
		for (i = 0; line[i] != '\0'; i++)
		{
			if (line[i] == '(')
			{
				left++;
				pos[left] = i;
			}
			if (line[i] == ')')
			{
				if (left <= right)
					label[i] = '?';
				else
					left--;
			}
		}
		for (i = 1; i <= left; i++)
			label[pos[i]] = '$';
		label[l] = '\0';
		cout << line << endl;
		cout << label << endl;
	}
	return 0;
}