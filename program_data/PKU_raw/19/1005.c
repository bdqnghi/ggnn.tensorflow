int main()
{
	char zfc[200]={0},a[100]={0},b[100]={0};
	char c[50][50]={0};
	int i=0,j,k=0,n=0;
	gets(zfc);
	gets(a);
	gets(b);
    for(i=0;zfc[i]!=' '&&zfc[i]!=0;i++)
	{
		for(k=0;zfc[i]!=' '&&zfc[i]!=0;i++,k++)
		{
		 c[n][k]=zfc[i];
		}
		n++;
    }
	for(j=0;j<n-1;j++)
	{
	if(strcmp(c[j],a)==0)
	{
		strcpy(c[j],b);
	}
	printf("%s ",c[j]);
	}
	if(strcmp(c[n-1],a)==0)
	{
		strcpy(c[n-1],b);
	}
	printf("%s",c[n-1]);
	return 0;
}