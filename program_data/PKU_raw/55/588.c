void main()
{
long int n=0,m;
int a,b,i,j,k,l,t=0;
char s[20],d[20];
scanf("%d %s %d",&a,s,&b);
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]>='0'&&s[i]<='9')
   k=s[i]-'0';
if(s[i]>='a'&&s[i]<='z')
   k=s[i]-'a'+10;
if(s[i]>='A'&&s[i]<='Z')
   k=s[i]-'A'+10;
m=k;
for(j=1;j<l-i;j++)
m=m*a;
n=n+m;
}
if(n==0)
printf("0");
for(i=0;n>0;i++)
{
if(n%b<10)
	d[i]=n%b+'0';
else 
	d[i]=n%b+'A'-10;
n=n/b;
}
for(j=i-1;j>=0;j--)
printf("%c",d[j]);
}