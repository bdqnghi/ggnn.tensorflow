void main()
{
	int n,m,i,j,p,q,k,shuru;
	int a[1000];
	for(shuru=0;shuru<1000;shuru++)
	{
	    for(i=0;i<1000;i++)
		{a[i]=0;}
		scanf("%d %d",&n,&m);	
		if(n==0 && m==0) break;
		if(n==1){printf("1\n");continue;}
		for(k=n,q=1,i=0;;i++)
		{
			p=i%n;
			if(a[p]==0)
			{
				if((q%m)!=0) {q=q+1;continue;}
				if((q%m)==0)
				{
					a[p]=1;
					q=q+1;
					k=k-1;
				}
				if(k==1)
				{
					for(j=0;j<n;j++)
					{if(a[j]==0) printf("%d\n",j+1);}
					break;
				}
			}
			if(a[p]==1) continue;
		}
	}
}