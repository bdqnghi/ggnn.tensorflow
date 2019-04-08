void main()
{
	int a[6][6],i,j,k,p=0,m=0,n=0;
	for(i=1;i<6;i++)
		for(j=1;j<6;j++)
			scanf("%d",&a[i][j]);

	for(i=1;i<6;i++)
		for(j=1;j<6;j++)
		{
			
			for(k=1;k<6;k++)
			{
				if(k==j&&j!=5)
					k++;
				else if(j==5&&k==5)
					break;
				if(a[i][j]>a[i][k])
					p++;
			}
			if(p==4)
			{
				for(k=1;k<6;k++)
				{
					if(k==i)
						k++;
					if(a[i][j]<a[k][j])
						m++;
				}
			    if(m==4)
				{
			     	printf("%d %d %d\n",i,j,a[i][j]);
				    n++;
				}
			}
			p=0;
			m=0;
		}


	if(n==0)
		printf("not found\n");
}




