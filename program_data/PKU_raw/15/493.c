int main(int argc, char* argv[])
{
	int A[1000][1000];
	int n,a,b,c,d;
	int i=0,j=0;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			scanf ("%d",&A[i][j]);
				if (A[i][j]==0&&A[i][j-1]!=0&&A[i-1][j]!=0)
				{
					a=i;
					b=j;
				}
				if (A[i][j]==0&&A[i][j-1]==0&&A[i-1][j]==0)
				{
					c=i;
					d=j;
				}
		}
	}

	printf("%d",(c-a-1)*(d-b-1));
	return 0;
}

