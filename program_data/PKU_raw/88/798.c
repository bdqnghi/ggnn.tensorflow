void main()
{
	int i,l,k=0,j;
	char *p,*a;
	a=calloc(30,sizeof(char));
	p=a;
	gets(p);
	l=strlen(p);
	for(i=0;i<l;i++)
	{
		if(*(p+i)>=48&&*(p+i)<=57&&k==2) printf("\n");
		if(*(p+i)>=48&&*(p+i)<=57) {printf("%c",*(p+i));k=1;}
		else k=2;
	}
}