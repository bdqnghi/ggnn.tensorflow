int main()
{
	int len,i;
	char str[100];
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(i!=len-1)
		{
			printf("%c",str[i]+str[i+1]);
		}else{
			printf("%c",str[len-1]+str[0]);
		}
	}
	return 0;
}