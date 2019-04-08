void main()
{
	double *yu[100][1000],g,h; /*????????*/
	int k,n[100],i,j;
	scanf("%d",&k);
	for (i=0;i<k;i++)
	{
		scanf("%d",&n[i]);
		for (j=0;j<n[i];j++)
		{
			yu[i][j]=(float*) malloc(8);
			scanf("%lf",yu[i][j]);
		}
	}
	for (i=0;i<k;i++)   /*??????*/
	{
		for (g=0,j=0;j<n[i];j++)
			g=g+*yu[i][j];
		g=g/n[i];
		for (h=0,j=0;j<n[i];j++)
		{
			h=h+(*yu[i][j]-g)*(*yu[i][j]-g);
		}
		h=h/n[i];
		h=sqrt(h);
		printf("%.5f\n",h);
	} /*???????????????……………………*/
}
