 int main()
{
int i,n,m,j;
char s1[10000][256],s2[10000][256];
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
scanf("%s",s1[i]);
}
for(i=0;i<n;i++){
m=strlen(s1[i]);
for(j=0;j<m;j++)
{
if(s1[i][j]=='A')
s2[i][j]='T';
else if(s1[i][j]=='G')
s2[i][j]='C'; 
else if(s1[i][j]=='T')
s2[i][j]='A';
else if(s1[i][j]=='C')
s2[i][j]='G';
}
}
for(i=0;i<n;i++)
{
m=strlen(s1[i]);
for(j=0;j<m;j++){
printf("%c",s2[i][j]);
}
printf("\n");
}
return 0;
}