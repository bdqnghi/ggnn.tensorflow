int main()
{
	int i,j,k;
	char a[150],e; 
	gets(a);
	e=a[0];
	for(i=0;i<strlen(a)-1;i++)
	{
		a[i]=a[i]+a[i+1];
		printf("%c",a[i]);
	}
	a[i]=a[i]+e; 
	printf("%c",a[i]);
	scanf("%d",&i);   
	return 0;
}