int main()
{
	int a[5][5],i,j,k,l,max=0,max1=0,max2=0,min1=0,min2=0,min=0,t=0,r,s;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}


	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j==0)
			{
				max=a[i][0];
				r=0;
			}
			else if(a[i][j]>max)
			{
				max=a[i][j];
				r=j;
			}
		}
		for(k=0;k<5;k++)
		{
		    for(l=0;l<5;l++)
			{
				if(l==0)
				{
					min=a[0][k];
					s=0;
				}
				else if(a[l][k]<min)
				{
					min=a[l][k];
					s=l;
				}
			}
							
			if(max==min&&i==s&&r==k)
			{
                s++;
                r++;
				printf("%d %d %d",s,r,min);
				t++;
				max=0;min=100;
			}
		}
				
			
	}
	if(t==0)
	{
		printf("not found");
	}
	return 0;
}