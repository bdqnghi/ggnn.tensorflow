int main()
{
	int a[8][8],m,n,b,c;//m b is hang, n c is lie.
	int p=0,q=0,o,temp;
	int r=0, s=0, t=0,hang,lie;//ji shu 
	scanf("%d,%d",&m,&n);
	for(b=0;b<=m-1;b++)
	{
		for(c=0;c<=n-2;c++)
		{
			scanf("%d ",&a[b][c]);
		}
		scanf("%d",&a[b][n-1]);
	}//du ru shu zu	
	for(p=0;p<=m-1;p++)
	{
		temp=a[p][0];
		for(q=0;q<=n-2;q++)
		{
			if(temp<=a[p][q+1])
			{
				temp=a[p][q+1];
				r=q+1;
			}
		}
		for(o=0;o<=m-1;o++)
		{
			if(a[p][r]<=a[o][r])
				s++;
		}
		if(s==m)
		{
			t++;
			hang=p,lie=r;
		}
		r=0,s=0;
	}
	if(t==0)
		printf("No");
	else
	{
		printf("%d+%d",hang ,lie);
	}
	return 0;
}

