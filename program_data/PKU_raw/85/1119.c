void p(char a[],int n)
{
	int i,j;
	if(a[0]!='_'&&(a[0]<'a'||a[0]>'z')&&(a[0]<'A'||a[0]>'Z'))
		printf("no\n");
	else
	{
		for(j=1;j<n;j++)
			if(a[j]!='_'&&(a[j]<'a'||a[j]>'z')&&(a[j]<'A'||a[j]>'Z')&&(a[j]<'0'||a[j]>'9'))
			{
				printf("no\n");
				break;
			}
		if(j==n)
			printf("yes\n");
	}
}
int main()
{
	int n,i,m;
	char a[30],b;
	scanf("%d",&n);
	b=getchar();
	for(i=0;i<n;i++)
	{	
		scanf("%s",a);
		m=strlen(a);
		p(a,m);
	}
}




