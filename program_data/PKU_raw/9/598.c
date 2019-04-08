main()
{
int i,k,j,l,n,w,max,old;
int q=0;
char d[101][10];
int a[101];
int b[101];
int c[101];
scanf("%d",&n);
old=0;
for(i=1;i<=n;i++)
scanf("%s %d",d[i],&a[i]);
for(i=1;i<=n;i++)
{
b[i]=0;
if(a[i]>=60)
{
b[i]=1;
old=old+1;
}
}



for(i=1;i<=old;i++)
{
max=0;
for(j=1;j<=n;j++)
{
if(b[j]==1) 
{
if(a[j]>max)
{
max=a[j];
w=j;
}
}
}
c[i]=w;
b[w]=2;
}
for(l=1;l<=old;l++)
{
q=c[l];
printf("%s\n",d[q]);
}
for(l=1;l<=n;l++)
{
if(b[l]==0)
printf("%s\n",d[l]);
}
getchar();
getchar();
getchar();
getchar();
}

