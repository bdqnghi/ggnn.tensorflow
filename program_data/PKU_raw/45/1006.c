
int main()
{
	int i,j;
	char a[60],b[60];
	scanf("%s %s",a,b);
	for(i=0;i<=strlen(b)-strlen(a);i++)
	{
		for (j=i;j<i+strlen(a);j++)
		{
			if (a[j-i]!=b[j])
				break;
		}
		if (j==i+strlen(a))
		{
			printf("%d\n",i);
			break;
		}
	}
	if (i==strlen(b)-strlen(a)+1)
		printf("no\n");
	
	return 0;
}

