int main()
{
	char a[4000],b[200][20]={'\0'};
	int i,j=0,k=0,len,max=0,min=0;
    gets(a);
	len=strlen(a);
	b[j][k++]=a[0];
	for(i=1;i<len;i++)
	{
		if(a[i]==' ')
		{
			j++;
			k=0;
		}
		else
		{
			b[j][k++]=a[i];
		}
	}
	for(i=0;i<=j;i++)
	{
		if(strlen(b[max])<strlen(b[i]))max=i;
		if(strlen(b[min])>strlen(b[i]))min=i;
	}
	printf("%s\n%s\n",b[max],b[min]);
	return 0;
}
