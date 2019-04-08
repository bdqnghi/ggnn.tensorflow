int main()
{
	int i,a1,s1,p,d1,e1,b1;
	char s[100],a[100],b[100],c[100],d[100],e[100],f[100],g[100];
	gets(s);
	gets(a);
	gets(b);
	a1=strlen(a);
	s1=strlen(s);
	b1=strlen(b);
	for(i=0;i<s1;i++)
	{
		
		for(p=0;p<a1;p++)
			c[p]=s[i+p];
		c[a1]=0;
	
		if(strcmp(c,a)==0)
		{
			if((i==0 && s[a1]==32) || (s[i-1]==32 && s[a1+i]==32))
			{
				for(d1=0;d1<(s1-i-a1);d1++)
				d[d1]=s[d1+a1+i];
			d[s1-i-a1]=0;
			for(e1=0;e1<i;e1++)
				e[e1]=s[e1];
			e[i]=0;
			strcat(e,b);
			strcat(e,d);
			strcpy(s,e);	
			s1=strlen(s);
			i=i+b1-a1;
			}
		}
	}
	printf("%s",s);

	return 0;
}