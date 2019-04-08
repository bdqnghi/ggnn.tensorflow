int main()
{
int n;
scanf("%d",&n);
char str[100][100];
int i;
for(i=0;i<n;i++)
scanf("%s",str[i]);
for(i=0;i<n;i++)
{
if(str[i][strlen(str[i])-1]=='r'&&str[i][strlen(str[i])-2]=='e')
str[i][strlen(str[i])-2]='\0';
if(str[i][strlen(str[i])-1]=='y'&&str[i][strlen(str[i])-2]=='l')
str[i][strlen(str[i])-2]='\0';
if(str[i][strlen(str[i])-1]=='g'&&str[i][strlen(str[i])-2]=='n'&&str[i][strlen(str[i])-3]=='i')
str[i][strlen(str[i])-3]='\0';
}

for(int j=0;j<n;j++)
printf("%s\n",str[j]);

return 0;
}