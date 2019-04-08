int main()
{
	int i,j,k,n,b,x,c,a1,a2,a3;
	scanf("%d",&n);
	a1=(int)(n/2);
	for (i=6;i<=n;i++)
		if (i%2==0)     
			for (j=2;j<=a1;j++)      
			{       
				b=0;
				x=0;
				a2=(int)(sqrt(j));
				if ((j>2)&&(j%2==0))
					b=1;
				else           
					for (k=2;k<=a2;k++)
						if (j%k==0)
							b=1;
							x=i-j;
							a3=(int)(sqrt(x));
						if (b==0)
							if ((x>2)&&(x%2==0)) 
								b=1;
							else
								for (k=2;k<=a3;k++)
									if (x%k==0)
										b=1;
									if (b==0)
									{          
										printf("%d=%d+%d\n",i,j,x);
										break;
									}
			}
	return 0;
}

