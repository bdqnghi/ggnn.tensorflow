int main()
{
	char a[101];
	int i,l;
	for(i=1;i<=100;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]=='\n')
			break;
	}
	l=i-1;
	for(i=1;i<=l-1;i++)
		printf("%c",a[i]+a[i+1]);
	printf("%c",a[l]+a[1]);
	return 0;
}