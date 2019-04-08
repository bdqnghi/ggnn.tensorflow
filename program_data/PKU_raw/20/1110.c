int main()
{
	char s1[14],s2[4],s,s3[14];
	int n,m,t;
	while(scanf("%s%s",s1,s2)!=EOF)
	{
		for(n=1,s=s1[0],m=0;s1[n]!='\0';n++)
		{
			if(s1[n]>s)
			{
				m=n;
				s=s1[n];
			}
		}
		for(n=m+1,t=0;s1[n]!='\0';n++,t++)
			s3[t]=s1[n];
		s3[t]='\0';
		for(n=1;n<=3;n++)
			s1[m+n]=s2[n-1];
		s1[m+n]='\0';
		printf("%s%s\n",s1,s3);
	}
	return 0;
	}