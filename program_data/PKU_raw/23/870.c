void main()
{
	char a[101];
	int b[101];
	int i,chang,j=1;
	gets(a);
	b[0]=0;
	chang=strlen(a);
	for(i=0;i<chang;i++)
	{
		if(a[i]==' ')
		{
			b[j]=i;
			j++;
		}
	}
	b[j]=chang;
	for(;j>1;j--)
	{
	     for(i=b[j-1]+1;i<b[j];i++)printf("%c",a[i]);
	     printf(" ");
	}
	for(i=0;i<b[1];i++)printf("%c",a[i]);
}