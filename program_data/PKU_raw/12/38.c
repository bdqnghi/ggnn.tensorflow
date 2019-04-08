
int main(int argc, char* argv[])
{
	int p[50][15],n[50],line,sum,i,k,j;
	for(i=0;;i++)
	{
		for(k=0;;k++)
		{
			scanf("%d",&p[i][k]);
			if(p[i][k]==0||p[i][k]==-1)
			{
			   n[i]=k;
			   break;
			}
		}
		if(p[i][k]==-1)
		{
			line=i;
			break;
		}
	}
	for(i=0;i<line;i++)
	{
		sum=0;
		for(k=0;k<n[i];k++)
		{
			for(j=k+1;j<n[i];j++)
			{
				if(p[i][k]==p[i][j]*2||p[i][j]==p[i][k]*2)
					sum=sum+1;
			}
		}
		printf("%d\n",sum);
	}
	
	return 0;
}

