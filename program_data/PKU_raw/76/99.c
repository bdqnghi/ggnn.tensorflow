int main()
{int n,ai=0,bi=0,i,j,a[2][50000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	scanf("%d %d",&a[1][i],&a[0][i]);
	}
	for(i=n-1;i>0;i--)
	{	for(j=0;j<i;j++)
		{	if(a[1][j]>a[1][i])
			{	ai=a[1][j];
				bi=a[0][j];
				a[1][j]=a[1][i];
				a[0][j]=a[0][i];
				a[1][i]=ai;	
				a[0][i]=bi;
			}	
		}
	}
	ai=a[1][0];
	bi=a[0][0];
	for(i=0;i<n-1;i++)
	{	if(a[1][i+1]>bi)
		{	printf("no");
			return 0;
		}
		else
		{	if(a[0][i+1]>bi)
			bi=a[0][i+1];
		}
		
	}
	printf("%d %d",ai,bi);
	return 0;
}