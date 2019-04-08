int main()
{
int n,a[20000],b[20000],h,i,j,c[10000],d[10000];int k=0;
scanf("%d",&n);
for(h=0;;h++)
{
scanf("%d%d",&a[h],&b[h]);
if(a[h]==0&&b[h]==0)
break;
}
for(i=0;i<n;i++)
{c[i]=1;d[i]=0;}
for(j=0;j<n;j++)
for(i=0;i<h;i++)
if(a[i]==j)
{c[j]=0;break;}
for(j=0;j<n;j++)
if(c[j])
{
for(i=0;i<h;i++)
if(b[i]==j)
d[j]++;
}
for(j=0;j<n;j++)
if(d[j]==n-1&&n>1)
{printf("%d\n",j);k=1;}
if(k==0)
printf("NOT FOUND");}