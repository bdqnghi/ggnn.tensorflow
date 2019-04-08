main()
{
int n,i,j;
scanf("%d",&n);
int a[n+5],b[n+5];
for (i=0;i<n;i++) {a[i]=0; b[i]=0;}
while (1)
{
scanf("%d %d",&i,&j);
if (i==j&&i==0) break;
a[i]++;
b[j]++;
}
int flag=0;
for (i=0;i<n;i++)
if (a[i]==0&&b[i]==n-1)
{
flag=1;
printf("%d\n",i);
}
if (!flag) printf("NOT FOUND\n");
}
