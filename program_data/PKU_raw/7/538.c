void main()
{
	int a,b,c,i,j,k,m;
	char s[256],s1[256],s2[256];
	gets(s);
	gets(s1);
	gets(s2);
	a=strlen(s);
	b=strlen(s1);
	c=strlen(s2);
	for(i=0;i<a;i++)
	{
		if(s[i]==s1[0])
		{
			for(j=0;j<b;j++)
			{
				if(s[i+j]!=s1[j])break;
			}
			if(s[i+b-1]==s1[b-1])
			{
				m=i;
				for(k=0;k<m;k++)
					printf("%c",s[k]);
					printf("%s",s2);
					for(k=i+b;k<a;k++)
						printf("%c",s[k]);
					break;
			}
		}
	}
	if(i==a)printf("%s",s);
}
		
