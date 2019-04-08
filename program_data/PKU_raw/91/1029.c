int main()
{
	char a[102],b[102];
	int i,j;
	for(i=0;i<=101;i++)
		b[i]='\0';
	for(i=1;;i++)
	{
		a[i]=getchar();
		if(a[i]=='\n')
		{
			j=i-1;
			break;
		}
	}
	for(i=1;i<j;i++)
		b[i]=a[i]+a[i+1];
	b[j]=a[j]+a[1];
	for(i=1;i<=j;i++)
		printf("%c",b[i]);
	return 0;
}