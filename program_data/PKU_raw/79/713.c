void main()
{
int a[320];int b[2][20],g=0,q;
int i,j,m,n,mj=0;
do
{
	scanf("%d%d",&b[0][g],&b[1][g]);
	g++;
}while(b[0][g-1]!=0&&b[1][g-1]!=0);

q=g-1;
for(g=0;g<q;g++)
{
	m=b[1][g];n=b[0][g];
        for(i=1;i<=n;i++)
			a[i]=i;
		for(i=1,j=0,mj=0;j<n-1;i++)  
		{
			if(i>n)i=i-n;
			if(a[i]!=0)
			{
				mj=mj+1;
				if(mj%m==0)
				{
					a[i]=0;j++;
				}
			}
		}
		for(i=1;i<=n;i++)
			if(a[i]!=0)printf("%d\n",a[i]);
}
}