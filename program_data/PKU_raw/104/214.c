int main()
{
	int a,b,i=1,j=1,m,n,x[11],y[11];
	scanf("%d%d",&a,&b);
	x[0]=a;y[0]=b;
	while(a>1)
	{
		a=a/2;
		x[i]=a;
		i++;
	}
	while(b>1)
	{
		b=b/2;
		y[j]=b;
		j++;
	}
	for(m=0;m<i;m++)
	{
		for(n=0;n<j;n++)
		{
			if(x[m]==y[n])
			{
				printf("%d",x[m]);
				return 0;
			}
		}
	}
	return 0;
}

