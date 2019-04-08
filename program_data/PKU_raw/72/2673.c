int topjudge(int a[][20],int m,int n,int p,int q)
{
	if(p==0)
		if(q==0)
			if(a[p][q]<a[p+1][q]||a[p][q]<a[p][q+1])
				return 0;
			else
				return 1;
		else if(q==n-1)
			if(a[p][q]<a[p+1][q]||a[p][q]<a[p][q-1])
				return 0;
			else
				return 1;
		else
			if(a[p][q]<a[p+1][q]||a[p][q]<a[p][q-1]||a[p][q]<a[p][q+1])
				return 0;
			else
				return 1;
	else if(p==m-1)
		if(q==0)
			if(a[p][q]<a[p-1][q]||a[p][q]<a[p][q+1])
				return 0;
			else
				return 1;
		else if(q==n-1)
			if(a[p][q]<a[p-1][q]||a[p][q]<a[p][q-1])
				return 0;
			else
				return 1;
		else
			if(a[p][q]<a[p-1][q]||a[p][q]<a[p][q-1]||a[p][q]<a[p][q+1])
				return 0;
			else
				return 1;
	else
	    if(q==0)
			if(a[p][q]<a[p-1][q]||a[p][q]<a[p+1][q]||a[p][q]<a[p][q+1])
				return 0;
			else
				return 1;
		else if(q==n-1)
			if(a[p][q]<a[p-1][q]||a[p][q]<a[p+1][q]||a[p][q]<a[p][q-1])
				return 0;
			else
				return 1;
		else
			if(a[p][q]<a[p-1][q]||a[p][q]<a[p+1][q]||a[p][q]<a[p][q-1]||a[p][q]<a[p][q+1])
				return 0;
			else
				return 1;
}

int main()
{
	int a[20][20],b[20][2];
	int m,n,i,j,k=0;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(topjudge(a,m,n,i,j)==1)
			{
				b[k][0]=i;
				b[k][1]=j;
				k++;
			}
			for(i=0;i<k;i++)
				printf("%d %d\n",b[i][0],b[i][1]);


	return 0;
}