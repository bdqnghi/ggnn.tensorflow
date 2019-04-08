
main()
{	int n,i,j,k;
	char *p,*pp;
	p=(char*)calloc(num,sizeof(char));
	gets(p);
	n=strlen(p);
	pp=(char*)calloc(n,sizeof(char));
	i=0;j=0;k=0;
	while(i<n)
	{
		if (*(p+i)==' ')
		{
			if (k==0)
			{
				*(pp+j)=*(p+i);
				j++;
				i++;
				k++;
			}
			else
			{
				i++;
			}
		}
		else
		{
			*(pp+j)=*(p+i);
			j++;
			i++;
			k=0;
		}
	}
	*(pp+j)='\0';
	printf("%s\n",pp);
}