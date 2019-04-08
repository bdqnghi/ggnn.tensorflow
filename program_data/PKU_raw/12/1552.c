int main()
{
	int a[16],x,y,s,i,j,k,l,m,n;
	do
	{
		scanf("%d",&x);
		if(x==-1) break;
		a[0]=x;
		i=1;
		do
		{
			scanf(" %d",&y);
			a[i]=y;
			i=i+1;
		}
		while(y!=0);
		scanf("\n");
		n=i-2;
		i=0;
		while(i<=n)
		{
			j=0;
			while(j<=n-1)
			{
				if(a[j]>a[j+1]) 
				{
					s=a[j+1];
					a[j+1]=a[j];
					a[j]=s;
				}
					j=j+1;
			}
			i=i+1;
		}
		i=0;
		m=0;
		while(i<=n-1)
		{
			j=n-i;
			k=0;
			while(k<=j-1)
			{
				if(a[j]==2*a[k]) m=m+1;
				k=k+1;
			}
			i=i+1;
		}
		printf("%d\n",m);
	}
	while(x!=-1);
}