int calc (char c)
{
if (c>='0'&&c<='9') return c-'0';
else if (c>='a'&&c<='z') return c-'a'+10;
else if (c>='A'&&c<='Z') return c-'A'+10;
}
char conv(int a)
{
if (a<10) return a+'0';
else return a-10+'A';
}
main()
{
long a,b,n,i,j,k,ans;      
char c[100];
scanf("%d",&a);
scanf("%s",c);
scanf("%d",&b);
n=strlen(c);
n--;
ans=calc(c[n]);
j=1;
for (i=n-1;i>=0;i--)
{
j*=a;
ans+=calc(c[i])*j;
}
i=0;
while (ans>0)
{
i++;
c[i]=conv(ans%b);
ans/=b;
}
if (i==0) printf("0");
while (i>=1)
{
printf("%c",c[i]);
i--;
}
}
