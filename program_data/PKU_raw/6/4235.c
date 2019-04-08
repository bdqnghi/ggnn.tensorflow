int main()
{int a[100][100];int i,j,q,s=0;
int m,n,k;
scanf("%d",&k);
for(q=0;q<k;q++)
{s=0;scanf("%d %d",&m,&n);

for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{scanf("%d",*(a+i)+j);}}

for(i=0;i<n;i++)
s=s+*(*(a+0)+i);
for(i=1;i<m;i++)
s=s+*(*(a+i)+n-1);
for(i=1;i<m;i++)
s=s+*(*(a+i)+0);
for(i=1;i<n-1;i++)
s=s+*(*(a+m-1)+i);
printf("%d\n",s);}}