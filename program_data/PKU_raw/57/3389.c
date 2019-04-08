void main()
{
	int n,i,j,len,flag=0;
	scanf("%d",&n);
	char str[51][20]={(" "," ")},str2[3]={" "},str3[4]={" "};
	for(i=0;i<n;i++)
		scanf("%s",str[i]);
        for(i=0;i<n;i++)
	{
		len=strlen(str[i]);
		for(j=len-1;j>=len-2;j--)
			str2[len-1-j]=str[i][j];
		if(strcmp(str2,"re")==0)
		{
			flag=1;
			for(j=0;j<len-2;j++)
				printf("%c",str[i][j]);
        }
		else if(strcmp(str2,"yl")==0)
		{
			flag=1;
			for(j=0;j<len-2;j++)
				printf("%c",str[i][j]);
        }
		for(j=len-1;j>=len-3;j--)
			str3[len-1-j]=str[i][j];
		if(strcmp(str3,"gni")==0)
		{
			flag=1;
			for(j=0;j<len-3;j++)
				printf("%c",str[i][j]);
        }
		if(flag==1)
		  printf("\n");
	}
}