
int check(char *p)
{
	if((*p=='_')||(*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z'))
	{
		int i;
		for(i=0;*(p+i)!='\0';i++)
		{
			if((*(p+i)=='_')||(*(p+i)>='a'&&*(p+i)<='z')||(*(p+i)>='A'&&*(p+i)<='Z')||(*(p+i)>='0'&&*(p+i)<='9'));
			else break;
		}
		if(*(p+i)=='\0')return(1);
		else return(0);
	}
	else return(0);
}

void main()
{
	int n;
	scanf("%d\n",&n);
	char *p[n];
	int i;
	for(i=0;i<n;i++)
	{
		p[i]=(char *)malloc(512*sizeof(char));
		gets(p[i]);
	}
	for(i=0;i<n;i++)
	printf("%d\n",check(p[i]));
}