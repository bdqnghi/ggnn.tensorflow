int main()
{
	char s[102], a[101], b[101];
	char s0[101]={'\0'}, c[101]={'\0'};
	int i, j=0, t;
	gets(s);
	gets(a);
	gets(b);

	for(i=0; s[i]!='\0'; i++)
	{
		if(s[i]!=' ')
		{
			s0[j]=s[i];
			j++;
		}
		if(s[i]==' '||s[i+1]=='\0')
		{
			if(strcmp(s0, a)==0)
			{
				strcat(c, b);
				strcat(c, " ");         /*??????????*/
				j=0;
				for(t=0; s0[t]!='\0'; t++)
					s0[t]='\0';
			}
			else
			{
				strcat(c, s0);
				strcat(c, " ");
				j=0; 
				for(t=0; s0[t]!='\0'; t++)
					s0[t]='\0';
			}

		}
	}
	for(i=0; c[i]!='\0'; i++)
	{
		if(c[i]==' '&&c[i+1]=='\0')
			c[i]='\0';
	}
	puts(c);
	return 0;
}
