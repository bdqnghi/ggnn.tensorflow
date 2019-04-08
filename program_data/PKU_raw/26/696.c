int main()
{
	char s[101],temp[101];
	gets(s);
	int i,j=0;
	
    for(i=0;i<strlen(s);i++)
	{
		if((s[i]!=' ')||(s[i-1]!=' '&&s[i]==' '))
		{
			
			temp[j]=s[i];
			j++;
		}
	}
	temp[j]='\0';
    puts(temp);
	return 0;
}

		
