main()
{
int n,i,j,m,l;
char a[5000]={0},b[3000][6]={0};
int c[3000]={0},d[3000]={0};
scanf("%d\n",&n);
gets(a);
l=strlen(a)-n+1;
for(i=0;i<l;i++)
{for(j=0;j<n;j++)
b[i][j]=a[i+j];
}
for(i=0;i<l;i++)
for(j=i+1;j<l;j++)
if(strcmp(b[j],b[i])==0)
{
c[i]++;d[j]=1;
}
m=c[0];
for(i=1;i<l;i++)
{
if(c[i]>m)
m=c[i];
}   
if(m==0)
printf("NO");
else
{
printf("%d\n",m+1);
for(i=0;i<l;i++)
if(c[i]==m)
puts(b[i]);
}
}