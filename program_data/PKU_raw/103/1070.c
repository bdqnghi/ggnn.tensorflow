int main()
{
char a[1000],b[1000];
int c[1000]={0},i,j,n,m;
scanf("%s",a);
i=strlen(a);
if(a[0]<=90)
b[0]=a[0];
else
b[0]=a[0]-32;
c[0]=1;
n=0;
m=0;
for(j=1;j<i;j++)
{if(a[j]==a[j-1]||a[j]==a[j-1]-32||a[j]==a[j-1]+32)
c[n]=c[n]+1;
else
{m=m+1;
n=n+1;
if(a[j]<=90)
b[m]=a[j];
else
b[m]=a[j]-32;
c[n]=c[n]+1;}
}
for(i=0;i<=m;i++)
printf("(%c,%d)",b[i],c[i]);
}


