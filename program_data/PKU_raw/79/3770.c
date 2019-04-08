void main()
{ 
	int i,j,t,k,m,n,num[500],*p;
	for(i=0;i<100;i++)
	{
		scanf("%d %d",&n,&m);
		if(n==0&&m==0) break;
		else
		{
			p=num;
			for(j=0;j<n;j++)
				*(p+j)=j+1;
			j=0;
			k=0;
			t=0;
			while(t<n-1)
			{
				if(*(p+j)!=0)
					k++;
				if(k==m)
				{
					*(p+j)=0;
					k=0;
					t++;
				}
				j++;
				if(j==n) j=0;
			}
			while(*p==0) p++;
			printf("%d\n",*p);
		}
	}
}