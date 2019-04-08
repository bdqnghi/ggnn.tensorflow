main()
{
	int a[5][5],b[5][5],e[5][5];
	int c[5],d[5];
	int i,j,k,f,n=0,s=0;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
	{
		scanf("%d",&a[i][j]);
		b[i][j]=a[i][j];
		e[i][j]=a[i][j];
		}
	
	for(k=0;k<5;k++)
	{
	for(j=0;j<4;j++)
	{
      if(b[k][j]>=b[k][j+1])
	  {
			f=b[k][j];b[k][j]=b[k][j+1];b[k][j+1]=f;
			}		
		}
		c[k]=b[k][4];
		}
		
	for(k=0;k<5;k++)
	{
	for(j=0;j<4;j++)
	{
      if(e[j][k]<=e[j+1][k])
	  {
			f=e[j][k];e[j][k]=e[j+1][k];e[j+1][k]=f;
			}		
		}
		d[k]=e[4][k];
		}
	
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	{
		if(a[i][j]==c[i]&&a[i][j]==d[j])
		{
			printf("%d %d %d",i+1,j+1,a[i][j]);
		    n=n+1;	
				}
			}
	if(n==0)
	printf("not found");
	}
