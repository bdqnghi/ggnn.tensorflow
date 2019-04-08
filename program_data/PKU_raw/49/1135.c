int main()
{
	char s[1000];
	char s1[1000],s2[1000];
	int i,j,k=0,l=0,m,len,flag=0;
	gets(s);
	len=strlen(s);
	j=1;
	while(j<=len-1)
	{
		for(i=k;i<=len-j-1;i++)
		{
			for(m=0;m<=j;m++)
			{
				s1[m]=s[i+m];
				s2[m]=s[i+j-m];
			}
			s1[m]='\0';
			s2[m]='\0';
			if(strcmp(s1,s2)==0)printf("%s\n",s1);
		}
		k++;
		if(k=len-j)
		{
			k=0;j++;
		}
	}
	return 0;
}