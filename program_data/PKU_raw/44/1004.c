int rev(int m)
{
char s[1050];
int k=m;
int ans=0;
int i=0;
while (k>0)
{
s[i]=k%10;
k/=10;
i++;
}
i--;
int base=1;
while (s[i]==0) i--;
for (;i>=0;i--)
{
ans+=s[i]*base;
base*=10;
}
return ans;
}
main()
{
for (int kk=1;kk<=6;kk++)
{
int n,m;
scanf("%d",&n);
if (n<0) m=0-n; else m=n;
if (m==0) printf("0\n");
else 
{
m=rev(m);
if (n<0)
printf("-");
printf("%d\n",m);
}
}
}
