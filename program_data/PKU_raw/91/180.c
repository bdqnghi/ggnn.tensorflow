void main()
{
	int i;
	char *p,*pnew,*p1;
	p=p1=(char *)malloc(100*sizeof(char));
	pnew=(char *)malloc(100*sizeof(char));
	gets(p);
	for(p=p1,i=0;*(p+i)!='\0';i++)
	{
		if(*(p+i+1)!='\0')
		*(pnew+i)=(int)*(p+i)+(int)*(p+i+1);
		else
			*(pnew+i)=(int)*(p+i)+(int)*(p);
	}
	*(pnew+i)='\0';
	printf("%s",pnew);
}
