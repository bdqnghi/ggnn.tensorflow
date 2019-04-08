
void main()
{
	char a[100],b[100][100];
	int i,j,k,l;
	gets(a);
	k=strlen(a);
	j=0;
	l=0;
	for(i=0;i<k;i++)
	{
		if(a[i]==' ')
		{
			b[j][l+1]='\0';
			j++;
			l=0;
			continue;
			
		}
		else
		{
			b[j][l]=a[i];
		}
		l++;
	}
	b[j][l]='\0';
	printf("%s",b[j]);
	for(i=j-1;i>=0;i--)
	{
		printf(" %s",b[i]);
	}

}