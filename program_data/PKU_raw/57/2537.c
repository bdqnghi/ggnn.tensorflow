void main()
{
	
int n,i=1,j;
	
char str[51][32],t;
	
scanf("%d",&n);
	
while(i<=n)
	
{
	
	

	
	
	
scanf("%s",str[i]);
	
	
	

	
	

	
	
i++;
	
}

	
for(i=1;i<=n;i++)
	
{
	
	


	
	
for(j=1;j<=32;j++)
	
	
{
	
	
	
if(str[i][j]=='e'&&str[i][j+1]=='r'&&str[i][j+2]=='\0')
	
	
	
	
str[i][j]='\0';
	
	
	
else if(str[i][j]=='l'&&str[i][j+1]=='y'&&str[i][j+2]=='\0')
	
	
	
	
str[i][j]='\0';
	
	
	
else if(str[i][j]=='i'&&str[i][j+1]=='n'&&str[i][j+2]=='g'&&str[i][j+3]=='\0')
	
	
	
	
str[i][j]='\0';
	
	
}
	
	


	
}

	
for(i=1;i<=n;i++)
	
{
	
printf("%s\n",str[i]);
	
}
}

