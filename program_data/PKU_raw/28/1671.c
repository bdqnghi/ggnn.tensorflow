int main()
{
	char a[30000],zf[301][300];
	int i=0,k,t=0,len[301];
    gets(a);
	while(a[i]!='\0')
	{
		k=0;
		while(a[i]!='\0'&&a[i]!=' ')
		{
			zf[t][k]=a[i];
			i++;
			k++;
		}
		zf[t][k]='\0';
		while(a[i]==' ')
		{
			i++;
		}
		t++;
	}
	zf[t][k+1]='\0';
	len[0]=strlen(zf[0]);
	printf("%d",len[0]);
	for(i=1;i<t;i++)
	{
		len[i]=strlen(zf[i]);
		printf(",%d",len[i]);
	}
	return 0;
}