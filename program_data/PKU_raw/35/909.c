void main()
{
	double a[10][10]={0}, temp;
	int i, j, m, n, count=0, na, w;
	scanf("%d,%d", &m, &n);
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			scanf("%lf", &a[i][j]);
	for(i=0;i<m;i++)
	{
		temp=a[i][0];
		na=0;
		for(j=0; j<n; j++)
		{
			if(a[i][j]>temp)
			{
				temp=a[i][j];
//				m_=i;
				na=j;
			}
		}
		
		for(w=0; w<m; w++)
		
		{
				if(w == i)
					continue;			
				if(a[w][na]<temp)
					break;							
				if(w == m-1)				
				{					
						printf("%d+%d", i, na);
						count++;
						break;
				
				}		
		}
		if(count==1)
		{
		break;
		}
	
	}
	if(count==0)
		printf("No\n");

}

