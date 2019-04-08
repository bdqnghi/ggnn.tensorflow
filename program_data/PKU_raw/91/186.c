
int main() 
{
	int i,n;
	char *p=(char *)malloc(101*sizeof(char));
	char *ch=(char *)malloc(101*sizeof(char));
	gets(p);
	n=strlen(p);

	for(i=0;i<n;i++)				//??
	{
		if(i==n-1)
			*(ch+i)=*(p+i)+*(p);
		else
			*(ch+i)=*(p+i)+*(p+i+1);	
	}
	*(ch+n)='\0';			//????,,????,,?????,????
	puts(ch);
	return 0;
}