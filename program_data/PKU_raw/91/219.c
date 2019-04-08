
void main()
{
	char *p=(char *)calloc(100,sizeof(char));
	char *q=(char *)calloc(100,sizeof(char));
	gets(p);
	int i;
	for(i=0;*(p+i+1)!='\0';i++)
	*(q+i)=*(p+i)+*(p+i+1);
	*(q+i)=*(p+i)+*p;
	*(q+i+1)='\0';
	puts(q);
}