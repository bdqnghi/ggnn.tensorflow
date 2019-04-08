void main()
{
	int i,n;
	char *p;
	p=(char*)malloc(100*sizeof(char));
	gets(p);
	n=strlen(p);
	if((*p)>47&&(*p)<58)
		printf("%c",*p);
	for(i=1;i<n;i++)
	{
		if((*(p+i)>47&&*(p+i)<58)&&(*(p+i-1)<48||*(p+i-1)>57))
			printf("\n");
		if(*(p+i)>47&&*(p+i)<58)
			printf("%c",*(p+i));
	}
		
	
}