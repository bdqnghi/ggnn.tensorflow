void main()
{
char str[50][100];
int m,n,i,j;
scanf("%d",&m);
for(i=0;i<m;i++)
scanf("%s",str[i]);
for(i=0;i<m;i++)
{
n=strlen(str[i]);
if(str[i][n-1]=='g') 
for(j=0;j<n-3;j++)
printf("%c",str[i][j]);
if(str[i][n-1]=='r'||str[i][n-1]=='y') 
for(j=0;j<n-2;j++)
printf("%c",str[i][j]);
printf("\n");
}
}
