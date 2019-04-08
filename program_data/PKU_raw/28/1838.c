int main()
{
	char ch;
	int len = 0,tag=0;
	while((ch = getchar()))
	{
		if((ch == ' '||ch=='\n') && len)
		{
			if(tag)
				printf(",");
			printf("%d", len);
			len = 0;
			tag=1;
			if(ch=='\n')
				break;
		}
		else if(ch!= ' ')
			len++;
	}
	printf("\n");
	return 0;
}