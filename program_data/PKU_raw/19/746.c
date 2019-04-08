
int main()
{
	char *p,*max,*min;
	char s[110],a[110],b[110];
	int l=0;
	gets(s);
	scanf("%s%s",a,b);
	p=strtok(s," ");
	
	while(p)
	{
		if (l!=0)
			printf(" ");
		if (strcmp(p,a)==0)
			p=b;
		printf("%s",p);
		p=strtok(NULL," ");
		l++;
	}
	printf("\n");


	
	return 0;
}



