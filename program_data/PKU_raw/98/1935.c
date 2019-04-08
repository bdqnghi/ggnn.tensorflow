int main(int argc, char* argv[])
{int n;
scanf("%d",&n);
int i;
int k=0,m=0;
char s[45];
int len;
for(i=0;i<n;i++)
{
	scanf("%s",s);
	len=strlen(s);
	k=k+len;
	m++;
	if(m==1)
	{printf("%s",s);}
	else
	{
	if((k+m-1)<=80)
	{ printf(" ");
	printf("%s",s);
	}
	else
	{printf("\n");
	printf("%s",s);
	k=len;
	m=1;}
	}
}
return 0;
}
