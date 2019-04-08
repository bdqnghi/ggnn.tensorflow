void main()
{
	char a[100]={0},b[100]={0};char temp[100][100]={{0}};
	int i,j,k,s1,a1,b1;
	for(i=0;i<100;i++)
	{
		scanf("%s",temp[i]);
		if(getchar()=='\n')
		{
			break;
		}
	}
	gets(a);gets(b);
	a1=strlen(a);b1=strlen(b);
	for(j=0;j<i;j++)
	{
		if(strcmp(temp[j],a)==0)
		{
			for(k=0;k<b1;k++)
			{
				temp[j][k]=b[k];
			
			}
				temp[j][b1]='\0';
		}
		printf("%s ",temp[j]);
	}
		if(strcmp(temp[i],a)==0)
		{
			for(k=0;k<b1;k++)
			{
				temp[i][k]=b[k];
			
			}
				temp[i][b1]='\0';
		}
		printf("%s",temp[i]);

}