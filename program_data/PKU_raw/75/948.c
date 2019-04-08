
void main()
{
int i,j,k,m=0,n,m1=0,m2=0,i1,i2,t;
int a[1000],b[1000];
static int c[1002];
char s[10000];

gets(s);
m=0;j=0;

for(i=0;s[i]!='\0';i++)
{
if(s[i]==','){a[j]=m;j++;m=0;}
else m=m*10+s[i]-'0';
}
a[j]=m;j++;

gets(s);
m=0;j=0;

for(i=0;s[i]!='\0';i++)
{
if(s[i]==','){b[j]=m;j++;m=0;}
else m=m*10+s[i]-'0';
}
b[j]=m;j++;m=0;

n=j;

m1=0;
for(i=0;i<n;i++)
{
for(j=a[i];j<b[i];j++)c[j]++;
}

for(i=0;i<1001;i++)
{
if(c[i]>m1) m1=c[i];
}

printf("%d %d\n",n,m1);


}

