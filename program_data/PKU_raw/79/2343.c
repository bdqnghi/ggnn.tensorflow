
main()
{int x=0,y,i,z,m,n,a,b=0; 
	while(b==0)
	{scanf("%d %d",&n,&m);
	int c[n];
	for(i=1;i<=n;i++)
	c[i]=i;
	if(n==0)
	b=1;
	else
	{x=0;
		while(n>=2)
	{a=m+x;
	x=a%n;
	if(x==0)
	x=n;
	for(z=x;z<n;z++)
	c[z]=c[z+1];
	n=n-1;
	x--;
	}
	printf("%d\n",c[1]);
		}
}
}