int main()
{
	char a[100];
	int i,j,k,t;
	gets(a);
	for(t=0;t<100;t++)
	for(i=0;i<strlen(a);i++)
	{
		for(j=0;j<=strlen(a);j++)
		{
			if(a[j]==' '&&a[j+1]==' ')
			{
				for(k=j;k<strlen(a)-1;k++)
				{
					a[k]=a[k+1];
				}
				a[strlen(a)-1]='\0';
				break;
			}
		}
	}
	puts(a);
	return 0;
}