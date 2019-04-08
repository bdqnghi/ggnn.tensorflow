char a[1000],b[1000];
int main()
{
	int i=0;
	while(scanf("%c",&a[i++])!=EOF);
	for(i=0;i<strlen(a)-1;i++)
	{
		if(i!=strlen(a)-2)
			b[i]=a[i]+a[i+1];
		else if(i==strlen(a)-2)
			b[i]=a[i]+a[0];
	}
	printf("%s",b);
	return 0;
}
