int main()
{
	char line[101], label[101];
	int pos[100];
	int left = 0, right = 0;
	int pos_i, length;
	int i;
	while(cin.getline(line, sizeof(line)))
	{
		for(i = 0; i < 101; i++)
			label[i] = ' ';
		pos_i = -1, left = 0, right = 0;
		length = strlen(line);
		for(i = 0; line[i] != '\0'; i++)
		{
			if(line[i] == '(')
			{
				pos_i++;
				pos[pos_i] = i;
				left++;
			}
			if(line[i] == ')')
			{
				if(right >= left)
					label[i] = '?';
				else
				{
					right++;
					pos_i--;
				}
			}
		}
		if(pos_i >= 0)
		{
			for(i = 0; i <= pos_i; i++)
				label[pos[i]] = '$';
		}
		label[length] = '\0';
		cout << line << endl;
		cout << label << endl;
	}
	return 0;
}
