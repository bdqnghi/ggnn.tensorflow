int len1,len2,len3;
char replacement[256];
void answer(char str[260],char substr[256]);
int main()
{
	char str[260],substr[256];
	cin.getline(str,260);
	cin.getline(substr,256);
	cin.getline(replacement,256);
	len1 = strlen(str);
	len2 = strlen(substr);
	len3 = strlen(replacement);
	answer(str,substr);
	return 0;
}
void answer(char str[260],char substr[256])
{
	int i,k,count,num = 0;
	for(i = 0; i < len1; i++)
	{
		if(str[i] == substr[0])
		{
			count = 0;
			for(k = i; ; k++)
			{
				if((str[k] == substr[count])&&(str[k] != '\0'))
					count++;
				else
					break;
			}
			if(count == len2)
			{
				num++;
				for(k = 0; k < i; k++)
					cout << str[k];
				for(k = 0; k < len3; k++)
					cout << replacement[k];
				for(k = i + len2; k < len1; k++)
					cout << str[k];
				break;
			}
		}
	}
	if(num == 0)
	{
		for(i = 0; i < len1; i++)
			cout << str[i];
	}
}