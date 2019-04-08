int main()
{
	int i,j;
	char a[100],b[100];
	gets(a);
	for(i=0;i<100;i++)
	{
		if(i==99)
		{
			b[i]=a[i]+a[0];
			j=i;
			break;
		}
		else if(a[i+1]==0&&a[i+2]!=0)
		{
			b[i]=a[i]+a[0];
			j=i;
			break;
		}
		else b[i]=a[i]+a[i+1];
	}
	for(i=0;i<=j;i++)
	{
		printf("%c",b[i]);
	}
	return 0;
}