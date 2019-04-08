void main()
{
	int i,j,n;
	double s[11],t[11],q[11],r[11],k=0,m=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lf''",&s[i]);
		k+=s[i];
	}
	printf("\n");
	for(i=1;i<=n;i++)
	{
		scanf("%lf",&t[i]);
			if('d'>=t[i]&&t[i]>='Z')
				q[i]=4;
			else if('Y'>=t[i]&&t[i]>='U')
				q[i]=3.7;
			else if('T'>=t[i]&&t[i]>='R')
				q[i]=3.3;
			else if('Q'>=t[i]&&t[i]>='N')
				q[i]=3.0;
			else if('M'>=t[i]&&t[i]>='K')
				q[i]=2.7;
			else if('J'>=t[i]&&t[i]>='H')
				q[i]=2.3;
			else if('G'>=t[i]&&t[i]>='D')
				q[i]=2.0;
			else if('C'>=t[i]&&t[i]>='@')
				q[i]=1.5;
			else if('?'>=t[i]&&t[i]>='<')
				q[i]=1.0;
			else if(t[i]<'<')
				q[i]=0;
			
	}
       printf("\n");
for(i=1;i<=n;i++)
{
	r[i]=s[i]*q[i];
    m+=r[i];
}
printf("%.2lf",m/k);
}
