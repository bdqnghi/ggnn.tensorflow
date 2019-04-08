int main(int argc, char* argv[])
{
	char s[200],a[100],b[100];
	int l,result=0,i,j,l1;
	gets(s);
	gets(a);
	gets(b);
	l=strlen(s);
	l1=strlen(a);
	for (i=0;i<=l-1;i++)
	{
		result=0;
		if ((i==0)||(s[i-1]==' '))
		{
		result=1;
		for (j=i;j<=i+(l1-1);j++)
		{
			if (s[j]!=a[j-i]) result=0;			
		}
		}
		if (result==1) {printf("%s",b);i=i+l1-1;} else printf("%c",s[i]);
		
	}
	return 0;
}
