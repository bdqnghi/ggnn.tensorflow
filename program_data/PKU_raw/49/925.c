void main()
{
	void huiwen(char c[1000],int);
	int i,n;
	char c[1000];
	gets(c);
	for (i=2;i<=strlen(c);i++)
		huiwen(c,i);
	
}

void huiwen(char c[1000],int i)
{
	int j,l,flag=0,m;
	char *p=c;
	for(j=0;j<=strlen(c)-i;j++)
	{	for(l=0;l<=i/2;l++)
		{	
			if(*(p+j+l)!=*(p+j+i-l-1))
			{flag=1;break;}
		}
			if(flag==0)
			{
				for(m=0;m<i;m++)
					printf("%c",*(p+j+m));
				printf("\n");
			}
		flag=0;
	}
}
