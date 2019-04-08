int main()
{
	int n,h,l,s,i,j,p,sum,m;
	scanf("%d",&n);
	sum=0;
	j=0;
	for(h=1;h<=n;h++)
	{
		i=0;
		for(l=1;l<=n;l++)
		{			
			scanf("%d",&s);  
			if(s==0)
				i++;
		}
		sum=sum+i;
        if(i!=0)
			j++;
	}
	if(j<=2||sum<=2*j)
		printf("0");
	else
	{
		p=(sum-2*j)/2;
		m=p*(j-2);
		printf("%d",m);
	}
	return 0;
}

 