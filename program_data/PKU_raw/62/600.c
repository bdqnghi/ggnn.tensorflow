
void main()
{
	char *p=(char *)calloc(256,sizeof(char));
	char *q=(char *)calloc(256,sizeof(char));
	gets(p);
	int i,j;
	for(i=0,j=0;*(p+i)!='\0';i++)
	if(*(p+i)==' '&&*(p+i+1)==' ');
	else *(q+j)=*(p+i),j++;
	puts(q);
}