
int main()
{
	int a[10][10]={0}, i, j, m, n, count=0, temp, m_, n_, w;
	scanf("%d,%d", &m, &n);
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			scanf("%d", &a[i][j]);
//	printf("ohear");
	for(i=0; i<m; i++)
	{
		temp=a[i][0];
		m_=i;
		n_=0;
		for(j=0; j<n; j++)
		{
			if(a[i][j]>temp)
			{
				temp=a[i][j];
				m_=i;
				n_=j;
			}
		}
		
			for(w=0; w<m; w++)
		
			{
				if(w == m_)
					continue;			
				if(a[w][n_]>temp)
			
				{
				
					if(w == m-1)
				
					{
					
						printf("%d+%d", m_, n_);					
						count++;
				
					}
				
					else
					
						continue;
			
				}
			
				else 				
					break;
		
			}
	
	}
	if(count == 0)
		printf("No\n");
	else
		printf("\n");
	return 0;
}


			

