main()
{
char a[100];
int i,j;
gets(a);
char b[100][100];
int count=-1;
for(i=0;a[i]!='\0';i++)
{
if(a[i]!=' ')
{
count++;
for(j=0;a[i+j]!=' ';j++)
b[count][j]=a[i+j];
i=i+j-1;
}
}
for(i=count;i>=0;i--)
{
if(i!=0)
printf("%s ",b[i]);
else
printf("%s",b[i]);
}
}