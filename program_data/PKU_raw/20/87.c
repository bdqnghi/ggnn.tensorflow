
void main()
{
    char str[100][50];
	int b[100][2],len[100],ben[100];
	int i,j,k;
	k=-1;
	for(i=0;i<100;i++)
	{ben[i]=0;len[i]=0;}
	for(i=0;i<100;i++)
	{
		gets(str[i]);
		k=k+1;
		if (str[i][0]=='\0') break;
	}

	for(i=0;i<k;i++)
	{
        ben[i]=strlen(str[i]);
		for(j=0;j<ben[i];j++)
			if(str[i][j]==' ')  len[i]=j;
    }
    
	for (i=0;i<k;i++) 
	{b[i][1]=str[i][0];
	b[i][0]=0;}
	for (i=0;i<k;i++)
	for(j=0;j<len[i];j++)
	if (str[i][j]>b[i][1])
	{
		b[i][0]=j;
		b[i][1]=str[i][j];}
	for(i=0;i<k-1;i++)
	{
		for(j=0;j<b[i][0]+1;j++)
			printf("%c",str[i][j]);
		for(j=len[i]+1;j<len[i]+4;j++)
			printf("%c",str[i][j]);
        for(j=b[i][0]+1;j<len[i];j++)
			printf("%c",str[i][j]);
	printf("\n");
	}
    
	for(j=0;j<b[k-1][0]+1;j++)
			printf("%c",str[k-1][j]);
		for(j=len[k-1]+1;j<len[k-1]+4;j++)
			printf("%c",str[k-1][j]);
        for(j=b[k-1][0]+1;j<len[k-1];j++)
			printf("%c",str[k-1][j]);
}