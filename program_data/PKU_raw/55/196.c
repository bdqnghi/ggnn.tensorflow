void main()
{
int i,n,m,l,k=1,c[100],e,j;
long int a=0;
char s[100],v[100];
scanf("%d",&n);
scanf("%s",s);
scanf("%d",&m);
l=strlen(s);
for(i=0;i<l;i++)
{
	if (s[i]>='a'&&s[i]<='z') c[i]=s[i]-87;
	if (s[i]>='A'&&s[i]<='Z') c[i]=s[i]-55;
	if (s[i]>='0'&&s[i]<='9') c[i]=s[i]-48;
}
for(i=l-1;i>=0;i--)
{a=a+c[i]*k;
if (i==0) break;
k=k*n;}
j=0;
if (a==0) {printf("0");goto end;}
while(a>0)
{
e=a%m;
if(e>=0&&e<=9) v[j]=e+48;
if(e>=10) v[j]=e+55;
j++;
a=a/m;
}
for(i=j-1;i>=0;i--)
	printf("%c",v[i]);
end:;
}