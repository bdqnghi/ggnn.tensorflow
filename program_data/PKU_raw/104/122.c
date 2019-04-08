void main()
{
	int x[100],y[100],i,j,p,q,k,temp=0;
	scanf("%d%d",&x[0],&y[0]);
	for(i=0;x[i]!=0;i++)
	{
		
		x[i+1]=x[i]/2;
	}
    for(p=0;y[p]!=0;p++)
	{
     
		y[p+1]=y[p]/2;
	}
	for(q=0;q<=i;q++)
	{
		for(j=0;j<=p;j++)
		{
			if(x[q]==y[j])
			{
				temp=1;
				k=q;
				break;
			}
		}
		if(temp==1)
			break;
	}
	printf("%d",x[k]);
}