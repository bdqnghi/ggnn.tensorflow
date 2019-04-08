main()
{
char ch[301];
static int a[100];
int i,j,flag;
scanf("%s",ch);
for (i=0;i<strlen(ch);i++)
{
if (ch[i]>=97&&ch[i]<='z')
a[ch[i]-97]=a[ch[i]-97]+1;
}
	flag=0;
for (i=0;i<26;i++)
{

if (a[i]!=0)
{flag=1;
printf("%c=%d\n",i+97,a[i]);}
}
if (flag==0) printf("No");
}