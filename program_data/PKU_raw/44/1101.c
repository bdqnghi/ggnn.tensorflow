void main()
{
	int c,k,d,i,sum,e,j;
	int m;
	m=6;
	int b[10]={0};
	for(j=0;j<=m-1;j++)
	{
	scanf("%d",&c);
	if(c<0) printf("-");
	d=fabs(c);
	k=log10(d);
	for(i=k;i>=0;i--)
	{
		b[i]=d/pow(10,i);
		d=d-b[i]*pow(10,i);
	}
	for(i=0;i<=k;i++)
	{
		if(b[i]!=0)
		{
			e=i;
		    break;
		}
	}
	sum=b[k];
	for(i=k-1;i>=e;i--)
		sum=sum+b[i]*pow(10,k-i);
	printf("%d\n",sum);
	}
}

	
    