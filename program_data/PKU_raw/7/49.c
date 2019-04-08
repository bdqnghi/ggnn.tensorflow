

int f[MAX_LEN];

int kmp(char* p, char* t)
{
	int cur_p = 0, cur_t = 0;
	int len_p = strlen(p);
	int len_t = strlen(t);
	while(cur_p < len_p && cur_t < len_t)
	{
		if(p[cur_p] == t[cur_t])
		{
			cur_p++;
			cur_t++;
		}
		else
		{
			if(cur_p == 0)
				cur_t++;
			else
				cur_p = f[cur_p-1]+1;
		}
	}
	if(cur_p == len_p)
		return cur_t-len_p;
	else
		return -1;
}

void fail(char* p)
{
	int len_p = strlen(p);
	f[0] = -1;
	for(int i=1; i<len_p; i++)
	{
		int j = f[i-1];
		while(p[i]!=p[j+1] && j>=0)
			j = f[j];
		if(p[i] == p[j+1])
			f[i] = j+1;
		else
			f[i] = -1;
	}
}

int main()
{
	char string[257], subString[257], replacement[257];
	char output[512];
	scanf("%s%s%s", string, subString, replacement);
	fail(subString);
	int index = kmp(subString, string);
	if(index > -1)
	{
		int len = strlen(string);
		int sub_len = strlen(subString);
		int rep_len = strlen(replacement);
		int j=0;
		for(int i=0; i<index; i++)
		{
			output[j] = string[i];
			j++;
		}
		for(int i=0; i<rep_len; i++)
		{
			output[j] = replacement[i];
			j++;
		}
		for(int i=index+sub_len; i<len; i++)
		{
			output[j] = string[i];
			j++;
		}
		output[j] = '\0';
		printf("%s", output);
	}
	else
		printf("%s", string);
}