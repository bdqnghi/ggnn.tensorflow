void main()
{
	int n,qm[100],bj[100],lw[100],i,j,l=0,k,z[100]={0},p=0;
	char na[100][30],bg[100],mz[100],P[1][30];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",na[i],&qm[i],&bj[i],&bg[i],&mz[i],&lw[i]);
	}
for(i=0;i<n;i++)
	{
		if(qm[i]>80 && lw[i]>=1)
			z[i]=z[i]+8000;
		if(qm[i]>85 && bj[i]>80)
			z[i]=z[i]+4000;
		if(qm[i]>90)
			z[i]=z[i]+2000;
		if(qm[i]>85 && mz[i]=='Y')
			z[i]=z[i]+1000;
		if(bg[i]=='Y' && bj[i]>80)
			z[i]=z[i]+850;
	}
	for(j=0;j<n-1;j++)
	{
			for(i=0;i<n-j-1;i++)

			if(z[i]<z[i+1])
			{
				k=z[i];
				z[i]=z[i+1];
				z[i+1]=k;
				strcpy(P,na[i]);
				strcpy(na[i],na[i+1]);
				strcpy(na[i+1],P);

			}
				
	}
	for(i=0;i<n;i++)
		p=p+z[i];
	printf("%s\n%d\n%d\n",na[0],z[0],p);
}