int main()
{
	char *p;
	int n,i;
	p=(char*)malloc(30*sizeof(char));
	gets(p);
	n=strlen(p);
	for(i=0;i<n;i++)
	{
		if(*(p+i)>='0'&&*(p+i)<='9')
		{
			printf("%c",*(p+i));
		}
		else if(*(p+i+1)>='0'&&*(p+i+1)<='9')
		{
			printf("\n");
		}
	}
	return 0;
}


