int main()
{int n,i,j,t,s,c[505],d[505];
for(i=0;i<505;i++)
{c[i]=0; d[i]=0;}
char a[505],b[505][6];
scanf("%d\n",&n);
gets(a);
t=strlen(a);
for(i=0;i<=t-n;i++)
{for(j=i;j<i+n;j++)
b[i][j-i]=a[j];
b[i][j-i]=0;}
for(i=0;i<=t-n;i++)
for(j=i+1;j<=t-n;j++)
if(strcmp(b[i],b[j])==0) {c[i]++; d[i]++;}
for(i=0;i<t-n;i++)
for(j=0;j<t-n-i;j++)
if(c[j]>c[j+1]) {s=c[j];c[j]=c[j+1];c[j+1]=s;}
//for(i=0;i<=t-n;i++)
//printf("%d\n",c[i]);
if(c[t-n]==0) printf("NO");
else
{printf("%d\n",c[t-n]+1);
for(j=0;j<=t-n;j++)
if(d[j]==c[t-n]) puts(b[j]);
}

return 0;
}