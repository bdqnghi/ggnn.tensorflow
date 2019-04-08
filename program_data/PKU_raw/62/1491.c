int main() 
{
	char *q,*p;
	int a=0;
	p=(char*)malloc(200*sizeof(char));
	q=p;
	gets(p);
	while(*q!='\0')
	{
		if(*q!=' ')
		{
			printf("%c",*q);
			a=0;
		}
		if(*q==' '&&a==0)
		{
			printf(" ");
			a++;
		}
		q++;
	}
}