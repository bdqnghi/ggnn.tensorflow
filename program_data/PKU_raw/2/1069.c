void main()
{
int  n,len,i,j,k,max;
int c[26]={0};
char a[26],f,x;
struct book{ int num; char author[26];};
struct book b[1000];
scanf("%d",&n);
for (i=0;i<n;i++)
scanf("%d %s",&b[i].num,&b[i].author);
for(i=0;i<n;i++)
{
	strcpy(a,b[i].author);
len=strlen(a);
for(j=0;j<len;j++)
if('A'<=(x=a[j])&&(x=a[j])<='Z')
c[x-'A']++;
}
max=c[0];k=0;
for(i=0;i<26;i++)
{if(c[i]>max)
{max=c[i];
k=i;
}}
printf("%c\n%d\n",k+'A',max);
for(i=0;i<n;i++)
{
strcpy(a,b[i].author);
len=strlen(a);
for(j=0;j<len;j++)
if((f=a[j])==k+'A')
printf("%d\n",b[i].num);

}




}