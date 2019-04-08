void main()
{
	int f(int p);
	int n,m,i,k,q,p,x=0,t=0;
	scanf("%d %d",&m,&n);
	i=m;
	while(i<=n)
	{
		p=i;
		t=0;
		while(p>=1)
		{
			k=p%10;
			p=p/10;
			t=t*10+k;
		}
		if(t!=i)i++;
		else
		{
			q=f(i);
	     	if(q)
			{
				printf("%d",i);
				x++;
			    break;
			}
			else i++;
		}
	}
	i++;
    while(i<=n)
	{
		p=i;
		t=0;
		while(p>=1)
		{
			k=p%10;
			p=p/10;
			t=t*10+k;
		}
		if(t==i) 
		{
			q=f(i);
		    if(q)
			{
				printf(",%d",i);
				x++;
			}
		}
		i++;
	}
	if(x==0)printf("no");
}

int f(int p)
{
	int j,k;
	if(p%2==0)k=0;
	else
	{
	   for(j=3;j<p;j++)
		if(p%j==0)break;
	   if(j>=p)k=1;
	   else k=0;
	}
	return(k);
}