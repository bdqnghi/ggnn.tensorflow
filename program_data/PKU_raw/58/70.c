void main()
{
	int n,i,j,k,flag;
	char *s;
	s=malloc(100*sizeof(char));
	scanf("%d",&n);
	gets(s);
	for(i=1;i<=n;i++)
	{flag=1;k=0;
	gets(s);
	if(*(s+0)=='_') k=1;if(*(s+0)<='9'&&*(s+0)>='0') flag=0;
	for(j=k;*(s+j)!='\0';j++)
		if(*(s+j)<='z'&&*(s+j)>='A')  ;
		    else if(*(s+j)<='9'&&*(s+j)>='0') ;
			else flag=0;
	printf("%d\n",flag);
	}
}