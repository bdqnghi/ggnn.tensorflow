
int main()
{
	char zfc1[101],zfc2[101],*p,*q;
	int m,i;
	gets(zfc1);
	p=zfc1;
	q=zfc2;
	m=strlen(zfc1);
	for(i=0;i<m-1;i++)
		*(q+i)=*(p+i)+*(p+i+1);
	*(q+m-1)=*(p+m-1)+*p;
	for(i=0;i<m;i++)
		printf("%c",*(q+i));
	return 0;
}