
int min(int n,int p,int q,int f[8][8],int w)
{
	int m;
	for(m=0;m<n;m++)
	{
		if(f[p][q]>f[m][q])
			break;
		if(m==n-1)
		{
			w++;
			printf("%d+%d",p,q);
		}
	}
	return w;
}


int main()
{
	int n,m,i,j,k,p,q,f[8][8]={0},w=0;
	
	scanf("%d,%d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			scanf("%d",&f[i][j]);
	}

	for(i=0;i<n;i++)
	{
		k=f[i][0];
		p=i;
		q=0;
		for(j=0;j<m;j++)
		{
			if(f[i][j]>k)
			{
				k=f[i][j];
				q=j;
			}
		}
		w=w+min(n,p,q,f,w);
	}
	if(w==0)
		printf("No");
	return 0;
}

