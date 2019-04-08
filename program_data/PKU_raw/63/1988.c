main()
{
	int m ;int n;
	scanf("%d %d",&m,&n);
	int a[120][120];
	for (int i=0;i<=m-1;i++)
		for (int j=0;j<=n-1;j++)
		scanf ("%d",&a[i][j]);
	int p,q;
	scanf ("%d %d",&p,&q);
	int b[120][120];
	for (int c=0;c<=p-1;c++)
		for (int d=0;d <=q-1;d++)
		scanf ("%d",&b[c][d]);
	int e[120][120];
	for (int f=0;f<=m-1;f++)
		for (int g=0;g<=q-1;g++)
		{
			e[f][g]=0;
			for(int h=0;h<=n-1;h++)
			e[f][g]=e[f][g]+ a[f][h]*b[h][g]; 
		} 
	for (int k=0;k<=m-1;k++)
		{
		 for (int l=0;l<= q-2;l++)
		 printf ("%d ",e[k][l]);
		 printf ("%d\n",e[k][q-1]);	
	    }
}