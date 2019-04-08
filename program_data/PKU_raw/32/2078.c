void main()
{
	int n,i,j,k,ya,yb,m;
	char a[100]={0},b[100]={0};
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		scanf("%s\n",a);
		scanf("%s",b);
	
		
		ya=strlen(a);
		yb=strlen(b);
    	i=ya-1;
		for(k=yb-1;k>=0;k--)
		{
			if(a[i]>=b[k])
			{
				a[i]=a[i]-b[k]+48;
			}
			   
			
			else//if(a[i]<b[k])
			{
				a[i]=a[i]-b[k]+58;
				
				for(m=i-1;m>=0;m--)
					{
					  if(a[m]>=49)
						{
						  a[m]=a[m]-1;
							break;
						}

				      else if(a[m]==48)
						  a[m]=57;
					}
			
			}
			i--;
		}
		
			printf("%s",a);
		printf("\n");
	}
}


