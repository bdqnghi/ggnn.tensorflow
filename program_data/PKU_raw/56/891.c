void main()
{
	char a[5];
	char t;
	int n,i;
	gets(a);
	for(n=0;a[n]!='\0';n=n+1);
	for(i=0;i<n/2;i=i+1)
	{
		t=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
	}
	for(i=0;i<n;i=i+1)
	{
		printf("%c",a[i]);
	}
}