int main(int argc, char* argv[])
{
	int m,n;
	scanf("%d %d",&m,&n);
	int h[21][21];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&h[i][j]);
		}
	}
	for(int k=0;k<m;k++)
	{
		for(int l=0;l<n;l++)
		{
			if((k==0&&l==0)&&(h[0][0]>=h[1][0]&&h[0][0]>=h[0][1]))
			{
				printf("%d %d\n",k,l);
			}
			else if((k==0&&l==n-1)&&(h[0][n-1]>=h[0][n-2]&&h[0][n-1]>=h[1][n-1]))
			{
				printf("%d %d\n",k,l);
			}
			else if((k==m-1&&l==0)&&(h[m-1][0]>=h[m-2][0]&&h[m-1][0]>=h[m-1][1]))
			{
				printf("%d %d\n",k,l);
			}
			else if((k==m-1&&l==n-1)&&(h[m-1][n-1]>=h[m-1][n-2]&&h[m-1][n-1]>=h[m-2][n-1]))
			{
				printf("%d %d\n",k,l);
			}
			else if((k==0&&(l>0&&l<n-1))&&(h[k][l]>=h[k][l-1]&&h[k][l]>=h[k][l+1]&&h[k][l]>=h[k+1][l]))
			{
				printf("%d %d\n",k,l);
			}
			else if((k==m-1&&(l>0&&l<n-1))&&(h[k][l]>=h[k][l-1]&&h[k][l]>=h[k][l+1]&&h[k][l]>=h[k-1][l]))
			{
				printf("%d %d\n",k,l);
			}
            else if((l==0&&(k>0&&k<m-1))&&(h[k][l]>=h[k][l+1]&&h[k][l]>=h[k+1][l]&&h[k][l]>=h[k-1][l]))
			{
				printf("%d %d\n",k,l);
			}
            else if((l==n-1&&(k>0&&k<m-1))&&(h[k][l]>=h[k][l-1]&&h[k][l]>=h[k+1][l]&&h[k][l]>=h[k-1][l]))
			{
				printf("%d %d\n",k,l);
			}
			else if(h[k][l]>=h[k][l-1]&&h[k][l]>=h[k][l+1]&&h[k][l]>=h[k-1][l]&&h[k][l]>=h[k+1][l])
			{
				printf("%d %d\n",k,l);
			}
		}
	}
	return 0;
}

