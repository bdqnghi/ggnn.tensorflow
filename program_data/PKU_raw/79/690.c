void main()
{
	int a[301]={0};
	int n,m,i,k,j,s,king;
	for(j=1;;j++)
	{
	   scanf("%d",&n);
	   scanf("%d",&m);
	   if(m!=0&&n!=0&&m!=1)
		
 
	   {
		k=0;
		for(i=1;i<=n;i++)
			a[i]=i;
		do
		{
			
			
			

			for(i=1;i<=n;i++)
			{
				if(a[i]==0)
					k=k;
				else k=k+1;
				if(k==m) {a[i]=0;k=0;}

			}
			s=0;
			for(i=1;i<=n;i++)
			{
				if(a[i]>0)s=s+1;
			}
		}while(s>1);
		for(i=1;i<=n;i++)
		{
			if(a[i]!=0)king=a[i];
		}
		
	printf("%d\n",king);
	}
	if(m==0&&n==0)break;
	if(m==1)printf("%d\n",n);
	}
}

