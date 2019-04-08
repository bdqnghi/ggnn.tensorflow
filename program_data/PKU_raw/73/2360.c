void main()
{
	int a[5][5],c,t=1,i,j,k,max,colum,row;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<5;i++)
	{
		max=a[i][0];
		colum=0;
		row=i;
		for(j=1;j<5;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				colum=j;
			}
		}
		c=1;
		for(k=0;k<5;k++){
			if(a[k][colum]<a[row][colum])
				c=0;}
		if(c){printf("%d %d %d",row+1,colum+1,a[row][colum]);t=0;}
	}
	if(t)printf("not found");
}
