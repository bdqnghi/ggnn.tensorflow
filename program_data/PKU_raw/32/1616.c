main()
{
int n;
int i;
int j;
int l1;
int l2;
scanf("%d",&n);
char **pp=(char **)malloc((2*n)*sizeof(char *));
for(i=0;i<2*n;i++)
pp[i]=(char *)malloc(100*sizeof(char));
for(i=0;i<2*n;i++)
scanf("%s",pp[i]);
for(i=0;i<2*n;i=i+2)
{
	l1=strlen(pp[i]);
	l2=strlen(pp[i+1]);
	for(j=0;j<l2;j++)
	{
		pp[i+1][l1-j-1]=pp[i+1][l2-j-1];
	}
	for(j=0;j<l1-l2;j++)
	{
		pp[i+1][j]='0';
	}
	for(j=l1-1;j>l1-l2-1;j=j-1)
	{
		if(pp[i][j]-pp[i+1][j]<0)
		{
			pp[i][j-1]=pp[i][j-1]-1;
			pp[i][j]='0'+pp[i][j]-pp[i+1][j]+10;
		}
		else
		{
			pp[i][j]='0'+pp[i][j]-pp[i+1][j];
		}
	}
	printf("%s\n",pp[i]);

}
for(i=0;i<2*n;i++)
	free(pp[i]);
free(pp);
}