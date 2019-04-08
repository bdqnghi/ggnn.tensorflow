int cal(int matrix[][120],int n)
{
	 if (n==1) return(0);
	 int i,j,min,s;
	 for (i=0;i<n;i++)
	 {
		 min=32767;
		 for (j=0;j<n;j++)
		 {
			 if (matrix[i][j]<min) min=matrix[i][j];
		 }
		 for (j=0;j<n;j++)
			 matrix[i][j]=matrix[i][j]-min;
	 }
	 for (i=0;i<n;i++)
	 {
		 min=32767;
		 for (j=0;j<n;j++)
		 {
			 if (matrix[j][i]<min) min=matrix[j][i];
		 }
		 for (j=0;j<n;j++)
			 matrix[j][i]=matrix[j][i]-min;
	 }
	 s=matrix[1][1];
	 for (i=1;i<n-1;i++)
		 for (j=0;j<n;j++)
			 matrix[i][j]=matrix[i+1][j];
	 for (i=0;i<n-1;i++)
		 for (j=1;j<n-1;j++)
			 matrix[i][j]=matrix[i][j+1];

	 return(s+cal(matrix,n-1));
}

int main()
{
	 int n,i,j,k;
	 int a[120][120];
	 scanf("%d",&n);
	 for (i=1;i<=n;i++)
	 {
		for (j=0;j<n;j++)
			for (k=0;k<n;k++)
				scanf("%d",&a[j][k]);
		printf("%d\n",cal(a,n));
	 }
	 return(0);
}