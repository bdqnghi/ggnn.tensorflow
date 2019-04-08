int main()
{
	char s[100];
	int i,k,p,a,m=0,n=0,max=0,min=100;
	gets(s);
	a=strlen(s);
	for(i=0;i<=a;i++)
	{
		if(s[i]!=' '&&s[i]!='\0')
			m++;
		else
		{
			if(m>max)
			{
				max=m;
				k=i-max;
				m=0;
			}
			else m=0;
		}
	}
	for(i=0;i<=a;i++)
	{
		if(s[i]!=' '&&s[i]!='\0') n++;
		else
		{
			if(n<min)
			{
				min=n;
				p=i-min;
				n=0;
			}
			else n=0;
		}
	}
	for(i=k;s[i]!=' '&&s[i]!='\0';i++)
		printf("%c",s[i]);
	printf("\n");
	for(i=p;s[i]!=' '&&s[i]!='\0';i++)
		printf("%c",s[i]);
	printf("\n");
	return 0;
}
		
