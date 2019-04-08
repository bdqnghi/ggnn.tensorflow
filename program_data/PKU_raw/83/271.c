void main(void)
{
	int n,point[11],score[11],i,j,k,l,p=0;
	float gpa[11],g=0.0,pa;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)scanf("%d",&point[i]);
	for(j=1;j<=n;j++)p=p+point[j];
	for(k=1;k<=n;k++)scanf("%d",&score[k]);
	for(k=1;k<=n;k++)
	{
		
		if(90<=score[k],score[k]<=100)gpa[k]=4.0;
		if(85<=score[k],score[k]<=89)gpa[k]=3.7;
		if(82<=score[k],score[k]<=84)gpa[k]=3.3;
		if(78<=score[k],score[k]<=81)gpa[k]=3.0;
		if(75<=score[k],score[k]<=77)gpa[k]=2.7;
		if(72<=score[k],score[k]<=74)gpa[k]=2.3;
		if(68<=score[k],score[k]<=71)gpa[k]=2.0;
		if(64<=score[k],score[k]<=67)gpa[k]=1.5;
		if(60<=score[k],score[k]<=63)gpa[k]=1.0;
		if(score[k]<60)gpa[k]=0.0;
	}
	for(l=1;l<=n;l++)g=g+(point[l]*gpa[l]);
	pa=g/p;
	printf("%.2f",pa);
}