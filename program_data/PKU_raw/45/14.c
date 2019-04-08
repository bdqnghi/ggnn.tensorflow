int main()
{
	char s[50],w[50];
	char m,n;
	scanf("%s%s",s,w);
	int i;
	for(i=0;(m=s[i])!='\0';i++)
	{	
		for(i=0;(n=w[i])!='\0';i++)
			if(m==n) 
				printf("%d\n",i);
				break;
	}
	return 0;
}