void main()
{int sum(int *p,int h,int l);
int N,m,n,i,j,q,a[110][110]={0};scanf("%d",&N);for(q=1;q<=N;q++)
{scanf("%d%d",&m,&n);for(i=0;i<=m-1;i++)for(j=0;j<=n-1;j++)scanf("%d",&a[i][j]);
printf("%d\n",sum(a[0],m,n));
}}

int sum(int *p,int h,int l)
{int r=0,i,j;for(i=0;i<=h-1;i++)
{if(i==0||i==(h-1))for(j=0;j<=l-1;j++)r=r+*(p+i*110+j);
else r=r+*(p+i*110)+*(p+i*110+l-1);}
return r;
}