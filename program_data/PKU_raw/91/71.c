

int main(int argc, char* argv[])
{
	char ch[101], *p ,a[101];
	int len,i=0;
	gets(ch);
	p=ch;
	len=strlen(ch);
	for(p=ch;p<ch+len;p++)
	{
		a[i]=*p+*(p+1);
		if(p==ch+len-1)
		a[i]=*(p)+ch[0];
		printf("%c",a[i]);
		i++;
	}printf("\n");
	return 0;
}
