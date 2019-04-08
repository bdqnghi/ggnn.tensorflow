int main()
{
	int len,i;
	char a[100],b[100];
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(i!=len-1)
		{
			b[i]=a[i]+a[i+1];
		}
		else
		{
			b[i]=a[i]+a[0];
		}
	}
	for(i=0;i<len;i++)
	{
		printf("%c",b[i]);
	}


	
	return 0;
}