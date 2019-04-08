int main()
{
	int n;
	scanf("%d",&n);
	char str[100][30];
	int i,j,k;
	for(i=0;i<n;i++)
	{
	    scanf("%s",str[i]);
	}
	for(i=0;i<n;i++)
	{
		int e;
		e=strlen(str[i]);
		k=0;
		if((str[i][0]<'A'||str[i][0]>'Z')&&(str[i][0]<'a'||str[i][0]>'z')&&(str[i][0]!='_'))
		{k=1;}
		for(j=0;j<e;j++)
		{
		   if((str[i][j]<'A'||str[i][j]>'Z')&&(str[i][j]<'a'||str[i][j]>'z')&&(str[i][j]<'0'||str[i][j]>'9')&&(str[i][j]!='_'))
		   {k=1;break;}
		}
		if(k==0){printf("yes\n");}
		if(k==1){printf("no\n");}
	}
return 0;
}
