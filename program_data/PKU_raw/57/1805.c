
int main()
{
	int n,i,b;
	char a[100];
	scanf("%d",&n);
	for( i = 0; i < n; i++)
	{
		scanf("%s", a);
		char *p;
		b=strlen(a);
		p=&a[b-2];
		if(strcmp(p,"er")==0||strcmp(p,"ly")==0)
			a[b-2]=0;
	
		p=&a[b-3];
		if(strcmp(p,"ing")==0)
			a[b-3]=0;
		printf("%s\n",a);
	}
	return 0;
}


