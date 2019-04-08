
int main()
{
	char s1[120],s2[120];
	char *p;
	int i;
	int n;
	gets(s1);
	p=s1;
	n=strlen(s1);
	for (i=0;i<n;i++)
	{
		if (i!=n-1)
		{
			s2[i]=*(p+i)+*(p+i+1);
		}
		else
		{
			s2[i]=*p+*(p+(n-1));
		}
	}
	s2[n]='\0';
	puts(s2);
	return 0;
}