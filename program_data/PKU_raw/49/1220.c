int main()
{
	char s[500];
	char *p;
	gets(s);
	p=s;
	int i,j,k,l,m,t;
	l=strlen(s);
	for(i=2;i<=l;i++)
	{
		for(j=0;j<l-i+1;j++)
		{
			int s=0;
			for(t=0;t<i/2;t++)
			{
				if(*(p+j+t)!=*(p+j+i-1-t))
				{
					s=1;
				    break;
				}
			}
			if(s==0)
			{
				for(m=j;m<j+i;m++)
				{
					printf("%c",*(p+m));
				}
					printf("\n");
			}
		}
		
	}

	return 0;
}