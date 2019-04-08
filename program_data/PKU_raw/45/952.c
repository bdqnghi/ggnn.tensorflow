
int f[50];

void func(char* pat)
{
	int len = strlen(pat);
	f[0] = -1;
	for(int i=1; i<len; i++)
	{
		int j = f[i-1];
		while(j>=0 && pat[i] != pat[j+1])
			j = f[j];
		if(j == -1)
			f[i] = -1;
		else
			f[i] = j+1;
	}
}

int main()
{
	char str[51], pat[51];
	scanf("%s%s", pat, str);
	func(pat);
	int str_len = strlen(str);
	int pat_len = strlen(pat);
	int i=0, j=0;
	while(i<str_len && j<pat_len)
	{
		if(str[i] == pat[j])
		{
			i++;
			j++;
		}
		else
		{
			if(j == 0)
				i++;
			else
				j = f[j-1]+1;
		}
	}
	if(j == pat_len)
		printf("%d", i-pat_len);
}