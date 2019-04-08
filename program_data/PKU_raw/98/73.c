
int main()
{
	int n, i, length=0;
	char a[1000][42];
	scanf("%d", &n);
	scanf("%s", a[0]);
	printf("%s", a[0]);
	length=strlen(a[0]);
	for(i=1; i<n; i++)
	{
		scanf("%s", a[i]);
		length=length+strlen(a[i])+1;
		if(length<=80)
			printf(" %s", a[i]);
		else
		{
			printf("\n");
			printf("%s", a[i]);
			length=strlen(a[i]);
		}
	}
	return 0;
}