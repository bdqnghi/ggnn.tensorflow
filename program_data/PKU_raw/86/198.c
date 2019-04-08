int main()
{
	int i,j,n,A[100],m,B[100],k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		B[i]=0;
		scanf("%d",&m);
		if(m==0)
		{
			B[i]=60;
		}
		else{
			for(j=0;j<m;j++)
			{
				scanf("%d",&A[j]);
			}
			if(A[0]>=60)
			{
				B[i]=60;
			}
			else if(A[m-1]+3*m<=60)
			{
				B[i]=60-3*m;
			}
			else if(A[m-1]+3*m-3<=60)
			{
				B[i]=A[m-1];
			}
			else
			{
				for(k=1;k<m;k++)
				{
					if(A[k]+3*k<=60)
					{
						B[i]=A[k];
					}
					else{
						if(A[k-1]+3*k<60)
						{
							B[i]=60-3*k;
							break;
						}
						else{
					    B[i]=A[k-1];
						break;
					}
				}
			}
		}
	}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",B[i]);
	}
	return 0;
}
