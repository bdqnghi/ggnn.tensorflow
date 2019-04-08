int main(int argc, char* argv[])
{
	
	char a[102];

	int i,ch,j;
	gets(a);
	ch=strlen(a);
	int shu[102];
	int m=0;
	for(i=0;i<ch;i++)
	{
		if(a[i]>'z'||a[i]<'A')
		{
			a[i]=100;
			m++;
			shu[m]=i;
		}
	}
	if(m!=0)
	{
	for(i=shu[m]+1;i<ch;i++)
	{
		printf("%c",a[i]);
	}
	printf(" ");
	for(i=m-1;i>=1;i--)
	{
		for(j=shu[i]+1;j<shu[i+1];j++)
		{
			printf("%c",a[j]);
		}
		printf(" ");
	}
	for(i=0;i<shu[1];i++)
	{
		printf("%c",a[i]);
	}
	}
	else
	printf("%s",a);

	return 0;
}
