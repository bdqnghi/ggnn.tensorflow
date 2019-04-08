

int main(int argc, char argv[])
{
	char cArray[300], ch;
	int i,j;
	int len;
	int Cap1[26];
	int Cap2[26];
	int flag=0;

	for(i=0; i<26; i++)
	{
		Cap1[i]=0;
		Cap2[i]=0;
	}

	gets(cArray);

	len=strlen(cArray);

	//for(i=0; i<len; i++)

	for(i=0; i<len; i++)
	{
		ch=cArray[i];
		if(ch>='A' && ch<='Z')
		{
			Cap1[ch-'A']++;
			flag++;
		}
		else if(ch>='a' && ch<='z')
		{
			Cap2[ch-'a']++;
			flag++;
		}
	}

	if(flag>0)
	{
	for(i=0; i<26; i++)
	{
		if(Cap1[i]>0)
			printf("%c=%d\n", 'A'+i, Cap1[i]);
	}
	for(i=0; i<26; i++)
	{
		if(Cap2[i]>0)
			printf("%c=%d\n", 'a'+i, Cap2[i]);
	}
	}
	else
		printf("No\n");

	return 0;
}
