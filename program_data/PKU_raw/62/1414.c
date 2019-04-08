void main()
{
	int i,l,k=0,j;
	char *p,*a;
	a=calloc(10000,sizeof(char));
	p=a;
	gets(p);
	l=strlen(p);
	for(i=0;i<l;i++)
	{
		if(*(p+i)==' '&&k==0) {k=1;}
		else if(*(p+i)==' '&&k==1) {for (j=i;j<l-1;j++) *(p+j)=*(p+j+1);*(p+l-1)=0;i--;l--;}
		  else k=0;
	}
	puts(p);
}