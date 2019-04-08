int main()
{
	char a[101];
	int n,i;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]!=' ')
			printf("%c",a[i]);
		else
		{
			do
			{
				i+=1;
			}
			while(a[i]==' ');
			i=i-1;
			printf(" ");
		}
	}
return 0;
}
