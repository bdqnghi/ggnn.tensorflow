int main()
{
	char str[1000], sub[500], rep[500];
	int n, m, cut, i = 0, flag = 0;
	cin >> str >> sub >> rep;
	n = strlen(str);
	m = strlen(sub);
	cut = strlen(rep);
	while(str[i] != '\0')
	{
		if(str[i] == sub[0])
		{
			int j = 0;
			int k = i;
			while(sub[j] != '\0')
			{
				if(sub[j] == str[k])
				{
					j++;
					k++;
				}
				else
					break;
			}
			if(j == m)
			{
				for(int t = n-1; t >= i + m; t--)
				{
					str[t + cut - m] = str[t];
				}
				str[n  + cut - m ] = '\0';
				for(int t = i; t < i + cut ;t++)
				{
					str[t] = rep[t-i];
				}
				flag = 1;
			}
			if(flag == 1)
				break;
		}
		i++;
	}
	cout<<str;
	return 0;
}