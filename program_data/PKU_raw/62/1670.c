int main()
{
	char a[256];
	int i=0,j,k=0;
	int n=0;
	int count=0;
	int m;
	int ax=0;
	gets(a);
	m=strlen(a);
	while(a[n]!=0)
	{
		if(a[n]!=' ')
		{
			printf("%c", a[n]);
		}
		if(a[n]==' ')
		{
			for(i=n;i<m;i++)
			{
				if(a[i]==' ')
				{
					count++;
				}
				if(a[i]!=' ')
				{
					break;
				}
			}
			printf(" ");
			n+=count-1;
			count=0;
		}
		n++;
	}
}