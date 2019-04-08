
int main(int argc, char* argv[])
{
	char zfc[101],*p;
	char str[101],*pn;
	int len;

	gets(zfc);
	len=strlen(zfc);
	for(pn=str,p=zfc;pn<str+len-1;pn++,p++)
		*pn=*p+*(p+1);
	*pn=*p+*zfc;

	for(pn=str;pn<str+len;pn++)
		printf("%c",*pn);

	return 0;
}
