void main()
{
	char s[100],x[100][26],a[100],b[100],t[100];
	int num,i,j,kong;
	gets(s);
	gets(a);
	gets(b);
	kong=-1;
	num=0;
	for(i=0;i<101;i++)
	{
		if(s[i]==' ')
		{
			for(j=0;j<i-kong-1;j++)
				x[num][j]=s[kong+1+j];
			x[num][j]='\0';
			num++;
			kong=i;
		}
		else if(s[i]=='\0')
		{
			for(j=0;j<i-kong-1;j++)
				x[num][j]=s[kong+1+j];
			 x[num][j]='\0';
			 break;
		}
			
	}
	for(i=0;i<=num;i++)
	{
		for(j=0;x[i][j]!='\0';j++)
			t[j]=x[i][j];
		t[j]='\0';
        if(strcmp(a,t)==0)
		{
			for(j=0;b[j]!='\0';j++)
				x[i][j]=b[j];
			x[i][j]='\0';
		}
	}
	for(i=0;i<num;i++)
	{
		for(j=0;x[i][j]!='\0';j++)
			printf("%c",x[i][j]);
		printf(" ");
	}
	for(j=0;x[num][j]!='\0';j++)
		printf("%c",x[num][j]);

}
