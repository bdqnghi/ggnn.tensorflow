int main()
{
	char a[5],b[5];
	int i,j;
	gets(a);
	int length=(int)strlen(a);
	for(i=length-1,j=0;i>=0;i--,j++)
		b[j]=a[i];
	b[j]='\0';
	puts(b);
	return 0;
}
