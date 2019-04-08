int main()
{
	int m,n,a[10],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		if(m==0)
		{
			printf("60\n");
		}
		else
		{
			for(j=1;j<=m;j++)
			{
				scanf("%d",&a[j]);
			}
			if(a[m]+3*m<=60)
				printf("%d\n",60-3*m);
			else
			{
			    for(j=1;j<=m;j++)
				{
					if(a[j]+3*j>60)
					{
						if(a[j]+3*j<=63)
						{
							printf("%d\n",a[j]);
						    break;
						}
						else
						{
							printf("%d\n",63-3*j);
							break;
						}
					}
				}

			}
		}
	}
	return 0;
}
