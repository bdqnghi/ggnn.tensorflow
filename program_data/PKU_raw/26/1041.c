int main()
{
	int i,j=0;
	char a[101],b[101];
	gets(a);
	for(i=0;a[i];i++)
	{
		if(!(a[i]==' '&&a[i+1]==' '))
		{
			b[j]=a[i];
			j++;
		}
	}
	b[j]='\0';
	puts(b);
}