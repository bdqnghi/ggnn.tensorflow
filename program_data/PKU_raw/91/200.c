int main()
{
	char *org;
	org=(char*)malloc(100*sizeof(char));
	gets(org);
	int i,n,d;
	n=strlen(org);
	for(i=0;i<n-1;i++)
	{
		
		d=*(org+i)+*(org+i+1);
		printf("%c",d);
	}
	d=*(org+i)+*org;
	printf("%c\n",d);
}

		
