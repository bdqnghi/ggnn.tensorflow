
int main(int argc, char* argv[])
{
	int A[16];
	int sum,j,i,k,m;
	for(j=0;;j++)
	{
		scanf("%d",&A[0]);
		if(A[0]==-1) 
			return 0;
		while(A[0]!=0&&A[0]!=-1)
		{
			sum=0;
			for(i=1;;i++)
			{
				scanf("%d",&A[i]);
				if(A[i]==0)
					break;
			}
			for(k=0;k<i;k++)
			{
			         for(m=0;m<i;m++)
					{
				          	if(A[k]==A[m]*2)
						        sum=sum+1;
					}
			}
		     printf("%d\n",sum);
		     break;
		}
	}
	return 0;
}