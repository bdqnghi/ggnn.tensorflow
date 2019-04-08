int main()
{
char str[1000][100],substr[1000][300];
int i=0,j,max,m;
char a;
while(scanf("%s %s",str[i],substr[i])!=EOF)
i++;
m=i;
for(i=0;i<m;i++)
{
	a=str[i][0];
for(j=0;str[i][j]!='\0';j++)
{
	if(str[i][j]>a)
	{
		a=str[i][j];
		max=j;
	}
}
for(j=0;j<=max;j++)
printf("%c",str[i][j]);
for(j=0;j<3;j++)
printf("%c",substr[i][j]);
for(j=max+1;str[i][j]!='\0';j++)
printf("%c",str[i][j]);
printf("\n");
}
	return 0;
}