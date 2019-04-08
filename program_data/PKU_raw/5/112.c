int main()
{
	double std,s;
	int i,n1,n2,t=0;
	char s1[500],s2[500];
	scanf("%lf",&std);
	scanf("%s",&s1);
	scanf("%s",&s2);
	n1=strlen(s1);
	n2=strlen(s2);
	if(n1!=n2)
	{
		printf("error");
		return 0;
	}
	for(i=0;i<n1;i++)
	{
		if(s1[i]!='A'&&s1[i]!='T'&&s1[i]!='C'&&s1[i]!='G')
		{
			printf("error");
			return 0;
		}
		if(s2[i]!='A'&&s2[i]!='T'&&s2[i]!='C'&&s2[i]!='G')
		{
			printf("error");
			return 0;
		}
	}
	for(i=0;i<n1;i++)
	{
		if(s1[i]==s2[i])
			t++;
	}
	s=(double)t/n1;
	if(s>std)
		printf("yes");
	else
		printf("no");
	return 0;
}

