
int main()
{
	int n;
	int a[100];
	int sum[100];
	int i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&j);
		for(k=1;k<=j;k++)
		{
			scanf("%d",&a[k-1]);
		}

    	if(j==0)
		{
			sum[i]=60;
		}
		else if(j==1)
		{
			if(a[0]<=57)
			{
				sum[i]=57;
			}
			else
			{
				sum[i]=a[0];
			}
		}
				
		else
		{   
			if(a[j-2]+3*(k-1)>=60)
			{
			j=j-1;
			}

		
			if(a[j-1]+3*j<=60)
			{
				sum[i]=60-3*j;
			}
			else if(a[j-1]+3*(j-1)<=60&&a[j-1]+3*j>60)
			{
				sum[i]=a[j-1];
			}

		    else if(a[j-2]+3*(j-1)<=60&&a[j-1]+3*(j-1)>60)
			{
		     	sum[i]=60-3*(j-1);
			}
	    	else 
			{
				sum[i]=a[j-2];
			}
		}
	}


		
	for(i=0;i<n;i++)
	{
	    printf("%d\n",sum[i]);
	}
	return 0;
}

	



