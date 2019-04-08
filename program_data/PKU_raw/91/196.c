void main()
{
	char *p;
	int i,j,k,l,n,m;
	p=(char*)malloc(101*sizeof(char));
	gets(p);
	l=strlen(p);
	*(p+l)=*(p);
	for(i=0;i<l;i++) *(p+i)+=*(p+i+1);
	*(p+l)='\0';
	puts(p);
}