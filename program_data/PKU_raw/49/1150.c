int main()
{
	char a[100]={'\0'},b[100]={'\0'},c[100]={'\0'};
	int i,j,l0,l;
	gets(a);
	l0=strlen(a);
	l=2;
	for(l=2;l<=l0;l++)
	{
		for(i=0;i<=l0-l;i++)
		{
			for(j=i;j<i+l;j++)
				b[j-i]=a[j];
			for(j=0;j<l;j++)
				c[j]=b[l-1-j];
			if(strcmp(b,c)==0)
			{
			for(j=0;j<l;j++)
				printf("%c",b[j]);
			printf("\n");
			}
		}
	}
	return 0;
}