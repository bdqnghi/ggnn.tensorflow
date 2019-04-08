int main()
{
	int i;
	char*p,c;
	p=(char*)malloc(100*sizeof(char));
	gets(p);
	c=*p;
	for(i=0;*(p+i+1)!='\0';i++)
	{
		*(p+i)=*(p+i)+*(p+i+1);
	}
	*(p+i)=c+*(p+i);
	*(p+i+1)='\0';
	puts(p);
}

