int main()
{
int n;
char sr[255];
int i,j,len;
scanf("%d",&n);
char k;
scanf("%c",&k);

for(i=0;i<n;i++)
{
gets(sr); 
len=strlen(sr);
for(j=0;j<len;j++)
{
if (sr[j]=='A')
{
sr[j]='T';
}
else if(sr[j]=='T')
{
sr[j]='A';
}
else if(sr[j]=='C')
{
sr[j]='G';
}
else if(sr[j]=='G')
{
sr[j]='C';
} 

}
printf("%s\n",sr);
}
return 0;
}