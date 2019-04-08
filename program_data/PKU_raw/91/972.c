
void main(void)
{
	char s1[101],s2[101];
	char *p1=s1,*p2=s2;
	gets(p1);
	int i,l=strlen(p1);
	*(p2+l)=0;
	for(i=0;i<=l-1;i++)
		*(p2+i)=*(p1+i)+*(p1+i+1);
	*(p2+l-1)+=*p1;
	puts(p2);
}