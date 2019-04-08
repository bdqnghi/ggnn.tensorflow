main()
{
	int a[5][5],min[5],max[5];
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<5;i++)
	{
		min[i]=a[0][i];
		max[i]=a[i][0];
	}
	for(i=0;i<5;i++)
	{
	 for(j=0;j<5;j++)
	 {
	 	if(a[i][j]>max[i]) max[i]=a[i][j];
	 	if(a[i][j]<min[j]) min[j]=a[i][j];
	 }
	}
	int k=0;
	for(i=0;i<5;i++)
	{
	 for(j=0;j<5;j++)
	 {
	 	if(max[i]==min[j])
	 	{
	 		printf("%d %d %d",i+1,j+1,max[i]);
	 		k++;
	 	}
	 }
	}
	if(k==0) printf("not found");
}