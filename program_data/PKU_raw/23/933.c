void main()
{
	char str[100],a[100][100]={0};
	int k=0,j=0,i;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		{
			a[j][k]=str[i];
			k++;
		}
		else
		{
			j=j+1;
			k=0;
		}
	}
	for (i=j;i>=0;i--)
	{
		printf("%s",a[i]);
		if(i==0)break;
		printf(" ");
	}
}