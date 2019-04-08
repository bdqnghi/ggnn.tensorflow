int m=0,n;
void main()
{
	char a[500],b[50][20];
	int i,j,k;
	unsigned max=0,min;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=' ')
		{
			n=0;
			for(j=i;a[j]!=' '&&a[j]!='\0';j++,n++)
			{ b[m][n]=a[j];a[j]=' ';}
			b[m][n]='\0';
			m++;
		}
		else continue;
	}
	min=strlen(b[0]);
	for(i=0;i<m;i++)
	{
		if(strlen(b[i])>max)
			max=strlen(b[i]);
		if(strlen(b[i])<min)
			min=strlen(b[i]);
	}
	for(i=0;i<m;i++)
		if(max==strlen(b[i]))
		{
			printf("%s\n",b[i]);
			break;
		}
    for(i=0;i<m;i++)
		if(min==strlen(b[i]))
		{
			printf("%s\n",b[i]);
			break;
		}
}