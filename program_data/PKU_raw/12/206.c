void main()
{
	int i,j,k,l,x=0,a[20];		
	
	
		while(1)
		{
			x=0;
			scanf("%d",&a[0]);
			if(a[0]==-1) break;
			for(j=1;a[j-1]!=0;j++)
			scanf("%d",&a[j]);
		for(k=0;k<j-1;k++)
		{
			for(l=0;l<j;l++)
			{
				if(a[l]==2*a[k])
					x=x+1;
			}
		}
		printf("%d\n",x);
	}
}
