
int main()
{
	int f(int p,int q,int t);

	int n,i;
	int g[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&g[i]);
	for(i=0;i<n;i++)
	{
		printf("%d\n",f(2,g[i],1));
	}


	return 0;
}

int f(int p,int q,int t)
{
	int h[100][100];
	int i,k=0;
	for(i=p;i*i<=q;i++)
	{
		k=0;
		if(q%i==0)
		{
			h[k][0]=i;
			h[k][1]=q/i;
			k++;
			if(k!=0)
			{
				t=f(h[k-1][0],h[k-1][1],t);
			}
			
		}
		t=t+k;
	}
	return t;
}