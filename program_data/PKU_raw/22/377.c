int f(char t[]);
void main()
{
	char s[1600],t[6];
	int a=0,b=0,c[310],i,j,m=0,n=0,k,l;
	gets(s);
	l=strlen(s);
	for(i=0;i<=l;i++)
		if(s[i]==','||s[i]=='\0')
		{
			for(j=m,k=0;j<i;j++,k++)
				t[k]=s[j];
			t[k]='\0';
			m=i+1;
			c[n]=f(t);
			n++;
		}
	for(i=0;i<n;i++)
	{
		if(a<c[i]&&b<c[i])
		{ b=a;a=c[i];}
		else if(a>c[i]&&b<c[i]) b=c[i];
	}
	if(b!=0) printf("%d\n",b);
	else printf("No\n");
}
int f(char t[])
{
	int i,sum=0;
	for(i=0;t[i]!='\0';i++)
		sum=sum*10+t[i]-'0';
	return sum;
}