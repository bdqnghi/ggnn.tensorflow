int fun(int x,int y)
{
	int z=0;
	if(x>y)
		z=1;
	if(x<y)
		z=-1;
	return (z);
}
int main()
{
	int n,media,k,max,temp;
	int t[1000],w[1000],sum[1000];
	int i,i1,j;
	scanf("%d",&n);
	do
	{
		memset(sum,0,sizeof(sum));
		max=-1000;//?????????
		for(i1=0;i1<n;i1++)
		{
			scanf("%d",&t[i1]);
		}
		for(i1=0;i1<n;i1++)
		{
			scanf("%d",&w[i1]);
		}
		for(i1=0;i1<n;i1++)
		{
			for(j=0;j<n-1;j++)
				if(t[j]<t[j+1])
				{
					media=t[j];
					t[j]=t[j+1];
					t[j+1]=media;
				}
		}
		for(i1=0;i1<n;i1++)
		{
			for(j=0;j<n-1;j++)
				if(w[j]<w[j+1])
				{
					media=w[j];
					w[j]=w[j+1];
					w[j+1]=media;
				}
		}//??
		for(i=0;i<=n/2;i++)
		{
			for(i1=0;i1<n;i1++)
			    { 
					sum[i]=sum[i]+fun(t[i1],w[i1]);
			    }
                        max=max>sum[i]?max:sum[i];
			temp=w[0];
			for(i1=0;i1<n-1;i1++)
				w[i1]=w[i1+1];
			w[n-1]=temp;
		}
		printf("%d\n",max*200);	
		scanf("%d",&n);
	}while(n!=0);//??????
}
