void main()
{
	char s1[101], s2[101];
	int i, count=0;
	char c;
	gets(s1);
	for(i=0;(c=s1[i]!='\0');i++)
	{
		count++;
	}
	for(i=0;i<count-1;i++)
	{
		s2[i]=s1[i]+s1[i+1];
	}
	s2[count-1]=s1[count-1]+s1[0];
	for(i=0;i<count;i++)
	{
	printf("%c", s2[i]);
	}
}

