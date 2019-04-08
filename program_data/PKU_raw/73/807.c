main()
{	
	int a[5][5];
	for (int i=0;i<=4;i++)
	for(int j=0;j<=4;j++)
		scanf("%d",&a[i][j]);
	int min[5];
	for (int k=0;k<=4;k++){
		int temp=a[0][k];
		for (int m=1;m <=4;m++){
			if(a[m][k]<temp)
			temp=a[m][k];
		} 
		min[k]=temp;
	} 
	int b,c,l=0;
	for ( b=0;b<=4;b++){
		int max=a[b][0];
		for (c=1;c<=4;c++){
			if(a[b][c]>max)
			max=a[b][c];
		}
	for(c=0;c<=4;c++)
	{
		if(a[b][c]==max&&a[b][c]==min[c])
		{
		printf("%d %d %d",b+1,c+1,a[b][c]);
		l++;
		}
	}
	}
	if(l==0)
	printf("not found");
} 
