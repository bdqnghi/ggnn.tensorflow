int main()
{
	int i,j,c=0,t;
	char a[20],b[20];
	char *pa,*pb;
	scanf("%s",a);
	scanf("%s",b);
	pa=a;
	pb=b;
	t=strlen(a);

	if (strlen(a)!=strlen(b))
		printf("NO");
	else{
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{   
			if (*(pa+i)==*(pb+j))c++;
		}
	}

	if (c>=t)
		printf("YES\n");
	else printf("NO\n");
	}
}
