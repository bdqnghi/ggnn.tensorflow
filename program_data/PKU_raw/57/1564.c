int main()
{
	int n,i,j,l[50];
	char str[50][50],t[50][50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%s",str[i]);
	l[i]=strlen(str[i]);
	
	if(str[i][l[i]-1]=='r')
	{
	for(j=0;j<l[i]-2;j++)
	t[i][j]=str[i][j];
	}
	t[i][l[i]-1]='\0';
	
	if(str[i][l[i]-1]=='g')
{
	for(j=0;j<l[i]-3;j++)
	t[i][j]=str[i][j];
	}
	t[i][l[i]-2]='\0';
	if(str[i][l[i]-1]=='y')
	{
	for(j=0;j<l[i]-2;j++)
	t[i][j]=str[i][j];
	}t[i][l[i]-1]='\0';}
	for(i=0;i<n;i++)
	{printf("%s\n",t[i]);}
		return 0;
}
