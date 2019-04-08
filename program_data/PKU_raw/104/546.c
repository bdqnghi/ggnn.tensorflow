int main()
{
	int a,b,c[11],d[11],n1=1,n2=1;
	int i,j,flag=0;
	scanf("%d %d",&a,&b);
	c[0]=a;
	d[0]=b;
	for(i=0;i<11;i++)
	{
		if(c[i]==1)
			break;
		if(c[i]%2==0)
			c[i+1]=c[i]/2;
		else
			c[i+1]=(c[i]-1)/2;
		n1+=1;
	}
	for(i=0;i<11;i++)
	{
		if(d[i]==1)
			break;
		if(d[i]%2==0)
			d[i+1]=d[i]/2;
		else
			d[i+1]=(d[i]-1)/2;
		n2+=1;
	}
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			if(c[i]==d[j])
			{
				printf("%d",c[i]);
				flag=1;
				break;
			}
		}
		if(flag==1)
			break;
	}
	return 0;
}