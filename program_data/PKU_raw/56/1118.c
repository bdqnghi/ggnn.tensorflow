int main()
{
	char a[6],b[6];
	int d,i;
	scanf("%s",a);
	d=strlen(a);
	for(i=0;i<d;i++)
	{
		a[i];
		b[d-i-1]=a[i];
	}
	b[d]='\0';
		printf("%s",b);
	return 0;
}