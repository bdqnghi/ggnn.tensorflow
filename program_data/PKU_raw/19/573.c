void main()
{
	int i,j,k;
	char a[100]={""},b[100]={""},c[100]={""},d[100]={""},*p,*q;
	gets(c);
	gets(a);
	gets(b);
	p=c;
	q=d;
	for(i=0;;)
	{
		for(j=0;*(p+i)!=' '&&*(p+i)!='\0';i++,j++)
			*(q+j)=*(p+i);
		*(q+j)='\0';
		if(strcmp(d,a)==0)
			printf("%s",b);
		else for(k=0;k<j;k++)
				printf("%c",*(q+k));
		if(*(p+i)!='\0') printf(" ");
		else break;
		i++;
	}
}
		

