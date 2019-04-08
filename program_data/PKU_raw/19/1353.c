int main()
{
char d[256];
char words[50][256]={0};
char a[100],b[100];
int n=1,t;
int i,j,k=-1;
gets(d);
gets(a);
gets(b);
for (i=0;d[i]!='\0';i++)
{
if (d[i]==' ')
{ 
n++;
}
}
for (i=0,t=1;i<n;i++)
{
for (k=k+1,j=0;d[k]!='\0'&&d[k]!=' ';j++,k++)
{
words[i][j]=d[k];
if (a[j]!=d[k])
{
t=0;
}
}
if (t==1&&strlen (a)==strlen (words[i]))
{
for (j=0;b[j]!='\0';j++)
{
words[i][j]=b[j];
}
}
words[i][j]='\0';
t=1;
}
printf ("%s",words[0]);
for (i=1;i<n;i++)
printf (" %s",words[i]);
return 0;
}