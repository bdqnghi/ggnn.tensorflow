
int main()
{
 	int n;
 	scanf("%d",&n);
 	fflush(stdin);
 	
 	int i,j,k,m;
 	int lie,h;
 	int sum1=0,sum2=0,sum3=0,sum4=0,sum=0;
 	//int matrix[100][100];
 	
 	
 	
 	for(i=0;i<n;i++)
 	{
		sum1=0,sum2=0,sum3=0,sum4=0,sum=0;
		scanf("%d%d",&h,&lie);
		int matrix[h][lie];
		//printf("%d %d",h,lie);
		
		
			
		for(j=0;j<h;j++)
		for(k=0;k<lie;k++)
		{
			scanf("%d",&matrix[j][k]);
		}
		fflush(stdin);
		
		if(h==1&&lie==1)
		{
			printf("%d\n",matrix[0][0]);
			return 0;
			}
			
	    
	    for(m=0;m<lie;m++)
	    {
			sum1+=matrix[0][m];
			sum2+=matrix[h-1][m];
		}
		
		for(m=0;m<h;m++)
	    {
			sum1+=matrix[m][0];
			sum2+=matrix[m][lie-1];
		}
		
		sum=sum1+sum2+sum3+sum4-(matrix[0][0]+matrix[0][lie-1]+matrix[h-1][0]+matrix[h-1][lie-1]);
		
		printf("%d\n",sum);
		
		
	}
			return 0;
	}
		
		
		
		
		
			
		
	 				
 	
 	