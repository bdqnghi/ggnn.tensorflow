int main()
{
	int i=0;
	char a[1000];
	gets(a);
	while(a[i]!='\0')
	{
		if(a[i]>='a'&&a[i]<='z')
			a[i]+='A'-'a';
		i++;
	}
	i=0;
	char letter=a[0];
	int again=0;
	while(1)
	{
		if(a[i]==letter)
			again++;
		if(a[i]!=letter)
			{
				printf("(%c,%d)",letter,again);
				again=1;
				letter=a[i];
			}
		if(a[i]=='\0')
			break;
		i++;
	}
	return 0;
}
