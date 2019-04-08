void main()
{
int a[999],m,i,j,c[26],max=0,d,k;
scanf("%d\n",&m);
for(k=0;k<26;k++)
{
c[k]=0;
}
struct books
{
int num;
char name[26];
}
books[999];
for(i=0;i<m;i++)
{
scanf("%d %s",&books[i].num,books[i].name);
}
for(i=0;i<m;i++)
{
for(j=0;j<strlen(books[i].name);j++)
{
c[books[i].name[j]-'A']++;
}
}
for(k=0;k<26;k++)
{
if(c[k]>max)
{
	max=c[k];
	d=k;
}
}
printf("%c\n%d\n",d+'A',max);

for(i=0;i<m;i++)
{
for(j=0;j<strlen(books[i].name);j++)
{
if(books[i].name[j]==d+'A')
{
	printf("%d\n",books[i].num);
	break;
}
}
}
}