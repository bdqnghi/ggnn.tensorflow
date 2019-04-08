
int main()
{
	char a[500],b[100],c[100],d[100][100];
	gets(a);
	gets(b);
	gets(c);
	int i,j,k=0;
	for(i=0;i<strlen(a);i++,k++)
	{
		for(j=i;a[j]!=' ';j++)
		{
			d[k][j-i]=a[j];
			d[k][j-i+1]='\0';
			if(a[j]=='\0')
			{
				break;
			}
		}
		i=j;
	}
	for(i=0;i<k;i++)
	{
		if(strcmp(b,d[i])==0)
		{
			strcpy(d[i],c);
		}
	}
	for(i=0;i<k-1;i++)
	{
		printf("%s ",d[i]);
	}
	printf("%s",d[k-1]);
	return 0;
}
