void main()
{
	int i,l;
	char s1[100],s2[100];
	char *p1,*p2;
	p1=s1;p2=s2;
	gets(p1);
	l=strlen(p1);
	for(i=0;i<l-1;i++) *(p2+i)=*(p1+i)+*(p1+i+1);
	*(p2+l-1)=*(p1)+*(p1+l-1);
	for(i=0;i<l;i++) printf("%c",*(p2+i));
}