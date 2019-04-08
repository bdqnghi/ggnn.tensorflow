int main()
{
int n,i,j,k;
scanf("%d %d",&n,&k);
int a[n];
int b[n];
for(i=0;i<n;i++)
{
scanf("%d ",&a[i]);
b[i]=k-a[i];
}
int m=0;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(b[j]==a[i])m++;
}
}
if(m>0) printf("yes");
else printf("no");
}

