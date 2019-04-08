int calc(char c)
{
if (c>='0' && c<='9') return c-'0';
else if (c>='a' && c<='z') return c-'a'+10;
else if (c>='A' && c<='Z') return c-'A'+10;
}
char form(int n)
{
if (n>=0 && n<=9) return '0'+n;
else return 'A'+n-10;
}
main()
{
int a,b,n,len,bs1;
char s[200];
char *p;
scanf("%d",&a);
scanf("%s",&s);
scanf("%d",&b);
len=strlen(s)-1;
bs1=1;
n=0;
int i;
for (i=len;i>=0;i--)
{
n+=bs1*(calc(s[i]));
bs1*=a;
}
if (n==0) printf("0");
for (i=0;n>0;i++)
{
s[i]=form(n%b);
n/=b;
}
for (int j=--i;j>=0;j--)
putchar(s[j]);
printf("\n");
}
