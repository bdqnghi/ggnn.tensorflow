int k[99999];

int x[99999];
int main()
{
	int n,i ,a,b,c,j,r,t,m=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&a,&b,&c);k[a-1]=b+c;x[i]=a;
	}
	for(j=n-1;j>=0;j--)
	{
		for(r=0;r<j;r++)
		{
			if(k[r]>=k[r+1])
			{
				t=k[r+1];
				k[r+1]=k[r];
				k[r]=t;
				t=x[r+1];
                x[r+1]=x[r];
				x[r]=t;
			}
		
		}	m++;
		if(m>3) break;
	}                     
		
		printf("%d %d\n%d %d\n%d %d\n",x[n-1],k[n-1],x[n-2],k[n-2],x[n-3],k[n-3]);
		return 0;
}