int main()
{
	char bei[100];
	char shang[100]={0};
	int i,j,n;
	scanf("%s",bei);
	n=strlen(bei);
	if(n==1)
	{	
		printf("0\n");
		printf("%c",bei[0]);
	}
	else if (((bei[0]-'0')*10+bei[1]-'0')<13 && bei[2]==0)
	{
		printf("0\n");
		for (i=0;i<2;i++)
		printf("%c",bei[i]);
	}
	else
	{
	for (i=0;i<n-1;i++)
	{
		shang[i]=((bei[i]-'0')*10+bei[i+1]-'0')/13+'0';
		bei[i+1]=((bei[i]-'0')*10+bei[i+1]-'0')%13+'0';
	}
	if (shang[0]!='0')
		printf("%c",shang[0]);
	for (i=1;shang[i]!=0;i++)
		printf("%c",shang[i]);
	printf("\n");
	if (bei[n-1]>='0' && bei[n-1]<='9')
		printf("%d",bei[n-1]-'0');
	else printf("%d",bei[n-1]-'0');
	}
	return 0;
}
