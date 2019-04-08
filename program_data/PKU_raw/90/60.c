
int i,j,k,t,a[101][11],b[101][11],m[20],n[20],z[101][11];

void main()
{
	scanf("%d",&t);

	for (i=0;i<t;i++)
	{
		scanf("%d %d",&m[i],&n[i]);
	}

	 for (i=1;i<=100;i++)
	 {
		 b[i][i]=1;
		 z[i][1]=1;
		 z[i][2]=i/2+1;
		 for (j=1;j<=10;j++)
		 {
			 if (i<j) z[i][j]=0;
		 }
	 }

	 for (i=1;i<=10;i++)
	 {
		 z[1][i]=1;
	 }
	 for (i=2;i<=10;i++)
	 {
		 z[2][i]=2;
	 }

	 for (i=3;i<=100;i++)
	 {
		 for (j=3;j<=10;j++)
		 {
			 if (i<j) z[i][j]=z[i][i];
			 else
			 {
				a[i][j]=z[i][j-1];
				if (i!=j) b[i][j]=z[i-j][j];
				z[i][j]=a[i][j]+b[i][j];
			 }
		 }
	 }

	 for (i=0;i<t;i++)
	 {
		 j=m[i];
		 k=n[i];
		 printf("%d\n",z[j][k]);
	 }

}

		