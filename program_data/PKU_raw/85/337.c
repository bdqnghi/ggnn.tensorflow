int n;
int check(char a[])
{
	int i,l;
	l=strlen(a);
	if((a[0]=='_')||(a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z'))
		i=1;
	else return 0;
	for(i=1;i<l;i++)
	{
		 if((a[i]>='0'&&a[i]<='9')||(a[i]=='_')||(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
			 continue;
		 else return 0;
	}
	return 1;
}
void main()
{
	int n,j,k;
	char arr[21];
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		scanf("%s",arr);
		k=check(arr);
		if(k==0)
			printf("no\n");
		else
			printf("yes\n");
	}
}