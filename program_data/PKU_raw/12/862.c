void main()
{
	int a[100][16],i,j,x,y,m,n,o,p,q,b,c[100];
	for(j=1;j<=100;j++)
	{
		for(i=1;i<=16;i++)
		{
			scanf("%d",&a[j][i]);
			if(a[j][i]==0||a[j][i]==-1)
			{
				c[j]=i-1;
				break;
			}
		}
		if(a[j][i]==-1)
			break;
	}
	for(m=1;m<j;m++)
	{
		b=0;
		for(p=1;p<=c[m];p++)
		{		
			for(q=p+1;q<=c[m];q++)
			{
				if(a[m][q] == 2 * a[m][p]||2*a[m][q]==a[m][p])
					b=b+1;
			}
		}	
		printf("%d\n",b);
	}
}


