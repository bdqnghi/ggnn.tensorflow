int main()
{
char dc[50][20];
char sr[1000];
gets(sr);
int i,j=0,k=0;
int len;
len=strlen(sr);
for(i=0;i<=len;i++)
{
if(sr[i]!=' '&&sr[i]!='\0')
{
dc[j][k]=sr[i];
k++;
}
else if(sr[i]==' '||sr[i]=='\0')
{
dc[j][k]='\0';
j++;
k=0;
}
}
int sz[50];
for(i=0;i<j;i++)
{
sz[i]=strlen(dc[i]);
}
int min=0,max=0;
for(i=0;i<j;i++)
{
if(sz[i]<sz[min]){min=i;}
if(sz[i]>sz[max]){max=i;}
}
printf("%s\n",dc[max]);
printf("%s\n",dc[min]);
return 0;
}