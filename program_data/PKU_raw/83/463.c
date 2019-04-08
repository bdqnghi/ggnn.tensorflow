void main()
{
	int n,a[10],b[10],i,t,s=0;
	float c[10],jx=0.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
		scanf("%d",&b[i]);
	for(i=1;i<=n;i++)
	{
		t=b[i];
		if(t<60)c[i]=0.0;
		else if(t<=63)c[i]=1.0;
		else if(t<=67)c[i]=1.5;
		else if(t<=71)c[i]=2.0;
		else if(t<=74)c[i]=2.3;
		else if(t<=77)c[i]=2.7;
		else if(t<=81)c[i]=3.0;
		else if(t<=84)c[i]=3.3;
		else if(t<=89)c[i]=3.7;
		else if(t<=100)c[i]=4,0;
		jx=jx+a[i]*c[i];
		s=s+a[i];
	}
	printf("%.2f\n",jx/s);
}


	    


