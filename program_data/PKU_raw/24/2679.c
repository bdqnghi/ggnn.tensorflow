int main()
{
	int n;
	scanf("%d",&n);
	char s[300],s1[300],s2[300];
	scanf("%s",s1);
	strcpy(s2,s1);
	int l,l1,l2;
	l1=l2=strlen(s1);
	n=n-1;
	while(n)
	{
		n=n-1;
		scanf("\n");
		scanf("%s",s);
		l=strlen(s);
		if (l<l1)
		{
			strcpy(s1,s);
			l1=l;
		}
		if (l>l2)
		{
			strcpy(s2,s);
			l2=l;
		}
	}
puts(s2);
printf("%s",s1);
return 0;
}
