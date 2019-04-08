int main()
{
	int i,j,a[100][100]={{0},{0}},s=0,b,t=0,r=0,c=0,R,rmin=0,C,cmin=0;
	scanf("%d%d",&R,&C);
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			scanf("%d",&a[i][j]);
			t=t+1;
		}
	}
	for(b=0;b<=10000;b++)
	{
		for(c=cmin;c<C;c++)
		{
			printf("%d\n",a[r][c]);
			s=s+1;
			if(s==t)
				return 0;
		}
		C-=1;
		c-=1;
		rmin+=1;
		for(r=rmin;r<R;r++)
		{
			printf("%d\n",a[r][c]);
			s=s+1;	
			if(s==t)
				return 0;
		}
		R-=1;
		r-=1;
		for(c=C-1;c>=cmin;c--)
		{
			printf("%d\n",a[r][c]);
			s=s+1;	
			if(s==t)
				return 0;
		}
		c+=1;
		for(r=R-1;r>=rmin;r--)
		{
			printf("%d\n",a[r][c]);
			s=s+1;		
			if(s==t)
				return 0;
		}
		r+=1;
		cmin+=1;
	}
}