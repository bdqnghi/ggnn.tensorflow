int main()
{
	int t,i=0;
	char *p,c;
	p=(char*)malloc(100*sizeof(char));
	for(;(c=getchar())!='\n';)
	{
		if(c!=' ')
		{
			*(p+i)=c;
			i++;
			t=0;
		}
		if(c==' '&&t==0)
		{
			*(p+i)=c;
			i++;
			t++;
		}
	}
	*(p+i)='\0';
	printf("%s",p);
	free(p);
}