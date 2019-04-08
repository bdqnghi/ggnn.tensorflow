int main()

{
	int A[5][5],B[5],C[5],k,i,j,n,m,x=0,a=1,b=1,c,d;

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	

	for(i=0,m=0;i<5,m<5;i++,m++)
	{
		for(j=0;j<5;j++)
		{
			for(k=0;k<5;k++)
			{			
				if(A[i][j]>A[i][k])
				{
					a=a+1;
				}else
				{
					a=a;
				}

			}
			if(a==5)
			{
				B[m]=A[i][j];
			}
			a=1;
		}
	}

	for(j=0,n=0;j<5,n<5;j++,n++)
		{
		for(i=0;i<5;i++)
			{
			for(k=0;k<5;k++)
			{			
				if(A[i][j]<A[k][j])
				{
					b=b+1;
				}else
				{
					b=b;
				}
			}
			if(b==5)
			{
				C[n]=A[i][j];
			}
			b=1;
			
		}
	}

	for(m=0;m<5;m++)
	{
		for(n=0;n<5;n++)
		{
			if(B[m]==C[n])
			{
				x=1;
				c=m+1;
				d=n+1;
				printf("%d %d %d",c,d,B[m]);
			}	
		}
	}

		if(x==0)
		{
			printf("not found");
		}
	
	
	return 0;
}