void main()
{
	char str[10],substr[4],*p,t;
	int i,j,k;
	while(scanf("%s%s",str,substr)!=EOF)
	{
		p=str;
		t=*p;
		j=0;
		k=strlen(str);
		for(i=0;i<k;i++,p++)
			if(*p>t)
			{
				t=*p;
				j=i;
			}
	
		for(p=str,i=0;i<j+1;i++,p++)
			printf("%c",*p);
		printf("%s",substr);
		for(i=j+1;i<k;i++,p++)
			printf("%c",*p);
		printf("\n");
	}
}
